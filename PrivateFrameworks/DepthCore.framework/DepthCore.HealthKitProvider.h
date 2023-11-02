
@interface DepthCore.HealthKitProvider : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _maxDepth;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _minTemperature;
    void configuration;
    void depthObserverQuery;
    void healthStore;
    void queryQueue;
    void queryTask;
    void temperatureObserverQuery;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleDayChange;
- (void)handleSignificantTimeChange;
- (void)handleTimeZoneChange;
- (id)init;

@end
