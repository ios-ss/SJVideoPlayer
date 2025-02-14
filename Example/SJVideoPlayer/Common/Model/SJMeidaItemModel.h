//
//  SJMeidaItemModel.h
//  SJVideoPlayer
//
//  Created by 畅三江 on 2019/6/8.
//  Copyright © 2019 畅三江. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SJMeidaItemModel : NSObject
+ (NSArray<SJMeidaItemModel *> *)testItems;
+ (instancetype)testItem;

@property (nonatomic, readonly) NSInteger id;
@property (nonatomic, copy, nullable) NSString *mediaTitle;
@property (nonatomic, copy, nullable) NSString *cover;
@property (nonatomic, copy, nullable) NSString *avatar;
@property (nonatomic, copy, nullable) NSString *username;
@property (nonatomic, strong, nullable) NSURL *URL;
@end

NS_ASSUME_NONNULL_END
