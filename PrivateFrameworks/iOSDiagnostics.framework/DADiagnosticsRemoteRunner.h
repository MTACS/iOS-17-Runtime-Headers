
@interface DADiagnosticsRemoteRunner : NSObject <DARemoteRunnerClientProtocol, DARemoteRunnerServerProtocol> {
    <DADiagnosticsRemoteRunnerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _diagsAliveCheckQueue;
    <DARemoteRunnerServerProtocol> * _remoteRunnerServer;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property <DADiagnosticsRemoteRunnerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *diagsAliveCheckQueue;
@property (readonly) unsigned long long hash;
@property (retain) <DARemoteRunnerServerProtocol> *remoteRunnerServer;
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (bool)_establishConnection;
- (void)cancelTestWithID:(id)arg1 completion:(id /* block */)arg2;
- (void)createRemoteRunnerDeviceWithSerialNumber:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)destroyRemoteRunnerDeviceWithCompletion:(id /* block */)arg1;
- (id)diagsAliveCheckQueue;
- (void)getReportWithCompletion:(id /* block */)arg1;
- (void)getReportWithComponents:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)ping:(id /* block */)arg1;
- (void)remoteRunnerDeviceEnded;
- (id)remoteRunnerServer;
- (void)requestAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)requestUploadAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)runTestWithID:(id)arg1 name:(id)arg2 description:(id)arg3 parameters:(id)arg4 completion:(id /* block */)arg5;
- (void)setDelegate:(id)arg1;
- (void)setDiagsAliveCheckQueue:(id)arg1;
- (void)setRemoteRunnerServer:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
