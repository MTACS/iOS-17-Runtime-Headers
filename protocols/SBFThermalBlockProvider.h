
@protocol SBFThermalBlockProvider <NSObject>

@required

- (void)addThermalObserver:(id <SBFThermalConditionObserver>)arg1;
- (bool)isThermalBlocked;
- (void)removeThermalObserver:(id <SBFThermalConditionObserver>)arg1;

@end
