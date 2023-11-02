
@interface HMDWiFiReconfigurationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    HMDAccessory * _accessory;
    long long  _credentialType;
    HMDAccessory * _routerAccessory;
    bool  _usingFailSafeUpdate;
}

@property (nonatomic, retain) HMDAccessory *accessory;
@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (nonatomic) long long credentialType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, retain) HMDAccessory *routerAccessory;
@property (readonly) Class superclass;
@property (getter=isUsingFailSafeUpdate, nonatomic) bool usingFailSafeUpdate;

- (void).cxx_destruct;
- (id)accessory;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (long long)credentialType;
- (bool)isUsingFailSafeUpdate;
- (id)routerAccessory;
- (void)setAccessory:(id)arg1;
- (void)setCredentialType:(long long)arg1;
- (void)setRouterAccessory:(id)arg1;
- (void)setUsingFailSafeUpdate:(bool)arg1;

@end
