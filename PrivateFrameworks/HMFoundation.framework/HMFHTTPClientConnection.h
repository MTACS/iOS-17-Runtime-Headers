
@interface HMFHTTPClientConnection : HMFObject <HMFLogging, _HMFCFHTTPServerConnectionDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMFHTTPClientConnectionDelegate> * _delegate;
    _HMFCFHTTPServerConnection * _internal;
    NSMutableArray * _pendingRespones;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property <HMFHTTPClientConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _HMFCFHTTPServerConnection *internal;
@property (nonatomic, readonly) HMFNetAddress *peerAddress;
@property (nonatomic, readonly) NSMutableArray *pendingRespones;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)clientQueue;
- (void)close;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithConnection:(id)arg1;
- (id)internal;
- (id)logIdentifier;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)peerAddress;
- (id)pendingRespones;
- (void)sendResponse:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (id)shortDescription;

@end
