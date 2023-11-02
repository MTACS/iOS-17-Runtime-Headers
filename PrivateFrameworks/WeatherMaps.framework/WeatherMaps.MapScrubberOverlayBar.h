
@interface WeatherMaps.MapScrubberOverlayBar : UIControl {
    void $__lazy_storage_$_gestureRecognizer;
    void accessibilityDateFormatter;
    void bar;
    void barHeight;
    void baselineSpacing;
    void control;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  current;
    void elapsedBar;
    void extraPadding;
    void forceNeedsLayout;
    void lastBounds;
    void minimumWidth;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  model;
    void nowLabel;
    void nowTickMark;
    void overlappingLabelInsets;
    void tickMarks;
    void tickWidth;
    void todayLabel;
    void verticalHitAreaIncrease;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } accessibilityActivationPoint;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)handleWithGesture:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccessibilityActivationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
