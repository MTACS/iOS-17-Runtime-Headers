
@interface PLCacheMetricsCollectorServerShell : NSObject {
    PLCacheMetricsCollectorServer * _cacheMetricsCollectorServer;
}

@property (nonatomic, retain) PLCacheMetricsCollectorServer *cacheMetricsCollectorServer;

- (void).cxx_destruct;
- (id)cacheMetricsCollectorServer;
- (void)setCacheMetricsCollectorServer:(id)arg1;

@end
