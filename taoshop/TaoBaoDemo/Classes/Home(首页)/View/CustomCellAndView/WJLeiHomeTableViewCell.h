//
//  WJLeiHomeTableViewCell.h
//  TaoBaoDemo
//
//  Created by WJLei on 16/6/8.
//  Copyright © 2016年 WJLei. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AppDelegate;


@protocol WJLeiHomeTableViewCellDelegate <NSObject>

- (void)actWhenUserTouchThisCell;

@end


@interface WJLeiHomeTableViewCell : UITableViewCell



@property (nonatomic, assign) id<WJLeiHomeTableViewCellDelegate> delegate;

@property (nonatomic, copy) void (^ForSectionTwoCell)();

@property (assign, nonatomic) float widthLength;
@property (strong, nonatomic) UIImageView *imageViewHead;
@property (strong, nonatomic) UILabel *labelHead;

@property (nonatomic, strong) UIButton *button1;
@property (nonatomic, strong) UILabel *label1_1;
@property (nonatomic, strong) UILabel *label1_2;

@property (nonatomic, strong) UIButton *button2;
@property (nonatomic, strong) UILabel *label2_1;
@property (nonatomic, strong) UILabel *label2_2;

@property (nonatomic, strong) UIButton *button3;
@property (nonatomic, strong) UILabel *label3_1;
@property (nonatomic, strong) UILabel *label3_2;

@property (nonatomic, strong) UIButton *button4;
@property (nonatomic, strong) UILabel *label4_1;
@property (nonatomic, strong) UILabel *label4_2;

@property (nonatomic, strong) UIButton *button5;
@property (nonatomic, strong) UILabel *label5_1;
@property (nonatomic, strong) UILabel *label5_2;

@property (nonatomic, strong) UIButton *button6;
@property (nonatomic, strong) UILabel *label6_1;
@property (nonatomic, strong) UILabel *label6_2;

@property (nonatomic, strong) UIButton *button7;
@property (nonatomic, strong) UILabel *label7_1;
@property (nonatomic, strong) UILabel *label7_2;

@property (nonatomic, strong) UIButton *button8;
@property (nonatomic, strong) UILabel *label8_1;
@property (nonatomic, strong) UILabel *label8_2;

@end
