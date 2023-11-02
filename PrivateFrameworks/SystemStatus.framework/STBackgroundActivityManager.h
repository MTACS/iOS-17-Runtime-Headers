
@interface STBackgroundActivityManager : NSObject <BSDebugDescriptionProviding, STBundleManagerObserver> {
    NSMutableSet * _activeBackgroundActivities;
    bool  _allowAllBackgroundActivities;
    STBundleManager * _bundleManager;
    <BSDefaultObserver> * _internalDefaultsObserver;
    NSHashTable * _subscribedClients;
    STSystemStatusDefaults * _systemStatusDefaults;
    NSDictionary * _visualDescriptors;
}

@property (nonatomic, readonly, copy) NSSet *activeBackgroundActivities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_allValidBackgroundActivitiesInPrecedenceScope:(unsigned long long)arg1;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 forDebug:(bool)arg2;
- (void)_forceResetBackgroundActivitiesForClients;
- (void)_registerForInternalDefaultsChanges;
- (void)_updateBackgroundActivitiesForClients;
- (void)_updateSupportedBackgroundActivitiesAndVisualDescriptorsFromBundleRecords;
- (id)activeBackgroundActivities;
- (void)addActiveBackgroundActivities:(id)arg1;
- (void)addBackgroundActivityClient:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithDefaults:(id)arg1;
- (void)recordBundlesChangedForBundleManager:(id)arg1;
- (void)removeActiveBackgroundActivities:(id)arg1;
- (void)removeBackgroundActivityClient:(id)arg1;
- (id)resolvedBackgroundActivityFromBackgroundActivities:(id)arg1 inPrecedenceScope:(unsigned long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)validBackgroundActivitiesForBackgroundActivities:(id)arg1;
- (id)visualDescriptorForBackgroundActivityWithIdentifier:(id)arg1;

@end
