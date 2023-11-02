
@protocol _DKSyncRemoteKnowledgeStorage <_DKSyncRemoteStorage>

@required

- (void)clearPrewarmedFlag;
- (void)fetchAdditionsHighWaterMarkWithPeer:(void *)arg1 highPriority:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: _DKSyncPeer *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*
- (void)fetchDeletedEventIDsFromPeer:(void *)arg1 sinceDate:(void *)arg2 streamNames:(void *)arg3 limit:(void *)arg4 highPriority:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 13: _DKSyncPeer *, NSDate *, NSArray *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSDate *, NSError *, void*
- (void)fetchDeletionsHighWaterMarkWithPeer:(void *)arg1 highPriority:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: _DKSyncPeer *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*
- (void)fetchEventsFromPeer:(void *)arg1 windows:(void *)arg2 streamNames:(void *)arg3 limit:(void *)arg4 fetchOrder:(void *)arg5 highPriority:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 14: _DKSyncPeer *, NSArray *, NSArray *, unsigned long long, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*
- (bool)hasAdditionsFlagForPeer:(_DKSyncPeer *)arg1;
- (bool)hasDeletionsFlagForPeer:(_DKSyncPeer *)arg1;
- (void)prewarmFetchWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setFetchDelegate:(id <_DKSyncRemoteKnowledgeStorageFetchDelegate>)arg1;
- (void)setHasAdditionsFlag:(bool)arg1 forPeer:(_DKSyncPeer *)arg2;
- (void)setHasDeletionsFlag:(bool)arg1 forPeer:(_DKSyncPeer *)arg2;
- (void)updateStorageWithAddedEvents:(void *)arg1 deletedEventIDs:(void *)arg2 highPriority:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSArray *, _DKSyncDeletedEventIDs *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
