
@interface UIViewFloatAnimatableProperty : UIAnimatablePropertyWrapper

@property (nonatomic, readonly) double presentationValue;
@property (nonatomic) double value;
@property (nonatomic) double velocity;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)_floatAnimatableProperty;
- (double)presentationValue;
- (void)setValue:(double)arg1;
- (void)setVelocity:(double)arg1;
- (double)value;
- (double)velocity;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (id)sbsa_animatablePropertyWithProgressMilestones:(id)arg1 block:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (id)unui_animatablePropertyWithProgressMilestones:(id)arg1 block:(id /* block */)arg2;

@end
