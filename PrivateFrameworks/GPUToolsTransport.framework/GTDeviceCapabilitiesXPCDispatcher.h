
@interface GTDeviceCapabilitiesXPCDispatcher : GTXPCDispatcher <GTDeviceCapabilitiesXPCDispatcher> {
    <GTDeviceCapabilities> * _service;
}

- (void).cxx_destruct;
- (void)daemonDeviceCapabilities:(id)arg1 replyConnection:(id)arg2;
- (void)gpuToolsVersionQuery:(id)arg1 replyConnection:(id)arg2;
- (void)inferiorEnvironment_:(id)arg1 replyConnection:(id)arg2;
- (id)initWithService:(id)arg1 properties:(id)arg2;

@end
