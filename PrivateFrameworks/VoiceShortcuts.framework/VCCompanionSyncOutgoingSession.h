
@interface VCCompanionSyncOutgoingSession : VCCompanionSyncSession {
    NSDictionary * _metadata;
    NSMutableArray * _pendingChanges;
    NSMutableArray * _sentChanges;
    NSMutableArray * _syncedChanges;
}

@property (nonatomic) <VCCompanionSyncOutgoingSessionDelegate> *delegate;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly) NSMutableArray *pendingChanges;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) NSMutableArray *sentChanges;
@property (nonatomic, readonly) NSMutableArray *syncedChanges;

+ (long long)direction;

- (void).cxx_destruct;
- (id)initWithSYSession:(id)arg1 service:(id)arg2 syncDataHandlers:(id)arg3 changeSet:(id)arg4 metadata:(id)arg5;
- (id)metadata;
- (id)pendingChanges;
- (double)progress;
- (id)sentChanges;
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;
- (void)syncSession:(id)arg1 successfullySynced:(id)arg2;
- (id)syncedChanges;

@end
