
@protocol TSDSmartPathSource

@required

- (struct CGPoint { double x1; double x2; })getControlKnobPosition:(unsigned long long)arg1;
- (NSString *)getFeedbackStringForKnob:(unsigned long long)arg1;
- (struct CGPath { }*)newFeedbackPathForKnob:(unsigned long long)arg1;
- (unsigned long long)numberOfControlKnobs;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;

@optional

- (struct CGPoint { double x1; double x2; })fixedPointForControlKnobChange;

@end
