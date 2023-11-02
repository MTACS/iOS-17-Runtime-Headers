
@interface HMDXPCMessageTransport : HMFMessageTransport <HMFLogging, HMFMessageTransportDelegate, HMFTimerDelegate, NSXPCListenerDelegate> {
    NSMutableDictionary * _cachedResponses;
    HMDXPCClientConnectionFactory * _clientConnectionFactory;
    HMXPCMessageTransportConfiguration * _configuration;
    NSMutableSet * _connections;
    NSXPCInterface * _exportedInterface;
    NSXPCListener * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDProcessMonitor * _processMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCInterface * _remoteObjectInterface;
    HMDXPCMessageCountTracker * _xpcCounterTracker;
}

@property (readonly, copy) NSDictionary *activeRequests;
@property (readonly) HMDXPCClientConnectionFactory *clientConnectionFactory;
@property (readonly, copy) HMXPCMessageTransportConfiguration *configuration;
@property (readonly, copy) NSArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSXPCListener *listener;
@property (readonly) HMDProcessMonitor *processMonitor;
@property (readonly) Class superclass;

+ (id)accessorySetupTransport;
+ (id)defaultTransport;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)__retrieveAndClearMessagesForCachedResponseEntry:(id)arg1;
- (void)_reportCompletion:(id)arg1;
- (id)activeRequests;
- (void)cacheResponseMessage:(id)arg1;
- (void)cacheResponsesForMessageWithIdentifier:(id)arg1 transport:(id)arg2 reportContext:(id)arg3;
- (id)clientConnectionFactory;
- (id)configuration;
- (id)connections;
- (id)dumpState;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 listener:(id)arg2 clientConnectionFactory:(id)arg3;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)logIdentifier;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (id)processMonitor;
- (void)reportCompletionForMessageWithIdentifier:(id)arg1;
- (id)retrieveAndClearMessagesForRequestInfo:(id)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)start;
- (void)stop;
- (void)submitCounters;
- (void)timerDidFire:(id)arg1;

@end
