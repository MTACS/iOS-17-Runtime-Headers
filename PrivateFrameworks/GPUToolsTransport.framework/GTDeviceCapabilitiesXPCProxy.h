
@interface GTDeviceCapabilitiesXPCProxy : NSObject <GTDeviceCapabilities> {
    GTServiceConnection * _connection;
    NSSet * _ignoreMethods;
}

- (void).cxx_destruct;
- (id)daemonDeviceCapabilities;
- (id)gpuToolsVersionQuery;
- (id)inferiorEnvironment:(id)arg1;
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;
- (bool)respondsToSelector:(SEL)arg1;

@end
