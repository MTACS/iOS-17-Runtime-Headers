
@interface HMDHTTPClientMessageTransport : HMFObject <HMFDumpState, HMFHTTPClientDelegate, HMFLogging, HMFNetServiceDelegate> {
    HMFHTTPClient * _client;
    <HMDHTTPClientMessageTransportDelegate> * _delegate;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFNetService * _netService;
    HMDHTTPDevice * _remoteDevice;
    bool  _running;
    NSUUID * _sessionIdentifier;
}

@property (nonatomic, readonly) HMFHTTPClient *client;
@property (readonly, copy) NSString *debugDescription;
@property <HMDHTTPClientMessageTransportDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) HMFNetService *netService;
@property (getter=isReachable, nonatomic, readonly) bool reachable;
@property (nonatomic, readonly) HMDHTTPDevice *remoteDevice;
@property (getter=isRunning, nonatomic) bool running;
@property (readonly, copy) NSUUID *sessionIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_receiveMessage;
- (void)_sendResponseMessage:(id)arg1 forTransactionIdentifier:(id)arg2;
- (void)_stopWithError:(id)arg1;
- (id)client;
- (void)client:(id)arg1 didRequestPingWithCompletionHandler:(id /* block */)arg2;
- (void)clientDidBecomeUnreachable:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)dumpState;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 netService:(id)arg2;
- (bool)isReachable;
- (bool)isRunning;
- (id)logIdentifier;
- (id)netService;
- (void)netService:(id)arg1 didUpdateTXTRecord:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)remoteDevice;
- (void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)sendPingWithCompletionHandler:(id /* block */)arg1;
- (id)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setRunning:(bool)arg1;
- (id)shortDescription;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)stop;

@end
