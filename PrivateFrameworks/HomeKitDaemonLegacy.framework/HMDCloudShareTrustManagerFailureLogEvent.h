
@interface HMDCloudShareTrustManagerFailureLogEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging> {
    NSNumber * _trustManagerErrorCode;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) Class superclass;
@property (readonly, copy) NSNumber *trustManagerErrorCode;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithTrustManagerErrorCode:(long long)arg1 error:(id)arg2;
- (id)trustManagerErrorCode;

@end
