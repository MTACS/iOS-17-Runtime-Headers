
@interface DeviceActivity.DeviceActivityMonitorContext : NSExtensionContext <DeviceActivity.DeviceActivityMonitorHost, USDeviceActivityMonitorExtension> {
    void $__lazy_storage_$_monitor;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)eventDidReachThreshold:(id)arg1 activity:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)eventWillReachThresholdWarning:(id)arg1 activity:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithInputItems:(id)arg1;
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)intervalDidEndForActivity:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)intervalDidStartForActivity:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)intervalWillEndWarningForActivity:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)intervalWillStartWarningForActivity:(id)arg1 replyHandler:(id /* block */)arg2;

@end
