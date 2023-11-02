
@interface BCSShardResolutionMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSResolutionMetricProtocol, BCSShardItemIdentifierProviding> {
    BCSFlagMeasurement * cacheHitMeasurement;
    long long  errorCode;
    BCSTimingMeasurement * timingMeasurement;
}

@property (nonatomic, retain) BCSFlagMeasurement *cacheHitMeasurement;
@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BCSShardItemIdentifying> *shardItemIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) BCSTimingMeasurement *timingMeasurement;

+ (id)metricForShardIdentifier:(id)arg1 postProcessingMetricHandlers:(id)arg2;

- (void).cxx_destruct;
- (id)cacheHitMeasurement;
- (id)coreAnalyticsEventName;
- (id)coreAnalyticsPayload;
- (long long)errorCode;
- (void)setCacheHitMeasurement:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setTimingMeasurement:(id)arg1;
- (id)shardItemIdentifier;
- (id)timingMeasurement;

@end
