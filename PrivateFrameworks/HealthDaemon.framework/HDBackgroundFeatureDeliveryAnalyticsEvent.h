
@interface HDBackgroundFeatureDeliveryAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    NSString * _countryCode;
    long long  _countryCodeProvenance;
    NSString * _errorCategory;
    NSString * _errorDetail;
    NSString * _eventType;
    NSString * _featureIdentifier;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (void).cxx_destruct;
- (id)eventName;
- (id)initWithFeatureIdentifier:(id)arg1 eventType:(id)arg2 countryCode:(id)arg3 countryCodeProvenance:(long long)arg4 errorCategory:(id)arg5 errorDetail:(id)arg6;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end
