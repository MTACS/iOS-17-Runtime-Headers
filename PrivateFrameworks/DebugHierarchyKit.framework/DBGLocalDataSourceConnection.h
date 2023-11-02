
@interface DBGLocalDataSourceConnection : NSObject <DBGDataSourceConnection, DBGStandaloneDataSourceConnection> {
    NSObject<OS_dispatch_queue> * _captureQueue;
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    int  _pid;
    NSObject<OS_dispatch_queue> * captureQueue;
    <DBGDataSourceConnectionDelegate> * delegate;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *captureQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) float debugHierarchyVersion;
@property <DBGDataSourceConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)matchingDataCoordinatorClass;

- (void).cxx_destruct;
- (id)captureQueue;
- (void)closeConnection;
- (void)dealloc;
- (float)debugHierarchyVersion;
- (id)delegate;
- (id)initWithPid:(int)arg1;
- (id)initWithPid:(int)arg1 agentConnection:(id)arg2;
- (void)performRequest:(id)arg1;
- (void)retrieveDebugHierarchyConfiguration:(id /* block */)arg1;
- (void)setCaptureQueue:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
