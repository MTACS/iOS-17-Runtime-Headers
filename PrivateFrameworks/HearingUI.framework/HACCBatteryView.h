
@interface HACCBatteryView : UIView {
    _UIBatteryView * _batteryView;
    NSNumberFormatter * _numberFormatter;
    UILabel * _sideLabel;
    UILabel * _valueLabel;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setValue:(double)arg1 forEar:(int)arg2;

@end
