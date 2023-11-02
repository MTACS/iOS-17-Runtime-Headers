
@interface RBAssertionResolutionContext : NSObject {
    RBAssertionCollection * _assertionCollection;
    NSMutableSet * _assertions;
    RBAttributeContext * _attributeContext;
    <RBBundlePropertiesManaging> * _bundlePropertiesManager;
    RBProcessStateChangeSet * _changeSet;
    <RBDomainAttributeManaging> * _domainAttributeManager;
    <RBEntitlementManaging> * _entitlementManager;
    NSMutableSet * _gainedStartTimeDefining;
    NSMutableSet * _lostStartTimeDefining;
    RBProcessMap * _originatorInheritances;
    RBProcessIndex * _processIndex;
    RBProcessMap * _resolvedState;
    NSMapTable * _savedEndowments;
    RBProcessMap * _stateMap;
    RBSystemState * _systemState;
    NSMutableSet * _targetsPendingResolution;
    NSMutableSet * _touchedAssertions;
}

@property (nonatomic, readonly) RBProcessStateChangeSet *changeSet;
@property (nonatomic, readonly) NSSet *gainedStartTimeDefining;
@property (nonatomic, readonly) NSSet *lostStartTimeDefining;
@property (nonatomic, readonly) RBSystemState *systemState;
@property (nonatomic, readonly) NSSet *touchedAssertions;

- (void).cxx_destruct;
- (id)_assertionGraphFromAssertion:(id)arg1;
- (void)_assertionGraphFromAssertion:(id)arg1 graph:(id)arg2;
- (void)_checkForSuspendableAssertionCycle:(id)arg1 newState:(id)arg2;
- (void)_finalizeStateChangeSet;
- (id)_inheritancesForOriginator:(id)arg1;
- (id)_latestStateForIdentity:(id)arg1;
- (id)_originatorInheritancesForAssertion:(id)arg1;
- (void)_resolveProcessStateForTarget:(id)arg1 ofType:(unsigned long long)arg2 viaAssertion:(id)arg3;
- (void)_resolveSystemState;
- (void)_suspendAssertionsForTarget:(id)arg1;
- (void)_suspendOrResumeAssertionsForTarget:(id)arg1 oldState:(id)arg2 newState:(id)arg3;
- (void)_updateStatesForAssertion:(id)arg1;
- (id)changeSet;
- (id)gainedStartTimeDefining;
- (id)lostStartTimeDefining;
- (id)systemState;
- (id)touchedAssertions;

@end
