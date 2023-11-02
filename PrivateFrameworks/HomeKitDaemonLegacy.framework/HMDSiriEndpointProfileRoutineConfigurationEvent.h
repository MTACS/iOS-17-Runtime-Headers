
@interface HMDSiriEndpointProfileRoutineConfigurationEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _accessoryCategoryType;
    HMDSiriEndpointProfileAccessorySettingFields * _accessorySettingFields;
    HMDSiriEndpointProfileFields * _profileFields;
}

@property (readonly) NSString *accessoryCategoryType;
@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (readonly) HMDSiriEndpointProfileAccessorySettingFields *accessorySettingFields;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) HMDSiriEndpointProfileFields *profileFields;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessoryCategoryType;
- (id)accessorySettingFields;
- (id)attributeDescriptions;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithAccessoryCategoryType:(id)arg1 profileFields:(id)arg2 accessorySettingFields:(id)arg3;
- (id)profileFields;

@end
