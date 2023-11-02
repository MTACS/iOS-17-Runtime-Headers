
@interface CPLProxyLibraryManager : CPLPlatformObject <CPLClientLibraryManagerProtocol, CPLLibraryManagerImplementation, NSXPCConnectionDelegate> {
    NSDate * _backoffRetryingConnectionDate;
    id /* block */  _blockToCallOnDaemonDying;
    unsigned long long  _disablingMinglingCount;
    NSCountedSet * _disablingReasons;
    NSMutableDictionary * _downloadTasks;
    bool  _firstTryOpeningLibrary;
    NSMutableDictionary * _forceSyncTasks;
    unsigned long long  _foregroundCalls;
    bool  _foregroundCallsHaveBeenQuiet;
    NSMutableDictionary * _inMemoryDownloadTasks;
    bool  _killed;
    int  _notifyToken;
    int  _openingStatus;
    NSMutableDictionary * _outstandingInvocations;
    unsigned long long  _outstandingInvocationsCount;
    NSMutableArray * _pendingBlocksAfterOpening;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _realConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _realConnectionLock;
    unsigned long long  _significantWorkCalls;
    NSMutableDictionary * _syncOutstandingInvocations;
    unsigned long long  _syncOutstandingInvocationsCount;
    NSMutableDictionary * _uploadTasks;
    NSMutableDictionary * _vouchersPerTaskIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)clientProtocolInterface;
+ (id)daemonProtocolInterface;

- (void).cxx_destruct;
- (void)_callBlockOnDaemonDying;
- (id)_connection;
- (void)_dispatchBlockWhenOpen:(id /* block */)arg1;
- (void)_dispatchFailedDownloadTaskForResource:(id)arg1 options:(id)arg2 proposedTaskIdentifier:(id)arg3 withError:(id)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)_dispatchFailedForceSyncTaskForScopeIdentifiers:(id)arg1 withError:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_dispatchFailedInMemoryDownloadTaskForResource:(id)arg1 withError:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_dropConnectionCompletly;
- (void)_dropConnectionCompletlyLocked;
- (void)_dropVoucherForTaskWithIdentifier:(id)arg1;
- (void)_invokeOutstandingInvocationsWithTaskIdentifier:(id)arg1;
- (void)_invokeSyncOutstandingInvocationsWithTaskIdentifier:(id)arg1;
- (void)_markConnectionAsInvalid;
- (void)_reallyOpenWithCompletionHandler:(id /* block */)arg1;
- (void)_setCallBlockOnDaemonDying:(id /* block */)arg1;
- (bool)_setStatusFromDictionary:(id)arg1;
- (void)_setupConnection;
- (void)_storeVoucher:(id)arg1 forTaskWithIdentifier:(id)arg2;
- (id)_uploadTaskDidStartForResource:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)_withVoucherForTaskWithIdentifier:(id)arg1 do:(id /* block */)arg2;
- (void)acceptSharedScope:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)acknowledgeChangedStatuses:(id)arg1;
- (void)activateScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addDropDerivativesRecipe:(id)arg1 writeToUserDefaults:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)addInfoToLog:(id)arg1;
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg1 persist:(bool)arg2;
- (void)backgroundDownloadDidFailForResource:(id)arg1;
- (void)backgroundDownloadDidFinishForResource:(id)arg1;
- (void)barrier;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 options:(id)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)blockEngineElement:(id)arg1;
- (void)boostPriorityForScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelSyncTask:(id)arg1;
- (void)cancelTask:(id)arg1;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(id /* block */)arg1;
- (void)checkResourcesAreSafeToPrune:(id)arg1 checkServerIfNecessary:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 related:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)compactFileCacheWithCompletionHandler:(id /* block */)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (void)createScope:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deactivateScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deactivateWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteScopeWithIdentifier:(id)arg1 forced:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)disableMingling;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)dispatchBlockWhenLibraryIsOpen:(id /* block */)arg1;
- (void)downloadDidFinishForResourceTransferTask:(id)arg1 finalResource:(id)arg2 withError:(id)arg3;
- (void)downloadDidProgress:(float)arg1 forResourceTransferTask:(id)arg2;
- (void)downloadDidStartForResourceTransferTask:(id)arg1;
- (void)enableMingling;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)fetchExistingSharedLibraryScopeWithCompletionHandler:(id /* block */)arg1;
- (void)fetchSharedScopeFromShareURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)forceBackupWithCompletionHandler:(id /* block */)arg1;
- (void)forceSyncDidFinishForTask:(id)arg1 withErrors:(id)arg2;
- (void)forceSynchronizingScopeWithIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getChangedStatusesWithCompletionHandler:(id /* block */)arg1;
- (void)getCloudCacheForRecordWithScopedIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getListOfComponentsWithCompletionHandler:(id /* block */)arg1;
- (void)getMappedScopedIdentifiersForScopedIdentifiers:(id)arg1 inAreLocalIdentifiers:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getResourcesForItemWithScopedIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getScopeStatusCountsForScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusForPendingRecordsSharedToScopeWithIdentifier:(id)arg1 maximumCount:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)getStatusForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusesForScopesWithIdentifiers:(id)arg1 includeStorages:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getStreamingURLForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4 clientBundleID:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)getSystemBudgetsWithCompletionHandler:(id /* block */)arg1;
- (void)getTargetsForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)inMemoryDownloadDidFinishForResourceTransferTask:(id)arg1 data:(id)arg2 withError:(id)arg3;
- (id)initWithAbstractObject:(id)arg1;
- (void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (void)libraryManagerDidUpdateStatusWithProperties:(id)arg1;
- (void)libraryManagerHasBeenReplaced;
- (void)libraryManagerHasChangesToPull;
- (void)libraryManagerHasStatusChanges;
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForegroundQuietly:(bool)arg1;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)provideCloudResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)provideLocalResource:(id)arg1 recordClassString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)provideRecordWithCloudScopeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)provideScopeChangeForScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)proxyWithErrorHandler:(id /* block */)arg1;
- (void)pushAllChangesWithCompletionHandler:(id /* block */)arg1;
- (void)queryUserDetailsForShareParticipants:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queue;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)refreshScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeParticipants:(id)arg1 fromSharedScopeWithIdentifier:(id)arg2 retentionPolicy:(long long)arg3 exitSource:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)reportMiscInformation:(id)arg1;
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;
- (void)requestClientToPushAllChangesWithCompletionHandler:(id /* block */)arg1;
- (void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetStatus;
- (void)resolveLocalScopedIdentifiersForCloudScopedIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setShouldOverride:(bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)sharedLibraryRampCheckWithCompletionHandler:(id /* block */)arg1;
- (void)startExitFromSharedScopeWithIdentifier:(id)arg1 retentionPolicy:(long long)arg2 exitSource:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)startSyncSession;
- (void)testKey:(id)arg1 value:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)unblockEngineElement:(id)arg1;
- (void)unblockEngineElementOnce:(id)arg1;
- (void)updateShareForScope:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)uploadDidStartForResource:(id)arg1 withResourceTransferTask:(id)arg2;
- (void)uploadOfResource:(id)arg1 didFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)uploadOfResource:(id)arg1 didProgress:(float)arg2 forResourceTransferTask:(id)arg3;

@end