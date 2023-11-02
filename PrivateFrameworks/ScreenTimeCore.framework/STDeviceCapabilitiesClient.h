
@interface STDeviceCapabilitiesClient : NSObject {
    NSXPCConnection * _connection;
}

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (void)isCapabilityEnabledForUser:(id)arg1 capability:(id)arg2 completionHandler:(id /* block */)arg3;

@end
