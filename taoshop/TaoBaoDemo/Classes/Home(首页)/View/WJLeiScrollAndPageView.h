//  WJLeiScrollAndPageView.h
//  循环滚动视图//
//  Created by WJLei on 16/6/7.
//  Copyright (c) 2015年 jereh. All rights reserved.//
#import <UIKit/UIKit.h>

//@protocol WHScrollViewViewDelegate;

@class WJLeiScrollAndPageView;
@protocol WJLeiScrollViewViewDelegate <NSObject>

@optional

- (void)didClickPage:(WJLeiScrollAndPageView *)view atIndex:(NSInteger)index;

@end



@interface WJLeiScrollAndPageView : UIView


//@property(nonatomic, weak)id <WHScrollViewViewDelegate> delegate;

@property (nonatomic, weak) id <WJLeiScrollViewViewDelegate> delegate;

@property (nonatomic, strong) NSMutableArray *imageViewAry;


-(void)shouldAutoShow:(BOOL)shouldStart;

@end

