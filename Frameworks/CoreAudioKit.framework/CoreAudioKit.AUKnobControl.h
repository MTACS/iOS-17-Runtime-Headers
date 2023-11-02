
@interface CoreAudioKit.AUKnobControl : UIControl {
    void formatter;
    void lineLayer;
    void max;
    void maxValueLayer;
    void min;
    void minValueLayer;
    void numDigits;
    void param;
    void previousTouchPosition;
    void title;
    void titleLayer;
    void value;
    void valueLabel;
    void valueLayer;
}

@property (nonatomic) unsigned long long accessibilityTraits;

- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)tintColorDidChange;

@end
