
@interface ENXPCServiceListener : NSObject {
    NSMutableSet * _connections;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSObject<OS_xpc_object> * _xpcListener;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcEndpoint;

+ (id)sharedServiceListener;

- (void).cxx_destruct;
- (id)_init;
- (void)activate;
- (void)connectionInvalidated:(id)arg1;
- (id)dispatchQueue;
- (id)initAnonymousListener;
- (void)invalidate;
- (void)main;
- (void)xpcConnectionAccept:(id)arg1;
- (id)xpcEndpoint;
- (void)xpcListenerEvent:(id)arg1;

@end
