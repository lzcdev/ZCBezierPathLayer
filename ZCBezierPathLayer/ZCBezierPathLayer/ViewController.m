//
//  ViewController.m
//  ZCBezierPathLayer
//
//  Created by trustway_mac on 16/5/9.
//  Copyright © 2016年 trustway_mac. All rights reserved.
//

#import "ViewController.h"
#import "ZCBezierPathView.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    ZCBezierPathView *zcbezierView = [[ZCBezierPathView alloc]initWithFrame:self.view.bounds];
    //type = 1,2,3,4,5,6,7,8,，修改type数值可改变形状
    zcbezierView.type = 8;
    [self.view addSubview:zcbezierView];
}

@end
