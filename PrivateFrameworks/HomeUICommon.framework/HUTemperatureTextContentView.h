
@interface HUTemperatureTextContentView : HUIconContentView {
    UILabel * _temperatureLabel;
}

@property (nonatomic, readonly) HFTemperatureIconDescriptor *iconDescriptor;
@property (nonatomic, retain) UILabel *temperatureLabel;

- (void).cxx_destruct;
- (void)configureLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTemperatureLabel:(id)arg1;
- (id)temperatureLabel;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(bool)arg3;

@end
