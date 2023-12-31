
@interface _DKSyncDownCloudKitKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage> {
    _DKSyncCloudKitKnowledgeStorage * _common;
    <_DKSyncRemoteKnowledgeStorageFetchDelegate> * _delegate;
}

@property (getter=isAvailable) bool available;
@property (retain) _DKSyncCloudKitKnowledgeStorage *common;
@property (retain) <_DKSyncRemoteKnowledgeStorageFetchDelegate> *delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cancelOutstandingOperations;
- (void)clearPrewarmedFlag;
- (id)common;
- (id)delegate;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(bool)arg5 completion:(id /* block */)arg6;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(bool)arg6 completion:(id /* block */)arg7;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (bool)hasAdditionsFlagForPeer:(id)arg1;
- (bool)hasDeletionsFlagForPeer:(id)arg1;
- (id)init;
- (bool)isAvailable;
- (id)name;
- (void)prewarmFetchWithCompletion:(id /* block */)arg1;
- (void)setAvailable:(bool)arg1;
- (void)setCommon:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchDelegate:(id)arg1;
- (void)setHasAdditionsFlag:(bool)arg1 forPeer:(id)arg2;
- (void)setHasDeletionsFlag:(bool)arg1 forPeer:(id)arg2;
- (void)start;
- (long long)transportType;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(bool)arg3 completion:(id /* block */)arg4;

@end
