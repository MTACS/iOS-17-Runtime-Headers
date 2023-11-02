
@interface WFLinkActionProvider : WFActionProvider {
    NSDictionary * _actionMetadataByAppIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _actionRequestsLock;
    NSDictionary * _entityMetadataByAppIdentifier;
    NSDictionary * _enumMetadataByAppIdentifier;
    LNMetadataProvider * _metadataProvider;
    bool  _observingInstalledApplicationsChanges;
    NSDictionary * _queryMetadataByAppIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    INSystemAppMapper * _systemAppMapper;
}

@property (nonatomic, readonly, copy) NSDictionary *actionMetadataByAppIdentifier;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } actionRequestsLock;
@property (nonatomic, readonly, copy) NSDictionary *entityMetadataByAppIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *enumMetadataByAppIdentifier;
@property (nonatomic, readonly) LNMetadataProvider *metadataProvider;
@property (getter=isObservingInstalledApplicationsChanges, nonatomic) bool observingInstalledApplicationsChanges;
@property (nonatomic, readonly, copy) NSDictionary *queryMetadataByAppIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) INSystemAppMapper *systemAppMapper;

+ (unsigned long long)allowDenyStateForActionIdentifier:(id)arg1;
+ (id)denyListedLinkActionIdentifiers;
+ (id)sharedProvider;
+ (bool)shouldAllowActionWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)actionMetadataByAppBundleIdentifier:(id)arg1 actionIdentifier:(id)arg2;
- (id)actionMetadataByAppIdentifier;
- (id)actionMetadataByUpdatingWithEnumAndEntityMetadata:(id)arg1 bundleIdentifier:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })actionRequestsLock;
- (id)appDescriptorForActionRequest:(id)arg1 availableActions:(id)arg2 availableEntities:(id)arg3 fullyQualifiedIdentifier:(id*)arg4 forceLocalActionsOnly:(bool)arg5;
- (id)appDescriptorForActionRequest:(id)arg1 forceLocalActionsOnly:(bool)arg2;
- (id)availabilityWithAvailabilityAnnotations:(id)arg1;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)arg1 allowsActionInDenyList:(bool)arg2;
- (void)createActionsForRequests:(id)arg1 allowsActionInDenyList:(bool)arg2 forceLocalActionsOnly:(bool)arg3;
- (void)createActionsForRequests:(id)arg1 forceLocalActionsOnly:(bool)arg2;
- (id)createAllAvailableActions;
- (id)customIntentMigratedActionIdentifierWithLaunchId:(id)arg1 className:(id)arg2;
- (id)disabledOnPlatformsWithAvailability:(id)arg1;
- (id)entityMetadataByAppBundleIdentifier:(id)arg1 entityIdentifier:(id)arg2;
- (id)entityMetadataByAppIdentifier;
- (id)enumMetadataByAppBundleIdentifier:(id)arg1 enumIdentifier:(id)arg2;
- (id)enumMetadataByAppIdentifier;
- (void)handleApplicationDidChangeNotification:(id)arg1;
- (id)initWithMetadataProvider:(id)arg1;
- (void)installedApplicationsDidChange:(id)arg1;
- (bool)isDiscontinuedWithAvailability:(id)arg1;
- (bool)isObservingInstalledApplicationsChanges;
- (id)linkActionWithActionRequest:(id)arg1 fullyQualifiedActionIdentifier:(id)arg2 actionMetadataByAppIdentifier:(id)arg3 enumMetadataByAppIdentifier:(id)arg4 entityMetadataByAppIdentifier:(id)arg5 forceLocalActionsOnly:(bool)arg6;
- (id)linkContentItemFilterActionWithActionRequest:(id)arg1 fullyQualifiedActionIdentifier:(id)arg2 enumMetadataByAppIdentifier:(id)arg3 entityMetadataByAppIdentifier:(id)arg4 entityMetadata:(id)arg5 queryMetadata:(id)arg6;
- (id)linkCurrentPlatformName;
- (id)metadataProvider;
- (void)observeInstalledApplicationsChangesIfNeeded;
- (id)queryMetadataByAppIdentifier;
- (id)queue;
- (void)registerCustomTypesForCoercion:(id)arg1 enumMetadataByAppIdentifier:(id)arg2 entityMetadataByAppIdentifier:(id)arg3 bundleIdentifier:(id)arg4;
- (id)resolvedActionIdentifiersForActionRequests:(id)arg1 availableActions:(id)arg2 availableEntities:(id)arg3 forceLocalActionsOnly:(bool)arg4;
- (bool)serializedAppIntentDescriptorIsValid:(id)arg1;
- (void)setObservingInstalledApplicationsChanges:(bool)arg1;
- (id)systemAppMapper;

@end
