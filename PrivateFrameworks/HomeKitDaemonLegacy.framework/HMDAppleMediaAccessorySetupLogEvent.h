
@interface HMDAppleMediaAccessorySetupLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _accessoryAddEndTime;
    unsigned long long  _accessoryRemoveTime;
    NSString * _accessorySoftwareVersion;
    NSString * _category;
    unsigned long long  _configurationEndTime;
    unsigned long long  _firstSettingTime;
    bool  _isRepairSession;
    unsigned long long  _languageSettingTime;
    NSNumber * _retryCount;
    NSNumber * _role;
    NSString * _setupClientBundleID;
    unsigned long long  _setupEndTime;
    NSError * _setupSessionError;
    NSString * _setupSessionIdentifier;
    unsigned long long  _setupStartTime;
}

@property (readonly) unsigned long long accessoryAddEndTime;
@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (readonly) unsigned long long accessoryRemoveTime;
@property (readonly, copy) NSString *accessorySoftwareVersion;
@property (readonly, copy) NSString *category;
@property (readonly) unsigned long long configurationEndTime;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long firstSettingTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) bool isRepairSession;
@property (readonly) unsigned long long languageSettingTime;
@property (readonly, copy) NSNumber *retryCount;
@property (readonly, copy) NSNumber *role;
@property (readonly, copy) NSString *setupClientBundleID;
@property (readonly) unsigned long long setupEndTime;
@property (readonly, copy) NSError *setupSessionError;
@property (readonly, copy) NSString *setupSessionIdentifier;
@property (readonly) unsigned long long setupStartTime;
@property (readonly) Class superclass;

+ (bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

- (void).cxx_destruct;
- (unsigned long long)accessoryAddEndTime;
- (unsigned long long)accessoryRemoveTime;
- (id)accessorySoftwareVersion;
- (id)category;
- (unsigned long long)configurationEndTime;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (unsigned long long)firstSettingTime;
- (id)initWithRole:(long long)arg1 setupStartTime:(unsigned long long)arg2 setupEndTime:(unsigned long long)arg3 accessoryAddEndTime:(unsigned long long)arg4 accessoryRemoveTime:(unsigned long long)arg5 configurationEndTime:(unsigned long long)arg6 setupSessionError:(id)arg7 setupSessionIdentifier:(id)arg8 isRepairSession:(bool)arg9 category:(id)arg10 accessorySoftwareVersion:(id)arg11 setupClientBundleID:(id)arg12 retryCount:(unsigned long long)arg13 firstSettingTime:(unsigned long long)arg14 languageSettingTime:(unsigned long long)arg15;
- (bool)isRepairSession;
- (unsigned long long)languageSettingTime;
- (id)retryCount;
- (id)role;
- (id)setupClientBundleID;
- (unsigned long long)setupEndTime;
- (id)setupSessionError;
- (id)setupSessionIdentifier;
- (unsigned long long)setupStartTime;

@end
