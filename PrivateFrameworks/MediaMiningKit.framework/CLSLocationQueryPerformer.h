
@interface CLSLocationQueryPerformer : NSObject <CLSQueryPerformerProtocol> {
    NSArray * _geoLocations;
    bool  _isCancelled;
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
    <GEOMapServiceTicket> * _ticket;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *geoLocations;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic) double precision;
@property (nonatomic, readonly, copy) NSArray *regions;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } statistics;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOMapServiceTicket> *ticket;

+ (double)defaultPrecision;
+ (unsigned long long)numberOfRegionsPerBatch;
+ (id)queryWithTemplate:(id)arg1 forRegions:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)cacheItems:(id)arg1;
- (void)cancel;
- (id)geoLocations;
- (id)init;
- (id)initWithRegions:(id)arg1 precision:(double)arg2;
- (bool)isCancelled;
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
- (id)ticket;

@end
