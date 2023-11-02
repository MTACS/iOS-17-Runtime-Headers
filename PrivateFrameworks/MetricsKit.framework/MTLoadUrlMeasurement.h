
@interface MTLoadUrlMeasurement : MTPerfBaseMeasurement <MTLoadUrlMeasurementData>

@property (nonatomic, readonly, copy) NSArray *additionalFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *eventData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)mark:(id)arg1;
- (void)mark:(id)arg1 date:(id)arg2;
- (void)mark:(id)arg1 time:(long long)arg2;
- (void)setConnectionReused:(bool)arg1;
- (void)setDnsServersIPAddresses:(id)arg1;
- (void)setEdgeNodeCacheStatus:(id)arg1;
- (void)setRedirectCount:(unsigned long long)arg1;
- (void)setRequestUrl:(id)arg1;
- (void)setResolvedIPAddress:(id)arg1;
- (void)setStatusCode:(unsigned long long)arg1;
- (void)setXpSamplingForced:(bool)arg1;
- (void)setXpSamplingPercentageUsers:(double)arg1;
- (void)setXpSessionDuration:(unsigned long long)arg1;

@end
