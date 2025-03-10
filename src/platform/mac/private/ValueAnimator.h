/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Tencent is pleased to support the open source community by making libpag available.
//
//  Copyright (C) 2021 THL A29 Limited, a Tencent company. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file
//  except in compliance with the License. You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  unless required by applicable law or agreed to in writing, software distributed under the
//  license is distributed on an "as is" basis, without warranties or conditions of any kind,
//  either express or implied. see the license for the specific language governing permissions
//  and limitations under the license.
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#import <QuartzCore/QuartzCore.h>

@protocol ValueAnimatorListener <NSObject>

- (void)onAnimationUpdate:(double)value;

- (void)onAnimationStart;

- (void)onAnimationEnd;

- (void)onAnimationCancel;

- (void)onAnimationRepeat;

@end

@interface ValueAnimator : NSObject {
  int64_t duration;
  int64_t startTime;
  int64_t playTime;
  int repeatCount;
  int lastRepeatCount;
  int64_t animatorId;
  id<ValueAnimatorListener> animatorListener;
}

- (void)setListener:(id)listener;

- (int64_t)duration;

- (void)setDuration:(int64_t)duration;

- (void)setCurrentPlayTime:(int64_t)playTime;

- (BOOL)isPlaying;

- (void)setRepeatCount:(int)value;

- (void)start;

- (void)stop;

- (void)stop:(bool)notification;

- (int64_t)animatorId;

@end
