
@interface ClockPoster.ClockLabel : CLKUITimeLabel {
    void observingOverrideDate;
}

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTimeLabelOptions:(unsigned long long)arg1;
- (id)initWithTimeLabelOptions:(unsigned long long)arg1 forDevice:(id)arg2;
- (id)initWithTimeLabelOptions:(unsigned long long)arg1 forDevice:(id)arg2 clockTimer:(id)arg3;
- (void)layoutSubviews;

@end
