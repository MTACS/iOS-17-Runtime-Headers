
@interface SGHarvestQueueMetrics : NSObject {
    _PASLock * _guardedData;
    SGM2HarvestCost * _harvestCostMetrics;
}

+ (id)overridePET2InstanceForTesting:(id)arg1;

- (void).cxx_destruct;
- (int)_documentSourceForBundleId:(id)arg1;
- (void)endHarvest;
- (void)endTimer:(id)arg1 significantWork:(bool)arg2;
- (id)harvestTimerForName:(id)arg1;
- (id)harvestTimes;
- (id)initRealtime:(id)arg1 wasNoBudgetItem:(bool)arg2;
- (id)initWithBundleIdentifier:(id)arg1 highPriority:(bool)arg2 harvestedOnBattery:(bool)arg3 receivedOnBattery:(bool)arg4 harvestSource:(int)arg5;
- (void)startHarvest;
- (void)startTimer:(id)arg1;

@end
