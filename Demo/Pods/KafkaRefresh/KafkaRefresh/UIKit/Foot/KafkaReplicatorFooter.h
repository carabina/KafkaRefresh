/**
 * Copyright (c) 2016-present, K.
 * All rights reserved.
 *
 * e-mail:xorshine@icloud.com
 * github:https://github.com/xorshine
 *
 * This source code is licensed under the MIT license.
 */

#import "KafkaFooterRefreshControl.h"
#import "KafkaReplicatorLayer.h"

@interface KafkaReplicatorFooter : KafkaFooterRefreshControl

@property (strong, nonatomic) KafkaReplicatorLayer * replicatorLayer;
@property (assign, nonatomic) KafkaReplicatorLayerAnimationStyle animationStyle;

@end
