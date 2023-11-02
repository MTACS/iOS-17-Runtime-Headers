
@interface HMFHTTPClient : HMFObject <HMFLogging, HMFNetMonitorDelegate, HMFTimerDelegate, NSURLSessionDelegate> {
    bool  _active;
    bool  _allowAnonymousConnection;
    NSURL * _baseURL;
    HMFHTTPClientConfiguration * _configuration;
    <HMFHTTPClientDelegate> * _delegate;
    HMFTimer * _delegatedPingTimer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFNetManager * _netManager;
    HMFNetService * _netService;
    bool  _pinging;
    NSObject<OS_dispatch_queue> * _queue;
    HMFNetMonitor * _reachabilityMonitor;
    NSOperationQueue * _reachabilityProbeQueue;
    bool  _reachable;
    NSURLSession * _session;
    id /* block */  _timerFactory;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) bool allowAnonymousConnection;
@property (nonatomic, readonly, copy) NSURL *baseURL;
@property (readonly, copy) HMFHTTPClientConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property <HMFHTTPClientDelegate> *delegate;
@property (nonatomic, retain) HMFTimer *delegatedPingTimer;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMFNetManager *netManager;
@property (nonatomic, readonly, copy) HMFNetService *netService;
@property (nonatomic, readonly) unsigned long long options;
@property (getter=isPinging, nonatomic) bool pinging;
@property (nonatomic, readonly) HMFNetMonitor *reachabilityMonitor;
@property (nonatomic, readonly) NSOperationQueue *reachabilityProbeQueue;
@property (getter=isReachable, nonatomic) bool reachable;
@property (nonatomic, readonly) NSURLSession *session;
@property (readonly) Class superclass;
@property (copy) id /* block */ timerFactory;

+ (id)baseURLWithScheme:(id)arg1 hostAddress:(id)arg2 port:(unsigned long long)arg3;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_sendRequest:(id)arg1 baseURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)allowAnonymousConnection;
- (id)attributeDescriptions;
- (id)baseURL;
- (void)cancelPendingRequests;
- (id)configuration;
- (id)createNSURLSession:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)delegatedPingTimer;
- (void)finishCommonInitialization;
- (id)init;
- (id)initWithBaseURL:(id)arg1 configuration:(id)arg2;
- (id)initWithBaseURL:(id)arg1 configuration:(id)arg2 netManager:(id)arg3;
- (id)initWithBaseURL:(id)arg1 configuration:(id)arg2 session:(id)arg3 reachabilityMonitor:(id)arg4 netManager:(id)arg5;
- (id)initWithBaseURL:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithNetService:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithService:(id)arg1 configuration:(id)arg2;
- (id)initWithService:(id)arg1 configuration:(id)arg2 netManager:(id)arg3;
- (id)initWithService:(id)arg1 configuration:(id)arg2 session:(id)arg3 reachabilityMonitor:(id)arg4 netManager:(id)arg5;
- (void)invalidate;
- (bool)isActive;
- (bool)isPinging;
- (bool)isReachable;
- (id)logIdentifier;
- (id)netManager;
- (id)netService;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (unsigned long long)options;
- (id)reachabilityMonitor;
- (id)reachabilityProbeQueue;
- (bool)requestClientReachabilityPingWithRetry:(bool)arg1;
- (void)resolveWithCompletionHandler:(id /* block */)arg1;
- (void)sendRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)session;
- (void)setActive:(bool)arg1;
- (void)setAllowAnonymousConnection:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegatedPingTimer:(id)arg1;
- (void)setPinging:(bool)arg1;
- (void)setReachable:(bool)arg1;
- (void)setTimerFactory:(id /* block */)arg1;
- (void)startDelegatedPingTimer;
- (void)startReachabilityProbe;
- (void)stopDelegatedPingTimer;
- (void)timerDidFire:(id)arg1;
- (id /* block */)timerFactory;

@end
