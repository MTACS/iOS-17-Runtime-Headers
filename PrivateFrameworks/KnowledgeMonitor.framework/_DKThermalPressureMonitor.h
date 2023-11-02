
@interface _DKThermalPressureMonitor : _DKMonitor {
    bool  _initialized;
    int  _lastThermalPressureLevel;
    bool  _peakPowerPressureLevel;
    int  _peakPowerPressureToken;
    int  _thermalPressureToken;
}

@property (nonatomic) bool initialized;
@property (nonatomic) int lastThermalPressureLevel;
@property (nonatomic) bool peakPowerPressureLevel;
@property (nonatomic) int peakPowerPressureToken;
@property (nonatomic) int thermalPressureToken;

+ (id)entitlements;
+ (id)eventStream;

- (void)deactivate;
- (void)dealloc;
- (void)getPeakPowerPressureLevelWithToken:(int)arg1;
- (void)getThermalPressureLevelWithToken:(int)arg1;
- (bool)initialized;
- (int)lastThermalPressureLevel;
- (id)loadState;
- (bool)peakPowerPressureLevel;
- (int)peakPowerPressureToken;
- (void)saveState;
- (void)setCurrentPeakPowerPressureLevel:(unsigned int)arg1;
- (void)setCurrentThermalLevel:(int)arg1;
- (void)setInitialized:(bool)arg1;
- (void)setLastThermalPressureLevel:(int)arg1;
- (void)setPeakPowerPressureLevel:(bool)arg1;
- (void)setPeakPowerPressureToken:(int)arg1;
- (void)setThermalPressureToken:(int)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (int)thermalPressureToken;

@end
