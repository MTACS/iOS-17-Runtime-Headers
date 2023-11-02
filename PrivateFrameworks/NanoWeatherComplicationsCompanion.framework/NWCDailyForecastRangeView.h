
@interface NWCDailyForecastRangeView : UIView {
    UILabel * _highLabel;
    UILabel * _lowLabel;
}

@property (nonatomic, readonly) UILabel *highLabel;
@property (nonatomic, readonly) UILabel *lowLabel;

- (void).cxx_destruct;
- (void)_applyConstraints:(struct { double x1; double x2; double x3; double x4; double x5; })arg1;
- (id)_rangeLabelWithFontSize:(double)arg1;
- (id)highLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lowLabel;

@end
