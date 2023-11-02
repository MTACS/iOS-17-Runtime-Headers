
@interface JFXThermalMonitor : NSObject {
    int  _currentThermalLevel;
    bool  _hasGoneAboveNominal;
    int  _highestThermalLevel;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) int currentThermalLevel;
@property (nonatomic) bool hasGoneAboveNominal;
@property (nonatomic) int highestThermalLevel;
@property (nonatomic, readonly) int highestThermalLevelReached;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) int thermalLevel;
@property (nonatomic, readonly) bool thermalLevelExceededNominal;

+ (void)enumerateThermalPressureLevel:(id /* block */)arg1;
+ (id)sharedInstance;
+ (id)stringFromThermalPressureLevel:(int)arg1;

- (void).cxx_destruct;
- (id)_analyticValueForThermalLevelBefore:(int)arg1 after:(int)arg2;
- (bool)_disabledThermalTracking;
- (void)_postNotification:(id)arg1;
- (bool)_updateThermalLevelsWithToken:(int)arg1;
- (int)currentThermalLevel;
- (bool)hasGoneAboveNominal;
- (int)highestThermalLevel;
- (int)highestThermalLevelReached;
- (id)init;
- (id)queue;
- (void)setCurrentThermalLevel:(int)arg1;
- (void)setHasGoneAboveNominal:(bool)arg1;
- (void)setHighestThermalLevel:(int)arg1;
- (void)setQueue:(id)arg1;
- (int)thermalLevel;
- (bool)thermalLevelExceededNominal;
- (id)thermalLevelLabel;

@end
