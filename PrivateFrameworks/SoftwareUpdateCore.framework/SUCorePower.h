
@interface SUCorePower : NSObject {
    NSMutableDictionary * _activePowerAssertions;
    NSObject<OS_dispatch_queue> * _assertionQueue;
}

@property (nonatomic, retain) NSMutableDictionary *activePowerAssertions;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *assertionQueue;

+ (void)_disablePowerAssertion:(id)arg1 forAppendedDomain:(id)arg2;
+ (void)_enablePowerAssertion:(id)arg1 forAppendedDomain:(id)arg2;
+ (int)getPowerAssertionCountForIdentifierDomain:(id)arg1;
+ (void)setPowerAssertion:(bool)arg1 forIdentifierDomain:(id)arg2;
+ (id)sharedPowerManager;

- (void).cxx_destruct;
- (id)activePowerAssertions;
- (id)assertionQueue;
- (id)init;
- (void)setActivePowerAssertions:(id)arg1;

@end
