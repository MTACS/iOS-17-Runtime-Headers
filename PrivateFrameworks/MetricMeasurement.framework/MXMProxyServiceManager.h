
@interface MXMProxyServiceManager : NSObject {
    NSXPCConnection * __serviceConnection;
}

@property (readonly) <MetricMeasurementHelperProtocol_Internal> *_proxyObject;
@property (readonly) NSXPCConnection *_serviceConnection;

+ (id)shared;

- (void).cxx_destruct;
- (id)_proxyObject;
- (void)_quiesceBeforeIteration:(double)arg1 timeout:(double)arg2 response:(id /* block */)arg3;
- (id)_sampleWithProxyMetric:(id)arg1 timeout:(double)arg2 stopReason:(unsigned long long*)arg3;
- (id)_serviceConnection;
- (void)_startPerformanceTrace:(id)arg1 response:(id /* block */)arg2;
- (void)_stopPerformanceTrace:(id /* block */)arg1;
- (void)dealloc;
- (id)initInternal;
- (bool)wake;

@end
