
@interface RBAttributeContext : NSObject <RBAssertionContextProviding> {
    unsigned long long  _activeDueToInheritedEndowmentCount;
    RBAssertion * _assertion;
    RBSAssertionIdentifier * _assertionID;
    RBInheritanceCollection * _availableInheritances;
    <RBBundlePropertiesManaging> * _bundlePropertiesManager;
    <RBDomainAttributeManaging> * _domainAttributeManager;
    <RBEntitlementManaging> * _entitlementManager;
    RBProcessState * _initialProcessState;
    <RBEntitlementPossessing> * _originatorEntitlements;
    RBProcess * _originatorProcess;
    <RBBundleProperties> * _originatorProperties;
    NSDictionary * _savedEndowments;
    RBSystemState * _systemState;
    <RBConcreteTargeting> * _target;
    <RBEntitlementPossessing> * _targetEntitlements;
    RBSProcessIdentity * _targetIdentity;
    bool  _targetIsSystem;
    RBProcess * _targetProcess;
    <RBBundleProperties> * _targetProperties;
}

@property (nonatomic, retain) RBAssertion *assertion;
@property (nonatomic, readonly) RBSAssertionIdentifier *assertionID;
@property (nonatomic, retain) RBInheritanceCollection *availableInheritances;
@property (nonatomic, retain) <RBBundlePropertiesManaging> *bundlePropertiesManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <RBDomainAttributeManaging> *domainAttributeManager;
@property (nonatomic, retain) <RBEntitlementManaging> *entitlementManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RBProcessState *initialProcessState;
@property (nonatomic, readonly) bool isActiveDueToInheritedEndowment;
@property (nonatomic, readonly) <RBEntitlementPossessing> *originatorEntitlements;
@property (nonatomic, readonly) RBProcess *originatorProcess;
@property (nonatomic, readonly) <RBBundleProperties> *originatorProperties;
@property (nonatomic, retain) NSDictionary *savedEndowments;
@property (readonly) Class superclass;
@property (nonatomic, readonly) RBSystemState *systemState;
@property (nonatomic, readonly) <RBConcreteTargeting> *target;
@property (nonatomic, readonly) <RBEntitlementPossessing> *targetEntitlements;
@property (nonatomic, readonly) RBSProcessIdentity *targetIdentity;
@property (nonatomic, readonly) bool targetIsSystem;
@property (nonatomic, readonly) RBProcess *targetProcess;
@property (nonatomic, readonly) <RBBundleProperties> *targetProperties;

- (void).cxx_destruct;
- (id)assertion;
- (id)assertionID;
- (id)availableInheritances;
- (id)bundlePropertiesManager;
- (id)domainAttributeManager;
- (id)entitlementManager;
- (id)initialProcessState;
- (bool)isActiveDueToInheritedEndowment;
- (id)originatorEntitlements;
- (id)originatorProcess;
- (id)originatorProperties;
- (void)popActiveDueToInheritedEndowment;
- (void)pushActiveDueToInheritedEndowment;
- (id)savedEndowments;
- (void)setAssertion:(id)arg1;
- (void)setAvailableInheritances:(id)arg1;
- (void)setBundlePropertiesManager:(id)arg1;
- (void)setDomainAttributeManager:(id)arg1;
- (void)setEntitlementManager:(id)arg1;
- (void)setInitialProcessState:(id)arg1;
- (void)setSavedEndowments:(id)arg1;
- (void)setSystemState:(id)arg1;
- (id)systemState;
- (id)target;
- (id)targetEntitlements;
- (id)targetIdentity;
- (bool)targetIsSystem;
- (id)targetProcess;
- (id)targetProperties;

@end
