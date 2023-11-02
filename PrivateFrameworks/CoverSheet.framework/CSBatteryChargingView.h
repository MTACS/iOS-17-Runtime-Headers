
@interface CSBatteryChargingView : CSCoverSheetViewBase {
    double  _alignmentPercent;
    _UILegibilitySettings * _legibilitySettings;
    CSProminentLayoutController * _prominentLayoutController;
}

@property (nonatomic) double alignmentPercent;
@property (nonatomic, readonly) long long batteryCount;
@property (nonatomic) bool batteryVisible;
@property (nonatomic, readonly) double desiredVisibilityDuration;
@property (nonatomic, readonly) double horizontalGapBetweenBatteryAndPercentLabel;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;

+ (id)batteryChargingRingViewWithConfiguration:(id)arg1;
+ (id)batteryChargingViewWithDoubleBattery;
+ (id)batteryChargingViewWithSingleBattery;
+ (id)horizontalBatteryChargingViewForBatterySize:(struct CGSize { double x1; double x2; })arg1 includeBoltImage:(bool)arg2;
+ (id)maskImageNameForChargingBattery;
+ (id)maskImageNameForExternalChargingBattery;
+ (id)maskImageNameForInternalChargingBattery;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_batteryCenter;
- (double)_batteryHeight;
- (id)_chargePercentFont;
- (struct CGSize { double x1; double x2; })_imageViewScalingCorrectedBatterySize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_tightFrameForElement:(unsigned long long)arg1;
- (id)_updateChargeString:(id)arg1 oldLabel:(id)arg2;
- (double)alignmentPercent;
- (long long)batteryCount;
- (bool)batteryVisible;
- (double)desiredVisibilityDuration;
- (double)horizontalGapBetweenBatteryAndPercentLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)legibilitySettings;
- (void)performAnimation:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setAlignmentPercent:(double)arg1;
- (void)setBatteryVisible:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2;

@end
