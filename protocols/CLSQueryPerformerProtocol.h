
@protocol CLSQueryPerformerProtocol <NSObject>

@required

+ (double)defaultPrecision;
+ (unsigned long long)numberOfRegionsPerBatch;
+ (id)queryWithTemplate:(id <CLSQueryPerformerProtocol>)arg1 forRegions:(NSArray *)arg2;

- (unsigned long long)cacheItems:(NSArray *)arg1;
- (void)cancel;
- (bool)isCancelled;
- (void)logGeoLookupCounterAndDurationWithLookupDuration:(NSNumber *)arg1;
- (void)logGeoLookupFailureResult;
- (NSObject<OS_os_log> *)loggingConnection;
- (double)precision;
- (NSArray *)regions;
- (void)setLoggingConnection:(NSObject<OS_os_log> *)arg1;
- (void)setPrecision:(double)arg1;
- (void)setStatistics:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })arg1;
- (bool)shouldQueryItemsForRegion:(CLCircularRegion *)arg1 selectedRegions:(NSArray *)arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })statistics;
- (void)submitWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
