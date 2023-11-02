
@interface USDeviceActivityMonitorExtensionProxy : NSObject <USDeviceActivityMonitorExtension> {
    NSArray * _extensions;
    unsigned long long  _timeoutInSeconds;
    unsigned long long  _timeoutLeewayInSeconds;
    NSObject<OS_dispatch_queue_global> * _timeoutQueue;
}

@property (readonly) NSArray *extensions;
@property unsigned long long timeoutInSeconds;
@property unsigned long long timeoutLeewayInSeconds;
@property (readonly) NSObject<OS_dispatch_queue_global> *timeoutQueue;

- (void).cxx_destruct;
- (void)_cancelTimer:(id)arg1;
- (void)_requestExtensionVendorProxyForExtension:(id)arg1 proxyHandler:(id /* block */)arg2;
- (id)_scheduleTimerWithIntervalInSeconds:(unsigned long long)arg1 leewayInSeconds:(unsigned long long)arg2 extensionPID:(int)arg3 handler:(id /* block */)arg4;
- (id)_scheduleTimerWithIntervalInSeconds:(unsigned long long)arg1 leewayInSeconds:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)eventDidReachThreshold:(id)arg1 activity:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)eventWillReachThresholdWarning:(id)arg1 activity:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)extensions;
- (id)initWithBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithClientIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithExtensionsMatchingAttributes:(id)arg1 error:(id*)arg2;
- (void)intervalDidEndForActivity:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)intervalDidStartForActivity:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)intervalWillEndWarningForActivity:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)intervalWillStartWarningForActivity:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)setTimeoutInSeconds:(unsigned long long)arg1;
- (void)setTimeoutLeewayInSeconds:(unsigned long long)arg1;
- (unsigned long long)timeoutInSeconds;
- (unsigned long long)timeoutLeewayInSeconds;
- (id)timeoutQueue;

@end
