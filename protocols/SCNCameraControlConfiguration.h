
@protocol SCNCameraControlConfiguration <NSObject>

@required

- (bool)allowsTranslation;
- (bool)autoSwitchToFreeCamera;
- (double)flyModeVelocity;
- (double)panSensitivity;
- (double)rotationSensitivity;
- (void)setAllowsTranslation:(bool)arg1;
- (void)setAutoSwitchToFreeCamera:(bool)arg1;
- (void)setFlyModeVelocity:(double)arg1;
- (void)setPanSensitivity:(double)arg1;
- (void)setRotationSensitivity:(double)arg1;
- (void)setTruckSensitivity:(double)arg1;
- (double)truckSensitivity;

@end
