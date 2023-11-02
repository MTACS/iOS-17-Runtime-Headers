
@interface HKMobilityWalkingSteadinessAnalyticsDailyEvent : NSObject <HKAnalyticsEvent> {
    <HKMobilityWalkingSteadinessAnalyticsDailyEventDataSourceProvider> * _dataSource;
}

@property (nonatomic, retain) <HKMobilityWalkingSteadinessAnalyticsDailyEventDataSourceProvider> *dataSource;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (void).cxx_destruct;
- (id)dataSource;
- (id)eventName;
- (id)initWithDataSource:(id)arg1;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (void)setDataSource:(id)arg1;

@end
