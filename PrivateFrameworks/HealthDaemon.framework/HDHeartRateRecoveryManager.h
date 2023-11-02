
@interface HDHeartRateRecoveryManager : NSObject <HDAssertionObserver> {
    HDAssertionManager * _assertionManager;
    HDPowerAssertion * _powerAssertion;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (id)createAndTakeAssertionForOwnerIdentifier:(id)arg1 sessionStateController:(id)arg2;
- (void)dealloc;
- (id)init;

@end
