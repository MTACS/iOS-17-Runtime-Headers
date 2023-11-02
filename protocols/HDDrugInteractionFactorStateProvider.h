
@protocol HDDrugInteractionFactorStateProvider

@required

- (void)addDrugInteractionFactorStateObserver:(id <HDDrugInteractionFactorStateObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (HDDaemon *)daemon;
- (long long)hasDrugInteractionFactorInProfile:(HDProfile *)arg1;
- (void)monitorDrugInteractionFactorsInProfile:(HDProfile *)arg1;
- (void)removeDrugInteractionFactorStateObserver:(id <HDDrugInteractionFactorStateObserver>)arg1;

@end
