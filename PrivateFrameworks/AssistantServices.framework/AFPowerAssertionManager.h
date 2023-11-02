
@interface AFPowerAssertionManager : NSObject <AFAssertionCoordinatorDelegate> {
    AFAssertionCoordinator * _assertionCoordinator;
    NSMutableDictionary * _assertionsByName;
    NSString * _identifier;
    unsigned int  _powerAssertion;
    NSObject<OS_dispatch_queue> * _queue;
    AFWatchdogTimer * _watchdogTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createPowerAssertion;
- (void)_releasePowerAssertion;
- (void)_reportLeakedPowerAssertion;
- (void)_watchdogTimedOut;
- (void)assertionCoordinator:(id)arg1 didActivateAssertion:(id)arg2 isFirstAssertion:(bool)arg3;
- (void)assertionCoordinator:(id)arg1 didAddAssertion:(id)arg2 isFirstAssertion:(bool)arg3;
- (void)assertionCoordinator:(id)arg1 didDeactivateAssertion:(id)arg2 isLastAssertion:(bool)arg3;
- (void)assertionCoordinator:(id)arg1 didRemoveAssertion:(id)arg2 isLastAssertion:(bool)arg3;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (void)releaseAllPowerAssertions;
- (void)releasePowerAssertionWithName:(id)arg1;
- (void)takePowerAssertionWithName:(id)arg1;

@end
