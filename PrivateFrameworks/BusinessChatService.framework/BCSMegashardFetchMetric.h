
@interface BCSMegashardFetchMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSMegashardFetchMetricProtocol> {
    long long  errorCode;
    long long  hoursSinceLastSuccessfulFetch;
    unsigned long long  reason;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long hoursSinceLastSuccessfulFetch;
@property (nonatomic) unsigned long long reason;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)metricForMegashardType:(long long)arg1 postProcessingMetricHandlers:(id)arg2;

- (id)coreAnalyticsEventName;
- (id)coreAnalyticsPayload;
- (long long)errorCode;
- (long long)hoursSinceLastSuccessfulFetch;
- (unsigned long long)reason;
- (void)setErrorCode:(long long)arg1;
- (void)setHoursSinceLastSuccessfulFetch:(long long)arg1;
- (void)setReason:(unsigned long long)arg1;
- (long long)type;

@end
