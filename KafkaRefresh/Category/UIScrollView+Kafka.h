/*************************************************************
 * Copyright (c) 2016-present, K.							 *
 * All rights reserved.										 *
 *															 *
 * e-mail: xorshine@icloud.com								 *
 * github:https://github.com/xorshine						 *
 *															 *
 * This source code is licensed under the MIT license.		 *
 *************************************************************/

#import <UIKit/UIKit.h>

@class KafkaHeaderRefreshControl,KafkaFooterRefreshControl;

@interface UIScrollView (KafkaRefreshControl)

/**
 * Bind the UIScrollView to the refresh control, dynamic binding at runtime
 */
@property (strong, nonatomic) __kindof KafkaHeaderRefreshControl *headRefreshControl;
@property (strong, nonatomic) __kindof KafkaFooterRefreshControl *footRefreshControl;

@end


