
@interface CMIOExtensionProviderServer : NSObject {
    NSObject<OS_xpc_object> * _endpoint;
    bool  _internalDaemon;
    NSObject<OS_xpc_object> * _listener;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceName;
}

@property (nonatomic, readonly) bool internalDaemon;

+ (id)sharedServer;

- (void)addConnection:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)internalDaemon;
- (void)start;

@end
