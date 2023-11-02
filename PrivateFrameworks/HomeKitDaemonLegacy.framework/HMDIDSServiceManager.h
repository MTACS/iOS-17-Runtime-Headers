
@interface HMDIDSServiceManager : HMFObject <HMFLogging> {
    HMDIDSActivityMonitorBroadcaster * _activityBroadcaster;
    HMDIDSActivityMonitor * _activityMonitor;
    HMDIDSActivityMonitorObserver * _activityObserver;
    NSMutableSet * _applicationBundleIdentifiersThatNeedWakingMessages;
    <HMDIDSService> * _modernService;
    <HMDIDSServiceManagerNotificationCenter> * _notificationCenter;
    _HMDIDSProxyLinkPreferenceAssertion * _proxyLinkPreferenceAssertion;
    <HMDIDSService> * _proxyService;
    <HMDIDSService> * _service;
    <HMDIDSService> * _streamService;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDIDSActivityMonitorBroadcaster *activityBroadcaster;
@property (readonly) HMDIDSActivityMonitorObserver *activityObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <HMDIDSService> *modernService;
@property (readonly) <HMDIDSService> *proxyService;
@property (readonly) <HMDIDSService> *service;
@property (readonly) <HMDIDSService> *streamService;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedIDSServiceName;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)activityBroadcaster;
- (id)activityObserver;
- (void)addProxyServiceLinkPreferencesAssertionHolder:(id)arg1;
- (void)configure;
- (void)handleProcessInfoStateChanged:(id)arg1;
- (id)initWithDefaults;
- (id)initWithMainService:(id)arg1 modernService:(id)arg2 proxyService:(id)arg3 streamService:(id)arg4 notificationCenter:(id)arg5;
- (id)modernService;
- (id)proxyService;
- (void)retrieveFirewallWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)service;
- (void)setActivityMonitorDataSource:(id)arg1;
- (id)streamService;
- (void)unconfigure;

@end
