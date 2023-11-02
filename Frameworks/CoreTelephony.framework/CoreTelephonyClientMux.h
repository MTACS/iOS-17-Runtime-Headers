
@interface CoreTelephonyClientMux : NSObject <MuxNotificationSinkDelegate> {
    FrameworkCache * _cache;
    struct map<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>, std::less<__CTAssertionType *>, std::allocator<std::pair<__CTAssertionType *const, std::pair<dispatch::queue, void (^)(NSError *)>>>>="__tree_"{__tree<std::__value_type<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>>, std::__map_value_compare<__CTAssertionType *, std::__value_type<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>>, std::less<__CTAssertionType *>>, std::allocator<std::__value_type<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v {}  _clientCallback;
    NSXPCConnection * _connection;
    NSSet * _currentSelectorSet;
    struct map<__unsafe_unretained id, (anonymous namespace)::DelegateContext, std::less<__unsafe_unretained id>, std::allocator<std::pair<const __unsafe_unretained id, (anonymous namespace)::DelegateContext>>>="__tree_"{__tree<std::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::__map_value_compare<__unsafe_unretained id, std::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::less<__unsafe_unretained id>>, std::allocator<std::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v {}  _delegates;
    NSXPCListenerEndpoint * _endpoint;
    MuxNotificationSink * _notificationSink;
    NSError * _reconnectError;
    struct queue { 
        struct object { 
            struct dispatch_object_s {} *fObj; 
        } fObj; 
    }  _xpcQueue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;
@property (nonatomic, retain) MuxNotificationSink *notificationSink;
@property (nonatomic, retain) NSError *reconnectError;
@property (nonatomic) struct queue { struct object { struct dispatch_object_s {} *x_1_1_1; } x1; } xpcQueue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_computeNotificationSetForced_sync;
- (void)_computeNotificationSetForced_sync:(id /* block */)arg1;
- (void)_computeNotificationSet_sync:(id /* block */)arg1;
- (void)_computeNotificationSet_sync:(bool)arg1 completion:(id /* block */)arg2;
- (void)_connect_sync;
- (id)_connection;
- (void)_ensureConnectionSetup_sync;
- (void)_ensureConnectionSetup_sync:(bool)arg1;
- (unsigned long long)_getAssertionTypeId;
- (void)_initializeConnection_sync;
- (void)_registerForNotifications_sync:(id)arg1 shouldForce:(bool)arg2 completion:(id /* block */)arg3;
- (void)_sendConnectionInvalidatedNotification_sync:(id)arg1;
- (void)_setReconnectError_sync:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(struct queue { struct object { struct dispatch_object_s {} *x_1_1_1; } x1; })arg2;
- (void)cacheValue:(id)arg1 forSelector:(SEL)arg2;
- (id)cachedValueForSelector:(SEL)arg1;
- (id)connection;
- (struct __CTAssertionType { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; id x2; id x3; int x4; }*)createCTAssertionForConnectionType:(int)arg1 allocator:(struct __CFAllocator { }*)arg2 proxy:(id)arg3;
- (void)dealloc;
- (id)endpoint;
- (id)init;
- (id)initWithEndpoint:(id)arg1 sink:(id)arg2;
- (id)initWithSink:(id)arg1;
- (id)notificationSink;
- (id)proxyWithErrorHandler_sync:(id /* block */)arg1;
- (id)proxyWithQueue:(struct queue { struct object { struct dispatch_object_s {} *x_1_1_1; } x1; })arg1 errorHandler:(id /* block */)arg2;
- (id)reconnectError;
- (void)registerBlockForInvalidationNotification:(struct __CTAssertionType { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; id x2; id x3; int x4; }*)arg1 callbackQueue:(struct queue { struct object { struct dispatch_object_s {} *x_1_1_1; } x1; })arg2 callback:(id /* block */)arg3;
- (void)removeAssertionForInvalidationNotification:(struct __CTAssertionType { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; id x2; id x3; int x4; }*)arg1;
- (void)removeDelegate:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setNotificationSink:(id)arg1;
- (void)setReconnectError:(id)arg1;
- (void)setXpcQueue:(struct queue { struct object { struct dispatch_object_s {} *x_1_1_1; } x1; })arg1;
- (void)sink:(id)arg1 handleNotification:(id)arg2;
- (id)synchronousProxyWithErrorHandler:(id /* block */)arg1;
- (struct queue { struct object { struct dispatch_object_s {} *x_1_1_1; } x1; })xpcQueue;

@end
