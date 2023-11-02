
@interface HMDUserCloudShareParticipantAdoptionDailyEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging> {
    NSNumber * _configureState;
    NSNumber * _hasOwnerCloudShareID;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (readonly, copy) NSNumber *configureState;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSNumber *hasOwnerCloudShareID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configureState;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)hasOwnerCloudShareID;
- (id)initWithConfigureState:(long long)arg1 hasOwnerCloudShareID:(bool)arg2;

@end
