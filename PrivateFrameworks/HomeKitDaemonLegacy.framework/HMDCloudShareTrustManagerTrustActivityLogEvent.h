
@interface HMDCloudShareTrustManagerTrustActivityLogEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging> {
    NSNumber * _isPrimaryResident;
    NSNumber * _privilege;
    NSNumber * _trustActivityType;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly, copy) NSNumber *isPrimaryResident;
@property (readonly, copy) NSNumber *privilege;
@property (readonly) Class superclass;
@property (readonly, copy) NSNumber *trustActivityType;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithTrustActivityType:(long long)arg1 privilege:(unsigned long long)arg2 isPrimaryResident:(bool)arg3;
- (id)isPrimaryResident;
- (id)privilege;
- (id)trustActivityType;

@end
