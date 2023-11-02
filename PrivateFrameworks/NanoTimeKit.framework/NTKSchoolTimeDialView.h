
@interface NTKSchoolTimeDialView : UIView {
    unsigned long long  _activeHour;
    NSDictionary * _hourLabels;
    double  _ringWidth;
}

- (void).cxx_destruct;
- (id)_activeHourColor;
- (id)_inactiveHourColor;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ringWidth:(double)arg2;
- (void)setActiveHour:(unsigned long long)arg1 animated:(bool)arg2;

@end
