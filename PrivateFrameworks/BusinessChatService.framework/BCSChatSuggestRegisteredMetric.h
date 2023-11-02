
@interface BCSChatSuggestRegisteredMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSItemFetchMetricProtocol> {
    long long  errorCode;
    BCSTimingMeasurement * timingMeasurement;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) BCSTimingMeasurement *timingMeasurement;

+ (id)metricWithPostProcessingMetricHandlers:(id)arg1;

- (void).cxx_destruct;
- (id)coreAnalyticsEventName;
- (id)coreAnalyticsPayload;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (void)setTimingMeasurement:(id)arg1;
- (id)timingMeasurement;

@end
