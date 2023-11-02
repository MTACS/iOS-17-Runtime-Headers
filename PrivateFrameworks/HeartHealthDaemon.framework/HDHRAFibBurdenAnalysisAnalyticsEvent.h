
@interface HDHRAFibBurdenAnalysisAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    NSDictionary * _additionalPayloadFromAlgorithm;
    long long  _calculationType;
    NSNumber * _calculationTypeDetails;
    long long  _numberOfTachograms;
    HKHRAFibBurdenAnalysisResult * _result;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (void).cxx_destruct;
- (long long)_bucketNumberOfTachogramsFrom:(long long)arg1;
- (id)_calculationTypeStringFromCalculationType:(long long)arg1;
- (id)eventName;
- (id)initWithResult:(id)arg1 calculationType:(long long)arg2 calculationTypeDetails:(id)arg3 numberOfTachograms:(long long)arg4 additionalPayloadFromAlgorithm:(id)arg5;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end
