//
//  FxBaseController.h
//  NewsReader
//
//  Created by hejinbo on 15/7/7.
//  Copyright (c) 2015年 MyCos. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FxOperation.h"
#import "FxActivity.h"

@interface FxBaseController : UIViewController <FxOperationDelegate> {
    FxOperation     *_operation;
    FxActivity      *_activity;
}

- (void)showIndicator:(NSString *)tipMessage
             autoHide:(BOOL)hide
           afterDelay:(BOOL)delay;
- (void)hideIndicator;

- (void)setNavigationTitleImage:(NSString *)imageName;
- (void)setNavigationLeft:(NSString *)imageName sel:(SEL)sel;
- (void)setNavigationRight:(NSString *)imageName;
- (void)setStatusBarStyle:(UIStatusBarStyle)style;
- (IBAction)doBack:(id)sender;

@end
