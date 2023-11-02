
@interface DBGDataCoordinator : NSObject <DBGDataSourceConnectionDelegate> {
    NSMutableArray * _completedRequests;
    <DBGDataSourceConnection> * _dataSourceConnection;
    NSMutableArray * _enqueuedRequests;
    DebugHierarchyRequest * _executingRequest;
    bool  _shouldStoreCompletedRequests;
    DBGSnapshotManager * _snapshotManager;
    NSMutableArray * _snapshotTransformerStore;
}

@property (readonly) NSMutableArray *completedRequests;
@property (retain) <DBGDataSourceConnection> *dataSourceConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableArray *enqueuedRequests;
@property (retain) DebugHierarchyRequest *executingRequest;
@property (readonly) unsigned long long hash;
@property bool shouldStoreCompletedRequests;
@property DBGSnapshotManager *snapshotManager;
@property (retain) NSMutableArray *snapshotTransformerStore;
@property (readonly) NSArray *snapshotTransformers;
@property (readonly) Class superclass;

+ (id)coordinatorWithDataSourceConnection:(id)arg1;

- (void).cxx_destruct;
- (void)_performNextRequest;
- (void)addSnapshotTransformer:(id)arg1;
- (void)cancelAllRequests;
- (void)cancelRequest:(id)arg1;
- (id)completedRequests;
- (id)dataSourceConnection;
- (void)didReceiveData:(id)arg1 forRequest:(id)arg2;
- (id)enqueuedRequests;
- (id)executingRequest;
- (id)initWithDataSourceConnection:(id)arg1;
- (void)performRequest:(id)arg1;
- (void)setDataSourceConnection:(id)arg1;
- (void)setEnqueuedRequests:(id)arg1;
- (void)setExecutingRequest:(id)arg1;
- (void)setShouldStoreCompletedRequests:(bool)arg1;
- (void)setSnapshotManager:(id)arg1;
- (void)setSnapshotTransformerStore:(id)arg1;
- (bool)shouldStoreCompletedRequests;
- (id)snapshotManager;
- (id)snapshotTransformerStore;
- (id)snapshotTransformers;

@end
