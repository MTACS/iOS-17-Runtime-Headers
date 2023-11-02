
@interface HMDAccessorySetupManager : HMFObject <HMDSBSRemoteAlertHandleObserver, HMFLogging, HMFMessageReceiver> {
    HMDAccessorySetupCoordinator * _accessorySetupCoordinator;
    HMDXPCClientConnection * _accessorySetupHostClientConnection;
    double  _activationStartTime;
    <HMDSBSRemoteAlertHandle> * _alertHandle;
    HMDSBSRemoteAlertHandleProvider * _alertHandleProvider;
    HMDHomeManager * _homeManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFMessageDispatcher * _messageDispatcher;
    id /* block */  _pendingAccessorySetupCompletionHandler;
    HMSetupAccessoryDescription * _pendingSetupAccessoryDescription;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) HMDAccessorySetupCoordinator *accessorySetupCoordinator;
@property (nonatomic, retain) HMDXPCClientConnection *accessorySetupHostClientConnection;
@property double activationStartTime;
@property (retain) <HMDSBSRemoteAlertHandle> *alertHandle;
@property (readonly) HMDSBSRemoteAlertHandleProvider *alertHandleProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMDHomeManager *homeManager;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (copy) id /* block */ pendingAccessorySetupCompletionHandler;
@property (retain) HMSetupAccessoryDescription *pendingSetupAccessoryDescription;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)accessorySetupHostBundleIdentifier;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)_accessorySetupResultFromCompletedInfo:(id)arg1 clientIdentifierSalt:(id)arg2;
- (id)_createSetupAccessoryPayloadWithSetupPayloadURL:(id)arg1 error:(id*)arg2;
- (void)_finishAccessorySetupWithSetupCompletedInfo:(id)arg1 setupError:(id)arg2;
- (void)_handleFailAccessorySetupMessage:(id)arg1;
- (void)_handleFinishAccessorySetupMessage:(id)arg1;
- (void)_handlePerformAccessorySetupMessage:(id)arg1;
- (void)_handleResumeAccessorySetupMessage:(id)arg1;
- (void)_launchHUISWithNFCProxSetupURL:(id)arg1;
- (void)_launchHUISWithRequest:(id)arg1 connection:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_launchHUISWithSetupAccessoryDescription:(id)arg1 deviceSetupRequest:(id)arg2 resumeSetupUserInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_setupRequestBlockingPairedAccessoriesForHome:(id)arg1;
- (void)_updateAccessoryDescription:(id)arg1 usingConnection:(id)arg2;
- (id)accessorySetupCoordinator;
- (id)accessorySetupHostClientConnection;
- (double)activationStartTime;
- (id)alertHandle;
- (id)alertHandleProvider;
- (void)configure;
- (void)handleHomeUIServiceXPCConnectionStateDidChangeNotification:(id)arg1;
- (void)handleNFCProxSetupNotification:(id)arg1;
- (id)homeManager;
- (id)initWithWorkQueue:(id)arg1 homeManager:(id)arg2;
- (id)initWithWorkQueue:(id)arg1 homeManager:(id)arg2 messageDispatcher:(id)arg3 alertHandleProvider:(id)arg4;
- (void)launchAccessorySetupHostToPerformMatterDeviceSetupWithRequest:(id)arg1 clientProxy:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)launchAccessorySetupHostToRequestSetupCodeForAccessoryWithUUID:(id)arg1 accessoryName:(id)arg2 homeUUID:(id)arg3 clientConnection:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id /* block */)pendingAccessorySetupCompletionHandler;
- (id)pendingSetupAccessoryDescription;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setAccessorySetupCoordinator:(id)arg1;
- (void)setAccessorySetupHostClientConnection:(id)arg1;
- (void)setActivationStartTime:(double)arg1;
- (void)setAlertHandle:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setPendingAccessorySetupCompletionHandler:(id /* block */)arg1;
- (void)setPendingSetupAccessoryDescription:(id)arg1;
- (id)workQueue;

@end
