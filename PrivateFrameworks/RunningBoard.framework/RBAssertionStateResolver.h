
@interface RBAssertionStateResolver : NSObject {
    RBAssertionCollection * _assertionCollection;
    <RBBundlePropertiesManaging> * _bundlePropertiesManager;
    <RBDomainAttributeManaging> * _domainAttributeManager;
    <RBEntitlementManaging> * _entitlementManager;
    RBProcessIndex * _processIndex;
    NSMapTable * _savedEndowments;
    RBProcessMap * _stateMap;
    RBSystemState * _systemState;
}

@property (nonatomic, retain) RBAssertionCollection *assertionCollection;
@property (nonatomic, retain) <RBBundlePropertiesManaging> *bundlePropertiesManager;
@property (nonatomic, retain) <RBDomainAttributeManaging> *domainAttributeManager;
@property (nonatomic, retain) <RBEntitlementManaging> *entitlementManager;
@property (nonatomic, retain) RBProcessIndex *processIndex;
@property (nonatomic, retain) NSMapTable *savedEndowments;
@property (nonatomic, retain) RBProcessMap *stateMap;
@property (nonatomic, retain) RBSystemState *systemState;

- (void).cxx_destruct;
- (id)assertionCollection;
- (id)assertionDescriptorsWithFlattenedAttributes:(bool)arg1;
- (id)bundlePropertiesManager;
- (id)domainAttributeManager;
- (id)entitlementManager;
- (id)processIndex;
- (id)resolveForAssertions:(id)arg1;
- (id)savedEndowments;
- (void)setAssertionCollection:(id)arg1;
- (void)setBundlePropertiesManager:(id)arg1;
- (void)setDomainAttributeManager:(id)arg1;
- (void)setEntitlementManager:(id)arg1;
- (void)setProcessIndex:(id)arg1;
- (void)setSavedEndowments:(id)arg1;
- (void)setStateMap:(id)arg1;
- (void)setSystemState:(id)arg1;
- (id)stateMap;
- (id)systemState;

@end
