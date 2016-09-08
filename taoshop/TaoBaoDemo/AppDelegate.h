//
//  AppDelegate.h
//  TaoBaoDemo
//
//  Created by WJLei on 16/6/4.
//  Copyright © 2016年 WJLei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserInfomation.h"

//#import <AVFoundation/AVFoundation.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>


@property (strong ,nonatomic) UserInfomation *userInfomation;
@property (strong, nonatomic) UIWindow *window;
@property (assign, nonatomic) BOOL userHasLogin;

@property (assign, nonatomic) int numberOfGoods;
@property (strong, nonatomic) NSMutableArray *arrayForCart;



@end

