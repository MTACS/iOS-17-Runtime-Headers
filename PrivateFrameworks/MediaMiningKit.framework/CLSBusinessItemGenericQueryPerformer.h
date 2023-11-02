
@interface CLSBusinessItemGenericQueryPerformer : NSObject <CLSQueryPerformerProtocol> {
    <GEOMapServiceBatchSpatialLookupTicket> * _businessGenericTicket;
    bool  _isCancelled;
    NSArray * _locationGeoParameters;
    NSObject<OS_os_log> * _loggingConnection;
    double  _precision;
    NSArray * _regions;
    struct { 
        unsigned long long numberOfLocations; 
        unsigned long long numberOfResolvedLocations; 
        unsigned long long numberOfUnneededLocations; 
        unsigned long long numberOfRequests; 
        unsigned long long batchSize; 
    }  _statistics;
}

@property (nonatomic, readonly) <GEOMapServiceBatchSpatialLookupTicket> *businessGenericTicket;
@property (nonatomic, readonly) CLSBusinessCategoryCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) NSArray *locationGeoParameters;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic) double precision;
@property (nonatomic, readonly, copy) NSArray *regions;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } statistics;
@property (readonly) Class superclass;

+ (id)categories;
+ (double)defaultPrecision;
+ (unsigned long long)numberOfRegionsPerBatch;
+ (id)queryWithTemplate:(id)arg1 forRegions:(id)arg2;

- (void).cxx_destruct;
- (id)businessGenericTicket;
- (id)cache;
- (unsigned long long)cacheItems:(id)arg1;
- (void)cancel;
- (id)init;
- (id)initWithRegions:(id)arg1 categories:(id)arg2 precision:(double)arg3;
- (bool)isCancelled;
- (id)locationGeoParameters;
- (void)logGeoLookupCounterAndDurationWithLookupDuration:(id)arg1;
- (void)logGeoLookupFailureResult;
- (id)loggingConnection;
- (double)precision;
- (id)regions;
- (void)setLoggingConnection:(id)arg1;
- (void)setPrecision:(double)arg1;
- (void)setStatistics:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })arg1;
- (bool)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })statistics;
- (void)submitWithHandler:(id /* block */)arg1;

@end
