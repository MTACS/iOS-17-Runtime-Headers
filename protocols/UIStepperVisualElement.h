
@protocol UIStepperVisualElement <NSObject>

@required

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })initialAlignmentRectInsets;
+ (struct CGSize { double x1; double x2; })initialIntrinsicSize;
+ (struct CGSize { double x1; double x2; })initialSize;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsetsForControl:(id <UIStepperControl>)arg1;
- (bool)autorepeat;
- (UIImage *)backgroundImageForState:(unsigned long long)arg1;
- (bool)beginTrackingWithTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (void)cancelTrackingWithEvent:(UIEvent *)arg1;
- (bool)continueTrackingWithTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (UIImage *)decrementImageForState:(unsigned long long)arg1;
- (UIImage *)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
- (void)endTrackingWithTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (UIImage *)incrementImageForState:(unsigned long long)arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1 forControl:(id <UIStepperControl>)arg2;
- (bool)isContinuous;
- (bool)isEnabled;
- (double)maximumValue;
- (double)minimumValue;
- (void)setAutorepeat:(bool)arg1;
- (void)setBackgroundImage:(UIImage *)arg1 forState:(unsigned long long)arg2;
- (void)setContinuous:(bool)arg1;
- (void)setDecrementImage:(UIImage *)arg1 forState:(unsigned long long)arg2;
- (void)setDividerImage:(UIImage *)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
- (void)setEnabled:(bool)arg1;
- (void)setIncrementImage:(UIImage *)arg1 forState:(unsigned long long)arg2;
- (void)setMaximumValue:(double)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setStepValue:(double)arg1;
- (void)setStepperControl:(id <UIStepperControl>)arg1;
- (void)setValue:(double)arg1;
- (void)setWraps:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forControl:(id <UIStepperControl>)arg2;
- (double)stepValue;
- (<UIStepperControl> *)stepperControl;
- (double)value;
- (bool)wraps;

@end
