
@interface HealthUI.HKInteractiveChartInteractionAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    void eventPayload;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (void).cxx_destruct;
- (id)eventName;
- (id)init;
- (id)initFor:(id)arg1 timeScopeSelected:(long long)arg2;
- (id)initWithShowMoreDataForDataType:(id)arg1;
- (id)initWithShowMoreDataForDisplayType:(id)arg1;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end
