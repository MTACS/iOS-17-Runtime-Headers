
@interface ViewHierarchyService : NSObject {
    NSObject<OS_dispatch_queue> * _captureQueue;
    id /* block */  _completionBlock;
    <DBGStandaloneDataSourceConnection> * _dataSourceConnection;
    NSURL * _destination;
    NSString * _platform;
    int  _runnablePid;
    DBGSnapshotManager * _snapshotManager;
}

@property (readonly) NSObject<OS_dispatch_queue> *captureQueue;
@property (copy) id /* block */ completionBlock;
@property (readonly) <DBGStandaloneDataSourceConnection> *dataSourceConnection;
@property (retain) NSURL *destination;
@property (nonatomic, retain) NSString *platform;
@property int runnablePid;
@property (readonly) DBGSnapshotManager *snapshotManager;

+ (id)forLocalPid:(int)arg1;

- (void).cxx_destruct;
- (void)_enqueueAdditionalRequests;
- (void)_enqueueInitialRequest;
- (void)_enqueueRemainingUnfetchedPropertyValuesRequest;
- (id)_metadata;
- (void)_requestFailed:(id)arg1;
- (void)_saveCompletedRequests;
- (id)captureQueue;
- (void)captureTo:(id)arg1 completionBlock:(id /* block */)arg2;
- (id /* block */)completionBlock;
- (id)dataSourceConnection;
- (id)defaultPlatform;
- (id)destination;
- (void)finishWithError:(id)arg1;
- (id)initWithDataSourceConnection:(id)arg1 runnablePid:(int)arg2;
- (id)platform;
- (int)runnablePid;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDestination:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)setRunnablePid:(int)arg1;
- (id)snapshotManager;

@end
