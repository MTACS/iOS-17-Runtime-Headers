
@interface PAProcessStateMonitor : NSObject <PAProcessStateMonitoring>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)startMonitoringVisibilityStateForBundleIdentifiers:(id)arg1 onQueue:(id)arg2 withDelegate:(id)arg3;

@end
