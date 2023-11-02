
@interface PPSettings : NSObject {
    PPKVOObserver * _abGroupKVObserver;
    NSUserDefaults * _canLearnFromAppDefaults;
    PPKVOObserver * _canLearnFromAppKVOObserver;
    NSObject<OS_dispatch_semaphore> * _initializationComplete;
    _PASLock * _lock;
    NSUserDefaults * _portraitDefaults;
    PPKVOObserver * _queryPlanLoggingKVOObserver;
    NSObject<OS_dispatch_queue> * _queue;
    PPKVOObserver * _weightKVOObserver;
}

@property (getter=isAppConnectionsLocationsEnabled, nonatomic) bool appConnectionsLocationsEnabled;

+ (void)clearTestSettings;
+ (id)cloudSyncDisabledFirstPartyBundleIds;
+ (void)disableBundleIdentifier:(id)arg1;
+ (bool)isCloudSyncEnabled;
+ (bool)isVoiceAssistantEnabled;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)abGroupOverride;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1;
- (double)assetMetadataRefreshIntervalSeconds;
- (bool)bundleIdentifierIsEnabledForCloudKit:(id)arg1;
- (bool)bundleIdentifierIsEnabledForDonation:(id)arg1;
- (void)clearAssetMetadataRefreshIntervalSeconds;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)arg1;
- (void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)arg1;
- (id)entitiesBackfilledTimestamp;
- (id)entitiesMappingPreviousTrieSha256;
- (bool)hasWrittenSharedWithYouContentAvailable;
- (bool)hasWrittenSharedWithYouContentConsumed;
- (id)init;
- (bool)isAppConnectionsLocationsEnabled;
- (bool)isAuthorizedToLogLocation;
- (bool)queryPlanLoggingEnabled;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (void)registerDisabledBundleIdPurgeHandler;
- (int)registerDisabledBundleIdentifierChangeHandler:(id /* block */)arg1;
- (int)registerQueryPlanLoggingChangeHandler:(id /* block */)arg1;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (void)setAppConnectionsLocationsEnabled:(bool)arg1;
- (void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)arg1;
- (void)setEntitiesBackfilledTimestamp:(id)arg1;
- (void)setEntitiesMappingTrieSha256:(id)arg1;
- (void)setQueryPlanLoggingEnabled:(bool)arg1;
- (void)setTrialPathOverrideForNamespaceName:(id)arg1 factorName:(id)arg2 path:(id)arg3;
- (void)setTrialUseDefaultFiles:(bool)arg1;
- (void)setWrittenSharedWithYouContentAvailable:(bool)arg1;
- (void)setWrittenSharedWithYouContentConsumed:(bool)arg1;
- (bool)showLocationsFoundInApps;
- (id)trialPathOverrideForNamespaceName:(id)arg1 factorName:(id)arg2;
- (id)trialPathOverrides;
- (bool)trialUseDefaultFiles;
- (void)triggerDelayedCloudSyncRewrite;
- (id)userDefaults;
- (double)weightMultiplier;

@end
