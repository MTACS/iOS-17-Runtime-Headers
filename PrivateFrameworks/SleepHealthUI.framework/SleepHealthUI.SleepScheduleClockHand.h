
@interface SleepHealthUI.SleepScheduleClockHand : UIControl {
    void background;
    void configuration;
    void image;
    void symbol;
}

@property (nonatomic) bool highlighted;

- (void).cxx_destruct;
- (bool)accessibilityHandIsBedtime;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;

@end
