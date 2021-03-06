//
//  CPEachHeaderView.h
//  Graduationdesign
//
//  Created by cheng on 16/4/13.
//  Copyright © 2016年 chengpeng. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CPGameResult;
@class CPEachHeaderView;

@protocol CPEachHeaderViewDelegate <NSObject>

- (void)eachHeaderViewChooseGameDetail:(CPEachHeaderView *)view;
- (void)eachHeaderViewChooseGameStrategy:(CPEachHeaderView *)view;
- (void)eachHeaderViewChooseGameVideo:(CPEachHeaderView *)view;

@end

@interface CPEachHeaderView : UIView
+ (instancetype)eachHeaderView;
@property (nonatomic, strong) CPGameResult *gameResult;

@property (nonatomic, weak) id<CPEachHeaderViewDelegate> delegate;
@end
