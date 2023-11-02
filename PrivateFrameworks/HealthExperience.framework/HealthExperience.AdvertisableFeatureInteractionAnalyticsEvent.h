
@interface HealthExperience.AdvertisableFeatureInteractionAnalyticsEvent : _TtCs12_SwiftObject <HKAnalyticsEvent> {
    void featureModels;
    void location;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (id)eventName;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end
