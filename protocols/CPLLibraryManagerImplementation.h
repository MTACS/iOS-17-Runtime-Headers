
@protocol CPLLibraryManagerImplementation <CPLPlatformImplementation>

@required

- (void)acceptSharedScope:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: CPLScopeChange *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)acknowledgeChangedStatuses:(NSArray *)arg1;
- (void)activateScopeWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addDropDerivativesRecipe:(void *)arg1 writeToUserDefaults:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: CPLDropDerivativesRecipe *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addInfoToLog:(NSString *)arg1;
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(NSArray *)arg1 persist:(bool)arg2;
- (void)barrier;
- (void)beginDownloadForResource:(void *)arg1 clientBundleID:(void *)arg2 options:(void *)arg3 proposedTaskIdentifier:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: CPLResource *, NSString *, CPLResourceTransferTaskOptions *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLResourceTransferTask *, void*
- (void)beginInMemoryDownloadOfResource:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: CPLResource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLResourceTransferTask *, void*
- (void)blockEngineElement:(NSString *)arg1;
- (void)boostPriorityForScopeWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)checkResourcesAreSafeToPrune:(void *)arg1 checkServerIfNecessary:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSDictionary *, void*
- (void)closeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(void *)arg1 related:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: CPLScopedIdentifier *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, id, NSError *, void*
- (void)compactFileCacheWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)createScope:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CPLScopeChange *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLScopeChange *, NSError *, void*
- (void)deactivateScopeWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deactivateWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteResources:(void *)arg1 checkServerIfNecessary:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSDictionary *, void*
- (void)deleteScopeWithIdentifier:(void *)arg1 forced:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)disableMingling;
- (void)disableSynchronizationWithReason:(NSString *)arg1;
- (void)enableMingling;
- (void)enableSynchronizationWithReason:(NSString *)arg1;
- (void)fetchExistingSharedLibraryScopeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLScopeChange *, NSError *, void*
- (void)fetchSharedScopeFromShareURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLScopeChange *, NSError *, void*
- (void)forceBackupWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)forceSynchronizingScopeWithIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLForceSyncTask *, void*
- (void)getChangedStatusesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getCloudCacheForRecordWithScopedIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CPLScopedIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLRecordChange *, NSError *, void*
- (void)getListOfComponentsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getMappedScopedIdentifiersForScopedIdentifiers:(void *)arg1 inAreLocalIdentifiers:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getResourcesForItemWithScopedIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CPLScopedIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)getScopeStatusCountsForScopeWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLScopeStatusCounts *, NSError *, void*
- (void)getStatusArrayForComponents:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getStatusForComponents:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getStatusForPendingRecordsSharedToScopeWithIdentifier:(void *)arg1 maximumCount:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getStatusForRecordsWithScopedIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getStatusesForScopesWithIdentifiers:(void *)arg1 includeStorages:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getStreamingURLForResource:(void *)arg1 intent:(void *)arg2 hints:(void *)arg3 timeRange:(void *)arg4 clientBundleID:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 15: CPLResource *, unsigned long long, NSDictionary *, struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSData *, NSDate *, NSString *, NSError *, void*
- (void)getSystemBudgetsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForegroundQuietly:(bool)arg1;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)openWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, NSString *, NSURL *, void*
- (void)provideCloudResource:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CPLResource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLResource *, unsigned long long, void*
- (void)provideRecordWithCloudScopeIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CPLScopedIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLRecordChange *, unsigned long long, void*
- (void)provideScopeChangeForScopeWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLScopeChange *, unsigned long long, void*
- (void)queryUserDetailsForShareParticipants:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)rampingRequestForResourceType:(void *)arg1 numRequested:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned long long, NSError *, void*
- (void)refreshScopeWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLScopeChange *, NSError *, void*
- (void)removeParticipants:(void *)arg1 fromSharedScopeWithIdentifier:(void *)arg2 retentionPolicy:(void *)arg3 exitSource:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: NSArray *, NSString *, long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLLibraryShareScopeChange *, NSError *, void*
- (void)reportMiscInformation:(NSDictionary *)arg1;
- (void)reportSetting:(NSString *)arg1 hasBeenSetToValue:(NSString *)arg2;
- (void)requestClientToPushAllChangesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetCacheWithOption:(void *)arg1 reason:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetStatus;
- (void)resolveLocalScopedIdentifiersForCloudScopedIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)setShouldOverride:(bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)sharedLibraryRampCheckWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)startExitFromSharedScopeWithIdentifier:(void *)arg1 retentionPolicy:(void *)arg2 exitSource:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLLibraryShareScopeChange *, NSError *, void*
- (void)startSyncSession;
- (void)testKey:(void *)arg1 value:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)unblockEngineElement:(NSString *)arg1;
- (void)unblockEngineElementOnce:(NSString *)arg1;
- (void)updateShareForScope:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CPLScopeChange *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLScopeChange *, NSError *, void*

@optional

- (void)getTargetsForRecordsWithScopedIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)markLibraryManagerAsInvalid;

@end
