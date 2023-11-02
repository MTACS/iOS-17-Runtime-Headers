
@interface MTCompanionSyncSession : NSObject <SYSessionDelegate> {
    <MTSyncServiceDelegate> * _delegate;
    unsigned long long  _lastIndex;
    NSArray * _pendingChanges;
    NSMutableArray * _processedChanges;
    MTCompanionSyncRequest * _request;
    SYSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTSyncServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastIndex;
@property (nonatomic, retain) NSArray *pendingChanges;
@property (nonatomic, retain) NSMutableArray *processedChanges;
@property (nonatomic, retain) MTCompanionSyncRequest *request;
@property (nonatomic, retain) SYSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;
- (id)initWithSession:(id)arg1 request:(id)arg2 delegate:(id)arg3;
- (unsigned long long)lastIndex;
- (id)pendingChanges;
- (id)processedChanges;
- (id)request;
- (id)session;
- (id)sessionDescription;
- (void)setDelegate:(id)arg1;
- (void)setLastIndex:(unsigned long long)arg1;
- (void)setPendingChanges:(id)arg1;
- (void)setProcessedChanges:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setSession:(id)arg1;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;
- (bool)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;

@end
