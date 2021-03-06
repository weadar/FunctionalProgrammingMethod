//
//  CaculateManager.h
//  函数式编程思想
//
//  Created by Emo_Lin on 15/8/28.
//  Copyright © 2015年 linweida_emo. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CalculateManager : NSObject

@property (nonatomic, assign) NSInteger result;

// 计算
- (instancetype)calculate:(NSInteger(^)(NSInteger))calculateBlock;

@end
