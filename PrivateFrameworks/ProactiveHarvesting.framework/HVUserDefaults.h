
@interface HVUserDefaults : NSObject {
    NSUserDefaults * _defaults;
}

+ (id)defaults;
+ (double)harvestBudgetCPUTimeSeconds;
+ (bool)harvestBudgetDisabled;
+ (long long)harvestBudgetNumberOfOperations;
+ (bool)harvestBudgetRefillDisabled;
+ (double)harvestBudgetReserve;
+ (bool)harvestBudgetThrottleBudgetDisabled;
+ (void)resetHarvestBudgetCPUTimeSeconds;
+ (void)resetHarvestBudgetDisabled;
+ (void)resetHarvestBudgetNumberOfOperations;
+ (void)resetHarvestBudgetRefillDisabled;
+ (void)resetHarvestBudgetReserve;
+ (void)resetHarvestBudgetThrottleBudgetDisabled;
+ (void)setHarvestBudgetCPUTimeSeconds:(double)arg1;
+ (void)setHarvestBudgetDisabled:(bool)arg1;
+ (void)setHarvestBudgetNumberOfOperations:(long long)arg1;
+ (void)setHarvestBudgetRefillDisabled:(bool)arg1;
+ (void)setHarvestBudgetReserve:(double)arg1;
+ (void)setHarvestBudgetThrottleBudgetDisabled:(bool)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)defaults;
- (id)init;

@end
