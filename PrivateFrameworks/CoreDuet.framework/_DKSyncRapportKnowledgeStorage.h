
@interface _DKSyncRapportKnowledgeStorage : _DKSyncRapportStorage <_DKSyncRemoteKnowledgeStorage> {
    unsigned long long  _currentChangeSetSequenceNumber;
    <_DKSyncRemoteKnowledgeStorageFetchDelegate> * _delegate;
    _DKSync2Policy * _policy;
}

@property (nonatomic, readonly) <_DKSyncRemoteKnowledgeStorageFetchDelegate> *delegate;
@property (nonatomic, retain) _DKSync2Policy *policy;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)clearPrewarmedFlag;
- (id)delegate;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(bool)arg5 completion:(id /* block */)arg6;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(bool)arg6 completion:(id /* block */)arg7;
- (bool)hasAdditionsFlagForPeer:(id)arg1;
- (bool)hasDeletionsFlagForPeer:(id)arg1;
- (id)policy;
- (void)prewarmFetchWithCompletion:(id /* block */)arg1;
- (void)registerRequestIDsWithClient:(id)arg1;
- (void)setFetchDelegate:(id)arg1;
- (void)setHasAdditionsFlag:(bool)arg1 forPeer:(id)arg2;
- (void)setHasDeletionsFlag:(bool)arg1 forPeer:(id)arg2;
- (void)setPolicy:(id)arg1;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(bool)arg3 completion:(id /* block */)arg4;

@end
