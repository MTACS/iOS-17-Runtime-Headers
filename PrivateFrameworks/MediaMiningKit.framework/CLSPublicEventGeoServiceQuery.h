
@interface CLSPublicEventGeoServiceQuery : NSObject <CLSQueryProtocol> {
    NSObject<OS_dispatch_queue> * _geoQueue;
    NSDictionary * _invalidationTokens;
    bool  _isCancelled;
    NSDictionary * _parametersByTimeLocationTupleIdentifier;
    double  _radius;
    NSDictionary * _resolvedPublicEventsForTimeLocationTuples;
    <GEOMapServiceSpatialEventLookupTicket> * _ticket;
    NSArray * _timeLocationTuples;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *geoQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *invalidationTokens;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) NSDictionary *parametersByTimeLocationTupleIdentifier;
@property (nonatomic, readonly) double radius;
@property (nonatomic, retain) NSDictionary *resolvedPublicEventsForTimeLocationTuples;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOMapServiceSpatialEventLookupTicket> *ticket;
@property (nonatomic, readonly) NSArray *timeLocationTuples;

+ (unsigned long long)maximumBatchSize;

- (void).cxx_destruct;
- (id)_parametersByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1;
- (id)_publicEventsForGeoEvent:(id)arg1 matchingParameters:(id)arg2;
- (void)cancel;
- (id)geoQueue;
- (id)initWithTimeLocationTuples:(id)arg1 radius:(double)arg2;
- (id)invalidationTokens;
- (bool)isCancelled;
- (id)parametersByTimeLocationTupleIdentifier;
- (void)prepareForRetry;
- (double)radius;
- (id)resolvedPublicEventsForTimeLocationTuples;
- (void)setInvalidationTokens:(id)arg1;
- (void)setResolvedPublicEventsForTimeLocationTuples:(id)arg1;
- (void)submitWithHandler:(id /* block */)arg1;
- (id)ticket;
- (id)timeLocationTuples;

@end
