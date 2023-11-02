
@protocol PAProcessStateMonitoring <NSObject>

@required

- (<PAProcessStateMonitoringEnding> *)startMonitoringVisibilityStateForBundleIdentifiers:(NSSet *)arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2 withDelegate:(id <PAProcessStateMonitoringDelegate>)arg3;

@end
