
@interface HMDSecureRemoteMessageTransport : HMFMessageTransport <HMDRemoteDeviceMonitorDeviceRegistrationClient, HMDSecureRemoteSessionDelegate, HMFDumpState, HMFLogging, HMFMessageTransportDelegate> {
    HMDAccountRegistry * _accountRegistry;
    HMDCloudDataSyncStateFilter * _cloudDataSyncStateFilter;
    <HMDSecureRemoteMessageTransportDataSource> * _dataSource;
    HMDRemoteDeviceMonitor * _deviceMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _responseHandlerLock;
    NSMutableSet * _secureRemoteSessions;
    HMDRemoteMessageNotifications * _sessionNotifications;
    HMFFuture * _startFuture;
    HMFPromise * _startPromise;
    NSArray * _transports;
}

@property (nonatomic, readonly) HMDAccountRegistry *accountRegistry;
@property (retain) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter;
@property (nonatomic, readonly) <HMDSecureRemoteMessageTransportDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDRemoteDeviceMonitor *deviceMonitor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDRemoteMessageNotifications *sessionNotifications;
@property (nonatomic, readonly) HMFFuture *startFuture;
@property (nonatomic, readonly) HMFPromise *startPromise;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *transports;

+ (id)defaultTransport;
+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_handleElectDeviceForUserResponse:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleNotificationMessage:(id)arg1;
- (void)_handlePingMessage:(id)arg1;
- (bool)_handleReceivedMessage:(id)arg1 transport:(id)arg2;
- (void)_handleSecureMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3;
- (id)_openSecureSessionToDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_pingDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_preferredTransportForMessage:(id)arg1;
- (void)_reset;
- (id)_secureRemoteSessionForDevice:(id)arg1;
- (void)_sendPingToDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3 responseHandler:(id /* block */)arg4;
- (void)_sendSecureMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateDeviceInformationFromMessage:(id)arg1;
- (id)accountRegistry;
- (id)cloudDataSyncStateFilter;
- (void)configureWithCloudDataSyncStateFilter:(id)arg1 homeMembershipVerifier:(id)arg2;
- (id)dataSource;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)deviceMonitor;
- (id)dumpState;
- (void)electDeviceForHH1User:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (id)initWithDataSource:(id)arg1;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)openSecureSessionToDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)pingDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reset;
- (void)secureRemoteSession:(id)arg1 didCloseWithError:(id)arg2;
- (void)secureRemoteSession:(id)arg1 receivedRequestToSendMessage:(id)arg2;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)sessionNotifications;
- (void)setCloudDataSyncStateFilter:(id)arg1;
- (void)setSessionNotifications:(id)arg1;
- (id)shortDescription;
- (id)start;
- (id)startFuture;
- (id)startPromise;
- (id)transports;

@end
