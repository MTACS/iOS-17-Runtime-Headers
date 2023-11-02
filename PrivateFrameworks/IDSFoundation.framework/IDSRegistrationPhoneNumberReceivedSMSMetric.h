
@interface IDSRegistrationPhoneNumberReceivedSMSMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSString * _guid;
    NSNumber * _smsRoundTripDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *guid;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *smsRoundTripDuration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)guid;
- (id)initWithGuid:(id)arg1 smsRoundTripDuration:(id)arg2;
- (id)name;
- (id)smsRoundTripDuration;

@end
