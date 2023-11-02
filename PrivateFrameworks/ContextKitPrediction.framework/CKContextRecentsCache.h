
@interface CKContextRecentsCache : NSObject {
    NSObject<OS_dispatch_queue> * _biomeQueue;
    NSObject<OS_dispatch_queue> * _computedFocusModeQueue;
    BPSSink * _computedModeSink;
    BMUserFocusComputedModeStream * _computedModeStream;
    unsigned long long  _configuration;
    id /* block */  _deferredMaintenanceTaskBlock;
    NSObject<OS_os_transaction> * _deferredMaintenanceTransaction;
    <CKContextRecentsCacheDelegate> * _delegate;
    NSString * _latestActivity;
    BMUserActivityMetadataStream * _stream;
}

@property (nonatomic) <CKContextRecentsCacheDelegate> *delegate;

- (void).cxx_destruct;
- (id)_associatedTopicIdsForRecent:(id)arg1;
- (id)_associatedTopicTitlesForRecent:(id)arg1;
- (bool)_constellationResult:(id)arg1 intersectsWithRecent:(id)arg2;
- (void)_groupActivitiesByAppIntoSectionsWithRecents:(id)arg1 limit:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)_groupActivitiesByConstellationIntoSectionsWithRecents:(id)arg1 limit:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)_groupActivitiesByDateIntoSectionsWithRecents:(id)arg1 limit:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)_groupActivitiesByModeIntoSectionsWithRecents:(id)arg1 limit:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (unsigned long long)_maximumNumberOfItemsToRetrieve;
- (void)_modeDidChangeToModeWithModeUUIDString:(id)arg1;
- (id)_modeUUIDStringForComputedModeEvent:(id)arg1;
- (void)_performMaintenanceTasks;
- (void)_performMaintenanceTasksForRecents:(id)arg1;
- (void)_pruneRecentsFromUnusedAppsForRecents:(id)arg1;
- (bool)_recent:(id)arg1 matchesKeywords:(id)arg2;
- (void)_registerComputedModeStream;
- (id)_relativeDateStringForRecent:(id)arg1;
- (void)_scheduleDeferredMaintenanceTasks;
- (void)_updateLatestFocusMode;
- (void)allRecentsWithReply:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithCacheConfiguration:(unsigned long long)arg1;
- (void)insertUserActivityData:(id)arg1 preferredTitle:(id)arg2 bundleId:(id)arg3 topics:(id)arg4 hasAssociatedImageRepresentation:(bool)arg5 uuid:(id)arg6;
- (void)pruneRecentsForBundleIdentifiers:(id)arg1;
- (void)removeAllRecentsWithReply:(id /* block */)arg1;
- (void)removeRecentWithUUID:(id)arg1;
- (void)removeRecentsMatchingRecent:(id)arg1;
- (void)retrieveRecentMatchingUUID:(id)arg1 withReply:(id /* block */)arg2;
- (void)retrieveRecentsBetweenStartDate:(id)arg1 endDate:(id)arg2 withReply:(id /* block */)arg3;
- (void)retrieveRecentsCatalogWithStyle:(unsigned long long)arg1 withReply:(id /* block */)arg2;
- (void)retrieveRecentsForPredictionWithReply:(id /* block */)arg1;
- (void)retrieveRecentsMatchingBundleIdentifier:(id)arg1 withReply:(id /* block */)arg2;
- (void)retrieveRecentsMatchingMode:(id)arg1 withReply:(id /* block */)arg2;
- (void)retrieveRecentsMatchingStrings:(id)arg1 withReply:(id /* block */)arg2;
- (void)retrieveRecentsMatchingTopicIds:(id)arg1 titles:(id)arg2 withReply:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
