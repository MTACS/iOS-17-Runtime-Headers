
@interface PVThermalMonitor : NSObject {
    int  _currentThermalLevel;
    bool  _enabled;
    bool  _hasGoneAboveNominal;
    int  _highestThermalLevel;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) int currentThermalLevel;
@property (nonatomic) bool enabled;
@property (nonatomic) bool hasGoneAboveNominal;
@property (nonatomic) int highestThermalLevel;
@property (nonatomic, readonly) int highestThermalLevelReached;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) int thermalLevel;
@property (nonatomic, readonly) bool thermalLevelExceededNominal;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_disabledThermalTracking;
- (void)_postNotificationPrevious:(int)arg1 new:(int)arg2;
- (void)_setCurrentThermalLevel:(int)arg1;
- (bool)_updateThermalLevelsWithToken:(int)arg1;
- (int)currentThermalLevel;
- (bool)enabled;
- (bool)hasGoneAboveNominal;
- (int)highestThermalLevel;
- (int)highestThermalLevelReached;
- (id)init;
- (id)queue;
- (void)setCurrentThermalLevel:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasGoneAboveNominal:(bool)arg1;
- (void)setHighestThermalLevel:(int)arg1;
- (void)setQueue:(id)arg1;
- (int)thermalLevel;
- (bool)thermalLevelExceededNominal;
- (id)thermalLevelLabel;

@end
