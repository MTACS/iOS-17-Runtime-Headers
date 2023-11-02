
@protocol PPSMetricMonitorServiceInterface

@required

- (void)finishMonitoringAndSendMetrics;
- (void)setUpWithConfiguration:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: PPSMetricMonitorConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startMonitoringProcessWithName:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startMonitoringProcessWithPID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startMonitoringSystemMetricsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
