//
//  ZCBezierPathView.h
//  ZCBezierPathLayer
//
//  Created by trustway_mac on 16/5/9.
//  Copyright © 2016年 trustway_mac. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, ZCBezierPathType) {
    kTriaPath = 1, // 三角形
    kRectPath = 2, // 矩形
    kCirclePath = 3,//圆
    kOvalPath = 4, // 椭圆
    kRoundedRectPath = 5, // 带圆角的矩形
    kArcPath = 6, // 弧
    kSecondBezierPath = 7, // 二次贝塞尔曲线
    kThirdBezierPath = 8 // 三次贝塞尔曲线
};

@interface ZCBezierPathView : UIView

@property (nonatomic, assign) ZCBezierPathType type;

@end
