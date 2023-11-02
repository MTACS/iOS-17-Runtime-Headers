
@interface PXMediaProviderSettings : PXSettings {
    bool  _simulateError;
    double  _simulatedDelay;
    bool  _wantsSimulation;
}

@property (nonatomic) bool simulateError;
@property (nonatomic) double simulatedDelay;
@property (nonatomic) bool wantsSimulation;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (id)parentSettings;
- (void)setDefaultValues;
- (void)setSimulateError:(bool)arg1;
- (void)setSimulatedDelay:(double)arg1;
- (void)setWantsSimulation:(bool)arg1;
- (bool)simulateError;
- (double)simulatedDelay;
- (bool)wantsSimulation;

@end
