
@interface BSXPCConnectionListener : NSObject {
    NSObject<OS_xpc_object> * _connection;
    <BSXPCConnectionListenerHandler> * _handler;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _service;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
