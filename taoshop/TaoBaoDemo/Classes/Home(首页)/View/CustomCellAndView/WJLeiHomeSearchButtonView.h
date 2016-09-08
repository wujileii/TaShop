//
//  WJLeiHomeSearchButtonView.h
//  TaoBaoDemo
//
//  Created by WJLei on 16/6/8.
//  Copyright © 2016年 WJLei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WJLeiHomeSearchButtonView : UIView

@property (nonatomic, copy) void (^cameraButtonBlock)();
@property (nonatomic, copy) void (^searchButtonBlock)();


@end
