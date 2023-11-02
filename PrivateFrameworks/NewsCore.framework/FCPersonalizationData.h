
@interface FCPersonalizationData : FCPrivateDataController <FCCoreConfigurationObserving, FCDerivedPersonalizationData, FCOperationThrottlerDelegate, FCPersonalizationDataGeneratorType, FCPersonalizationDataSource, FCReadonlyAggregateStoreProviderType> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _aggregates;
    bool  _attemptingUpload;
    NSData * _pbData;
    CKRecord * _remoteRecord;
    <FCOperationThrottler> * _saveThrottler;
    FCPersonalizationTreatment * _treatment;
}

@property (nonatomic, readonly) NSDictionary *allAggregates;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double decayRate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *pbData;
@property (nonatomic, readonly) unsigned long long scoringType;
@property (readonly) Class superclass;

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1 privateDataDirectory:(id)arg2;
+ (void)configureKeyValueStoreForJSONHandling:(id)arg1;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;

- (void).cxx_destruct;
- (void)activityObservingApplicationWillTerminate;
- (void)activityObservingApplicationWindowDidBecomeBackground;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (id)aggregateForFeatureKey:(id)arg1;
- (id)aggregateStore;
- (id)aggregatesForFeatureKeys:(id)arg1;
- (id)aggregatesForFeatures:(id)arg1;
- (id)allAggregates;
- (id)baselineAggregateWithConfigurableValues:(id)arg1;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (void)clearPersonalizationData;
- (void)configurationManager:(id)arg1 configurationDidChange:(id)arg2;
- (id)createAggregateWith:(id)arg1 clicks:(double)arg2 impressions:(double)arg3;
- (id)d_allGlobalAggregates;
- (void)d_allResults:(id /* block */)arg1 completion:(id /* block */)arg2;
- (double)decayRate;
- (void)enumerateAggregatesUsingBlock:(id /* block */)arg1;
- (id)generateDerivedData;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (id)init;
- (id)initWithAggregates:(id)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (void)loadLocalCachesFromStore;
- (id)localStoreMigrator;
- (id)lookupAggregatesWith:(id)arg1 creationBlock:(id /* block */)arg2;
- (void)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6 groupBias:(double)arg7;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* block */)arg2;
- (id)pbData;
- (void)prepareAggregatesForUseWithCompletionHandler:(id /* block */)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (unsigned long long)scoringType;
- (void)syncWithCompletion:(id /* block */)arg1;
- (void)updateAggregatesWith:(id)arg1 creationBlock:(id /* block */)arg2 updateBlock:(id /* block */)arg3;
- (void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 groupType:(long long)arg5 individually:(bool)arg6 configurableValues:(id)arg7;

@end
