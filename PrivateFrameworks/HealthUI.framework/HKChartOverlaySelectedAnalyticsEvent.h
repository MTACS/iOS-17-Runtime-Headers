
@interface HKChartOverlaySelectedAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    HKChartOverlaySelectedAnalyticsEventConfiguration * _configuration;
    HKDisplayTypeContextItem * _currentItem;
    HKDisplayTypeContextItem * _previousItem;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (void).cxx_destruct;
- (id)determineFeatureVersionWithHealthDataSource:(id)arg1;
- (id)eventName;
- (id)initWithConfiguration:(id)arg1 previousItem:(id)arg2 currentItem:(id)arg3;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end
