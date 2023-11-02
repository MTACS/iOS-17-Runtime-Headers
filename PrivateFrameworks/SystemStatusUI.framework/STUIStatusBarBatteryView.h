
@interface STUIStatusBarBatteryView : _UIBatteryView <STUIStatusBarDisplayable>

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) bool prefersBaselineAlignment;
@property (nonatomic, readonly) bool prefersCenterVerticalAlignment;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsCrossfade;

+ (struct CGSize { double x1; double x2; })_batterySizeForIconSize:(long long)arg1;
+ (double)_insideCornerRadiusForIconSize:(long long)arg1;
+ (double)_lineWidthAndInterspaceForIconSize:(long long)arg1;
+ (double)_outsideCornerRadiusForIconSize:(long long)arg1;
+ (struct CGSize { double x1; double x2; })_pinSizeForIconSize:(long long)arg1;
+ (struct CGSize { double x1; double x2; })_statusBarIntrinsicContentSizeForIconSize:(long long)arg1;

- (double)_batteryBoltScaleFactorMultiplier;
- (double)_percentTextVerticalAdjustmentForIconSize:(long long)arg1;
- (double)_percentTextXAdjustmentWhenFullForIconSize:(long long)arg1;
- (double)_percentageBatteryBoltScaleFactorMultiplier;
- (double)_percentageFontCondensedWhenChargingForIconSize:(long long)arg1;
- (double)_percentageFontSizeForIconSize:(long long)arg1;
- (void)applyStyleAttributes:(id)arg1;
- (bool)hasValidIconSize;

@end
