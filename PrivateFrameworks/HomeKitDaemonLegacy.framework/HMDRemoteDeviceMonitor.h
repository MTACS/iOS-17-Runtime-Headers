
@interface HMDRemoteDeviceMonitor : HMFObject <HMDIDSActivityMonitorObserverDelegate, HMDIDSServiceDelegate, HMDModernTransportDeviceReachabilityObserverListener, HMDRemoteDeviceMonitorDeviceRegistrationClient, HMDRemoteDeviceMonitorFactory, HMFLogging, HMFNetMonitorDelegate, HMFTimerDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate> {
    HMDAppleAccountManager * _accountManager;
    HMDAccountRegistry * _accountRegistry;
    HMDIDSActivityMonitorObserver * _activityObserver;
    HMFTimer * _deviceHealthTimer;
    NSMapTable * _deviceInformationByDevice;
    <HMDRemoteDeviceMonitorFactory> * _factory;
    IDSAccount * _iCloudAccount;
    HMFTimer * _initialDeviceHealthTimer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMDIDSService> * _modernService;
    HMFNetMonitor * _netMonitor;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _reachable;
    HMDRemoteAccountManager * _remoteAccountManager;
    <HMDIDSService> * _service;
    bool  _started;
    HMDModernTransportDeviceReachabilityObserver * _transportReachabilityObserver;
}

@property (nonatomic, readonly) HMDAccountRegistry *accountRegistry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isReachable, readonly) bool reachable;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMDModernTransportDeviceReachabilityObserver *transportReachabilityObserver;
@property (readonly) NSArray *unreachableDevices;

+ (id)logCategory;
+ (id)pingMessageForDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)_handleGlobalReachabilityChange;
- (void)_handleIncomingMessageForDevice:(id)arg1;
- (void)account:(id)arg1 isActiveChanged:(bool)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (id)accountRegistry;
- (void)confirmDevice:(id)arg1 forClient:(id)arg2 timeout:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)dumpState;
- (void)handleAccountRemoved:(id)arg1;
- (void)handleCurrentDeviceUpdate:(id)arg1;
- (void)handleDeviceRemovedFromAccount:(id)arg1;
- (id)init;
- (id)initWithAccountRegistry:(id)arg1 activityObserver:(id)arg2 accountManager:(id)arg3;
- (id)initWithAccountRegistry:(id)arg1 activityObserver:(id)arg2 queue:(id)arg3 service:(id)arg4 modernService:(id)arg5 accountManager:(id)arg6 remoteAccountManager:(id)arg7 netMonitor:(id)arg8 factory:(id)arg9;
- (bool)isReachable;
- (void)modernTransportDeviceReachabilityObserverDidUpdate:(id)arg1 isReachable:(bool)arg2;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (id)newConfirmationHandlerWithTimeout:(double)arg1 workQueue:(id)arg2 handler:(id /* block */)arg3;
- (id)newDeviceMonitoringTimer;
- (id)newInitialDeviceHealthTimer;
- (id)newRepeatingDeviceHealthTimer;
- (id)newSendMessageOperationWithMessage:(id)arg1;
- (void)observer:(id)arg1 didUpdateDevice:(id)arg2 isOnline:(bool)arg3;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)setTransportReachabilityObserver:(id)arg1;
- (void)start;
- (void)startMonitoringDevice:(id)arg1 withInitialReachability:(id)arg2 forClient:(id)arg3;
- (void)stopMonitoringDevice:(id)arg1 forClient:(id)arg2;
- (void)timerDidFire:(id)arg1;
- (id)transportReachabilityObserver;
- (id)unreachableDevices;

@end
