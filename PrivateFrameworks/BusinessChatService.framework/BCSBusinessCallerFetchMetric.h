
@interface BCSBusinessCallerFetchMetric : BCSMetric <BCSItemFetchMetricProtocol> {
    long long  errorCode;
    BCSTimingMeasurement * timingMeasurement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) BCSTimingMeasurement *timingMeasurement;

+ (id)metricWithPostProcessingMetricHandlers:(id)arg1;

- (void).cxx_destruct;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (void)setTimingMeasurement:(id)arg1;
- (id)timingMeasurement;

@end
