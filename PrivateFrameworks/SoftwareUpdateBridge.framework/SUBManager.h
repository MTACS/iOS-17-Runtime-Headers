
@interface SUBManager : NSObject {
    <SUBManagerDelegate> * _delegate;
    _Atomic bool  _hasQueriedStateOnceFlag;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_xpc_object> * _serverConnection;
}

@property (nonatomic) <SUBManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_xpc_object> *serverConnection;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_forwardDownloadProgress:(id)arg1;
- (void)_forwardInstallResult:(id)arg1;
- (void)_forwardInstallationAwaitingUserInteraction:(id)arg1;
- (void)_forwardInstallationCanProceed:(id)arg1;
- (void)_forwardInstallationWillProceed:(id)arg1;
- (void)_forwardScanResult:(id)arg1;
- (void)_forwardUserDidAcceptTermsAndConditionsChanged:(id)arg1;
- (void)_forwardUserInstallRequestTypeChanged:(id)arg1;
- (id)_serverConnection;
- (void)dealloc;
- (id)delegate;
- (void)getCloudDescriptors:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)installUpdate:(id)arg1;
- (void)installUpdate:(id)arg1 passcode:(id)arg2;
- (void)managerState:(id /* block */)arg1;
- (void)performMigration;
- (void)purgeUpdate:(id)arg1 completion:(id /* block */)arg2;
- (id)queue;
- (void)removeCloudDescriptor:(id)arg1;
- (void)scanForUpdates;
- (void)sendTermsRequest:(id /* block */)arg1;
- (id)serverConnection;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)setUserInstallRequestTypeForUpdate:(id)arg1 userInstallRequestType:(long long)arg2 completion:(id /* block */)arg3;
- (void)startDownload:(id)arg1;
- (void)startDownload:(id)arg1 passcode:(id)arg2;
- (void)supportsInstallTonightWithCompletion:(id /* block */)arg1;
- (void)userDidAcceptTermsAndConditionsForUpdate:(id)arg1;
- (void)userDidAcceptTermsAndConditionsForUpdate:(id)arg1 completion:(id /* block */)arg2;

@end
