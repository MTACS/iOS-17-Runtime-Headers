
@interface HMDMultiUserSettingsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    HMMultiUserSettingsForMetrics * _multiUserSettings;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly, copy) HMMultiUserSettingsForMetrics *multiUserSettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithMultiUserSettings:(id)arg1;
- (id)multiUserSettings;

@end
