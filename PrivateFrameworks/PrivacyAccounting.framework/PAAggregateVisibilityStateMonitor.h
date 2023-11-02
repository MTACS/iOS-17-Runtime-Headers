
@interface PAAggregateVisibilityStateMonitor : NSObject {
    <PAProcessStateMonitoring> * _rawMonitor;
    double  _startupInterval;
}

- (void).cxx_destruct;
- (id)initWithRawMonitor:(id)arg1 startupInterval:(double)arg2;
- (id)startMonitoringAggregateVisibilityStateForBundleIdentifiers:(id)arg1 onQueue:(id)arg2 withDelegate:(id)arg3;

@end
