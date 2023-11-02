
@interface NTKModularSmallBatteryTemplateView : NTKModularSmallRingTemplateView

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void)_refreshRingImage;
- (void)_update;
- (void)applyColorScheme:(id)arg1;
- (id)forcedRingColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredRingColor;

@end
