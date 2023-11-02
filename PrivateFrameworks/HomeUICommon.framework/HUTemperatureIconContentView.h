
@interface HUTemperatureIconContentView : HUIconContentView {
    NSString * _lastFontFittedText;
    double  _lastFontFittedWidth;
    UIFont * _lastFontFittingSize;
}

@property (nonatomic, readonly) HFTemperatureIconDescriptor *iconDescriptor;
@property (nonatomic, retain) NSString *lastFontFittedText;
@property (nonatomic) double lastFontFittedWidth;
@property (nonatomic, retain) UIFont *lastFontFittingSize;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lastFontFittedText;
- (double)lastFontFittedWidth;
- (id)lastFontFittingSize;
- (void)setLastFontFittedText:(id)arg1;
- (void)setLastFontFittedWidth:(double)arg1;
- (void)setLastFontFittingSize:(id)arg1;
- (bool)shouldFlipForRTL;
- (void)tintColorDidChange;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(bool)arg3;

@end
