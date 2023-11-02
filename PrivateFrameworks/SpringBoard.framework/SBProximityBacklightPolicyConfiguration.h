
@interface SBProximityBacklightPolicyConfiguration : NSObject {
    SBBacklightController * _backlightController;
    SBProximitySettings * _proximitySettings;
    SBHIDUISensorModeController * _sensorModeController;
    SBSystemGestureManager * _systemGestureManager;
}

@property (nonatomic, retain) SBBacklightController *backlightController;
@property (nonatomic, retain) SBProximitySettings *proximitySettings;
@property (nonatomic, retain) SBHIDUISensorModeController *sensorModeController;
@property (nonatomic, retain) SBSystemGestureManager *systemGestureManager;

- (void).cxx_destruct;
- (id)backlightController;
- (id)proximitySettings;
- (id)sensorModeController;
- (void)setBacklightController:(id)arg1;
- (void)setProximitySettings:(id)arg1;
- (void)setSensorModeController:(id)arg1;
- (void)setSystemGestureManager:(id)arg1;
- (id)systemGestureManager;

@end
