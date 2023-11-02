
@interface AXUserEventTimer : NSObject {
    NSObject<OS_dispatch_queue> * _assertionQueue;
    NSHashTable * _assertions;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_canUseIdleTimerServices;
- (void)_startTrackingPoorMansAssertion:(id)arg1;
- (void)_stopTrackingPoorMansAssertion:(id)arg1;
- (id)acquireAssertionToDisableIdleTimerWithReason:(id)arg1;
- (id)init;
- (void)userEventOccurred;

@end
