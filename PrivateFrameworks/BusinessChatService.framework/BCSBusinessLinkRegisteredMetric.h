
@interface BCSBusinessLinkRegisteredMetric : BCSMetric <BCSBusinessLinkChoppingMetric, BCSCoreAnalyticsEventDescribing, BCSItemFetchMetricProtocol> {
    bool  choppingEnabled;
    long long  errorCode;
    long long  successfulChop;
    BCSTimingMeasurement * timingMeasurement;
}

@property (getter=isChoppingEnabled, nonatomic) bool choppingEnabled;
@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long successfulChop;
@property (readonly) Class superclass;
@property (nonatomic, retain) BCSTimingMeasurement *timingMeasurement;

+ (id)metricWithPostProcessingMetricHandlers:(id)arg1;

- (void).cxx_destruct;
- (id)coreAnalyticsEventName;
- (id)coreAnalyticsPayload;
- (long long)errorCode;
- (bool)isChoppingEnabled;
- (void)setChoppingEnabled:(bool)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setSuccessfulChop:(long long)arg1;
- (void)setTimingMeasurement:(id)arg1;
- (long long)successfulChop;
- (id)timingMeasurement;

@end
