
@interface HKAFibBurdenLifeFactorLoggingInitiatedAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    long long  _context;
    HKSampleType * _sampleType;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (void).cxx_destruct;
- (id)determineFeatureVersionWithHealthDataSource:(id)arg1;
- (id)eventName;
- (id)initWithSampleType:(id)arg1 context:(long long)arg2;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end
