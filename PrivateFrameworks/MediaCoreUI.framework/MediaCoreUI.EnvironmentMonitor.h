
@interface MediaCoreUI.EnvironmentMonitor : NSObject <ICEnvironmentMonitorObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isNetworkConstrained;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _thermalLevel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)environmentMonitorDidChangeThermalLevel:(id)arg1;
- (id)init;

@end
