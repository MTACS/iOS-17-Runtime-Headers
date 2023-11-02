
@interface HKOnboardingUIErrorAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    NSString * _OTAFactorPackID;
    NSString * _countryCode;
    NSString * _errorCategory;
    NSString * _errorDetail;
    NSString * _featureIdentifier;
    NSString * _featureVersion;
    NSString * _step;
}

@property (nonatomic, readonly, copy) NSString *OTAFactorPackID;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly, copy) NSString *errorCategory;
@property (nonatomic, readonly, copy) NSString *errorDetail;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (nonatomic, readonly, copy) NSString *featureVersion;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;
@property (nonatomic, readonly, copy) NSString *step;

- (void).cxx_destruct;
- (id)OTAFactorPackID;
- (id)countryCode;
- (id)errorCategory;
- (id)errorDetail;
- (id)eventName;
- (id)featureIdentifier;
- (id)featureVersion;
- (id)initWithFeatureIdentifier:(id)arg1 featureVersion:(id)arg2 countryCode:(id)arg3 step:(id)arg4 errorCategory:(id)arg5 errorDetail:(id)arg6 OTAFactorPackID:(id)arg7;
- (id)initWithFeatureIdentifier:(id)arg1 featureVersion:(id)arg2 countryCode:(id)arg3 step:(id)arg4 onboardingEligibility:(id)arg5;
- (id)initWithFeatureIdentifier:(id)arg1 featureVersion:(id)arg2 countryCode:(id)arg3 step:(id)arg4 onboardingIneligibilityReasons:(unsigned long long)arg5;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)step;

@end
