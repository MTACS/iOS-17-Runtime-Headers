
@interface CCSModuleRepository : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSDictionary * _allModuleMetadataByIdentifier;
    NSSet * _allowedModuleIdentifiers;
    NSSet * _availableModuleIdentifiers;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSArray * _directoryURLs;
    bool  _ignoreAllowedList;
    NSSet * _interestingBundleIdentifiers;
    NSObject<BSDefaultObserver> * _internalDefaultsObserver;
    NSSet * _loadableModuleIdentifiers;
    struct MGNotificationTokenStruct { } * _mobileGestaltNotificationToken;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *loadableModuleIdentifiers;
@property (readonly) Class superclass;

+ (id)_defaultModuleDirectories;
+ (id)_defaultModuleIdentifierAllowedList;
+ (id)_deviceFamily;
+ (void)initialize;
+ (id)repositoryWithDefaults;

- (void).cxx_destruct;
- (void)_applicationsDidChange:(id)arg1;
- (id)_initWithDirectoryURLs:(id)arg1 allowedModuleIdentifiers:(id)arg2;
- (bool)_queue_arrayContainsInterestingApplicationProxy:(id)arg1;
- (id)_queue_associatedBundleIdentifiersForModuleMetadata:(id)arg1;
- (id)_queue_filterModuleMetadataByAssociatedBundleAvailability:(id)arg1;
- (id)_queue_filterModuleMetadataByGestalt:(id)arg1;
- (id)_queue_filterModuleMetadataByVisibilityPreference:(id)arg1;
- (id)_queue_gestaltQuestionsForModuleMetadata:(id)arg1;
- (id)_queue_loadAllModuleMetadata;
- (id)_queue_moduleIdentifiersForMetadata:(id)arg1;
- (void)_queue_registerForInternalPreferenceChanges;
- (void)_queue_registerForVisiblityPreferenceChanges;
- (void)_queue_runBlockOnObservers:(id /* block */)arg1;
- (void)_queue_setIgnoreAllowedList:(bool)arg1;
- (void)_queue_startObservingMobileGestaltQuestions:(id)arg1 withChangeHandler:(id /* block */)arg2;
- (void)_queue_stopObservingGestaltQuestions;
- (void)_queue_unregisterForInternalPreferenceChanges;
- (void)_queue_unregisterForVisiblityPreferenceChanges;
- (void)_queue_updateAllModuleMetadata;
- (void)_queue_updateAllModuleMetadataForAllModuleMetadata:(id)arg1;
- (void)_queue_updateAvailableModuleMetadata;
- (void)_queue_updateAvailableModuleMetadataForAllModuleMetadata:(id)arg1;
- (void)_queue_updateGestaltQuestionsForModuleMetadata:(id)arg1;
- (void)_queue_updateInterestingBundleIdentifiersForModuleMetadata:(id)arg1;
- (void)_queue_updateLoadableModuleMetadata;
- (void)_queue_updateLoadableModuleMetadataForAvailableModuleMetadata:(id)arg1;
- (void)_updateAvailableModuleMetadata;
- (void)addObserver:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)invalidate;
- (id)loadableModuleIdentifiers;
- (id)moduleMetadataForModuleIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setVisibility:(bool)arg1 forModuleIdentifier:(id)arg2;
- (bool)visibilityForModuleIdentifier:(id)arg1;

@end
