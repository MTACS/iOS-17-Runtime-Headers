
@interface TUUIXPCHost : NSObject <NSXPCListenerDelegate, TUUIXPCHostConnectionDelegate> {
    int  _clientsShouldConnectToken;
    NSMutableSet * _connections;
    <TUUIXPCHostDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, readonly) int clientsShouldConnectToken;
@property (nonatomic, retain) NSMutableSet *connections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUUIXPCHostDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (int)clientsShouldConnectToken;
- (void)connectionInvalidated:(id)arg1;
- (id)connections;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)endpoint;
- (id)init;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)queue;
- (void)setConnections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (id)xpcListener;

@end
