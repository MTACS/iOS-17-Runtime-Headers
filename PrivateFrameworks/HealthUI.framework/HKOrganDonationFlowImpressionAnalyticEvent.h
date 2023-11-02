
@interface HKOrganDonationFlowImpressionAnalyticEvent : NSObject <HKAnalyticsEvent> {
    int  _impressionEvent;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (id)createEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)eventName;
- (id)initWithImpressionEvent:(int)arg1;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end
