
@interface NTKModularSmallActivityTemplateView : NTKModularTemplateView {
    NSMutableArray * _ringsFillFractions;
    NTKRingsAndDotsView * _ringsView;
}

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_configureContentSubviews;
- (void)_layoutContentView;
- (void)_setLayoutEmptyRings;
- (void)_update;
- (void)applyColorScheme:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setIsXL:(bool)arg1;

@end
