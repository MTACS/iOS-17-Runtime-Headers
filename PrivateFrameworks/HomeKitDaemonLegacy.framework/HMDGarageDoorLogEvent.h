
@interface HMDGarageDoorLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _accessoryUUID;
    NSString * _bundleId;
    NSString * _characteristicUUID;
    NSString * _doorStatus;
    NSString * _homePresence;
    NSString * _timeStamp;
    NSString * _triggerSource;
    NSString * _userUUID;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSString *accessoryUUID;
@property (nonatomic, readonly, copy) NSString *bundleId;
@property (nonatomic, readonly, copy) NSString *characteristicUUID;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *doorStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *homePresence;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *timeStamp;
@property (nonatomic, readonly, copy) NSString *triggerSource;
@property (nonatomic, readonly, copy) NSString *userUUID;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)bundleId;
- (id)characteristicUUID;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)doorStatus;
- (id)homePresence;
- (id)initWithGarageDoorStatus:(id)arg1 accessoryUUID:(id)arg2 characteristicUUID:(id)arg3 timeStamp:(id)arg4 homeUUID:(id)arg5 homePresence:(id)arg6 triggerSource:(id)arg7 bundleId:(id)arg8 userUUID:(id)arg9;
- (id)timeStamp;
- (id)triggerSource;
- (id)userUUID;

@end
