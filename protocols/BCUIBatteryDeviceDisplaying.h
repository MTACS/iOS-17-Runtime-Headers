
@protocol BCUIBatteryDeviceDisplaying <NSObject>

@required

- (UIImage *)glyph;
- (bool)isCharging;
- (bool)isLowCharge;
- (bool)isLowPowerModeEnabled;
- (long long)percentCharge;
- (double)scaleFactor;
- (void)setCharging:(bool)arg1;
- (void)setGlyph:(UIImage *)arg1;
- (void)setLowCharge:(bool)arg1;
- (void)setLowPowerModeEnabled:(bool)arg1;
- (void)setPercentCharge:(long long)arg1;
- (void)setScaleFactor:(double)arg1;

@optional

- (bool)isEmpty;
- (NSString *)name;
- (void)setEmpty:(bool)arg1;
- (void)setName:(NSString *)arg1;
- (void)setTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg1;
- (<UIViewControllerTransitionCoordinator> *)transitionCoordinator;

@end
