//
//  AppDelegate.h
//  MusicApp
//
//  Created by 王浩田 on 2018/7/21.
//  Copyright © 2018年 MusicApp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreTelephony/CTCallCenter.h>
#import <CoreTelephony/CTCall.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
// 通话监听
@property (nonatomic, strong) CTCallCenter *callCenter;

@end

