
@interface WFIntentActionProvider : WFActionProvider {
    NSDictionary * _cachedSchemasByBundleIdentifier;
    bool  _observingInstalledApplicationsChanges;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (copy) NSDictionary *cachedSchemasByBundleIdentifier;
@property (getter=isObservingInstalledApplicationsChanges, nonatomic) bool observingInstalledApplicationsChanges;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)disabledPlatformsForIntentWithTypeName:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (id)actionIdentifiersForBundleIdentifier:(id)arg1 schema:(id)arg2;
- (id)availableActionIdentifiers;
- (id)cachedSchemasByBundleIdentifier;
- (void)createActionsForRequests:(id)arg1 forceLocalActionsOnly:(bool)arg2;
- (id)createAllAvailableActions;
- (void)handleApplicationDidChangeNotification:(id)arg1;
- (id)init;
- (void)installedApplicationsDidChange:(id)arg1;
- (bool)isObservingInstalledApplicationsChanges;
- (void)observeInstalledApplicationsChangesIfNeeded;
- (id)queue;
- (id)schemaForBundleIdentifier:(id)arg1 ignoreCache:(bool)arg2;
- (id)schemasByBundleIdentifier;
- (void)setCachedSchemasByBundleIdentifier:(id)arg1;
- (void)setObservingInstalledApplicationsChanges:(bool)arg1;
- (bool)shouldCreateActionForIntentClassName:(id)arg1 actionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 inSchema:(id)arg4;

@end
