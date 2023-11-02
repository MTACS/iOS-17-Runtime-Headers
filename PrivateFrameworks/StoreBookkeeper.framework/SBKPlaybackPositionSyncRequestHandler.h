
@interface SBKPlaybackPositionSyncRequestHandler : SBKSyncRequestHandler <SBKSyncTransactionProcessing, SBKTransactionControllerDelegate> {
    bool  _canceled;
    SBKSyncTransaction * _currentKVSTransaction;
    <SBKUniversalPlaybackPositionDataSource> * _dataSource;
    <SBKUniversalPlaybackPositionTransactionContext> * _dataSourceTransactionContext;
    NSError * _fatalSyncError;
    SBKTransactionController * _kvsController;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _metadataItemsFromDataSource;
    NSDictionary * _metadataItemsToCommitToDataSource;
    NSDictionary * _metadataItemsToCommitToKVSStorage;
    NSString * _overrideSyncAnchor;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _responseMetadataItemsMergedToCommitBackToKVSStorage;
    NSMutableDictionary * _responseMetadataItemsToCommitToDataSource;
    bool  _syncInProgress;
    NSObject<OS_dispatch_queue> * _syncOperationQueue;
}

@property (nonatomic) bool canceled;
@property (nonatomic, retain) <SBKUniversalPlaybackPositionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *fatalSyncError;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBKTransactionController *kvsController;
@property (nonatomic, retain) NSString *overrideSyncAnchor;
@property (readonly) Class superclass;
@property (nonatomic) bool syncInProgress;

- (void).cxx_destruct;
- (void)_dataSourceCancelTransaction;
- (int)_mergeConflictedItemFromSyncResponse:(id)arg1;
- (void)_mergeMetadataItemsFromSyncResponse;
- (bool)_shouldStop;
- (void)_signalKVSTransactionCompletion:(id)arg1;
- (void)_signalKVSTransactionCompletion:(id)arg1 withError:(id)arg2;
- (bool)_synchronize:(id*)arg1;
- (id)_synchronouslyRunKVSTransaction:(id)arg1;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (bool)canceled;
- (void)clearTransactionResponseData;
- (id)currentKVSTransaction;
- (id)dataSource;
- (id)dataSourceTransactionContext;
- (id)fatalSyncError;
- (id)initWithDataSource:(id)arg1 bagContext:(id)arg2;
- (id)initWithDataSource:(id)arg1 bagContext:(id)arg2 accountIdentifier:(id)arg3;
- (id)kvsController;
- (id)metadataItemsToCommitToDataSource;
- (id)metadataItemsToCommitToKVSStorage;
- (id)newKVSSyncTransactionWithUpdatedMetadataItemIdentifiers:(id)arg1 processConflicts:(bool)arg2;
- (id)overrideSyncAnchor;
- (void)setCanceled:(bool)arg1;
- (void)setCurrentKVSTransaction:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDataSourceTransactionContext:(id)arg1;
- (void)setFatalSyncError:(id)arg1;
- (void)setKvsController:(id)arg1;
- (void)setMetadataItemsToCommitToDataSource:(id)arg1;
- (void)setMetadataItemsToCommitToKVSStorage:(id)arg1;
- (void)setOverrideSyncAnchor:(id)arg1;
- (void)setSyncInProgress:(bool)arg1;
- (bool)syncInProgress;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg1;
- (void)timeout;
- (id)transaction:(id)arg1 conflictDetectionOrdinalForKey:(id)arg2;
- (void)transaction:(id)arg1 didProcessResponseData:(id)arg2;
- (id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2;
- (void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(bool*)arg3;
- (void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(bool)arg4 isDirty:(bool*)arg5;
- (id)transaction:(id)arg1 syncAnchorForTransactionSyncAnchor:(id)arg2;
- (void)transaction:(id)arg1 willProcessResponseData:(id)arg2;
- (void)transactionController:(id)arg1 transactionDidCancel:(id)arg2 error:(id)arg3;
- (bool)transactionController:(id)arg1 transactionDidFail:(id)arg2 error:(id)arg3;
- (void)transactionController:(id)arg1 transactionDidFinish:(id)arg2;

@end
