
@interface HMDAccessoryActivityTypeHumiditySensorLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _accessoryUUIDString;
    NSString * _bundleId;
    NSString * _characteristicUUIDString;
    NSString * _characteristicValue;
    NSString * _homePresence;
    NSString * _regionRange;
    NSString * _serviceUUIDString;
    NSString * _subscriptionEventTypeString;
    NSString * _timeStamp;
    NSString * _triggerSource;
    NSString * _userUUID;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSString *accessoryUUIDString;
@property (nonatomic, readonly, copy) NSString *bundleId;
@property (nonatomic, readonly, copy) NSString *characteristicUUIDString;
@property (nonatomic, readonly, copy) NSString *characteristicValue;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *homePresence;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly, copy) NSString *regionRange;
@property (nonatomic, readonly, copy) NSString *serviceUUIDString;
@property (nonatomic, readonly, copy) NSString *subscriptionEventTypeString;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *timeStamp;
@property (nonatomic, readonly, copy) NSString *triggerSource;
@property (nonatomic, readonly, copy) NSString *userUUID;

- (void).cxx_destruct;
- (id)accessoryUUIDString;
- (id)bundleId;
- (id)characteristicUUIDString;
- (id)characteristicValue;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)homePresence;
- (id)initWithCharacteristicValue:(id)arg1 accessoryUUIDString:(id)arg2 serviceUUIDString:(id)arg3 characteristicUUIDString:(id)arg4 timeStamp:(id)arg5 regionRange:(id)arg6 homeUUID:(id)arg7 homePresence:(id)arg8 subscriptionEventTypeString:(id)arg9 triggerSource:(id)arg10 bundleId:(id)arg11 userUUID:(id)arg12;
- (id)regionRange;
- (id)serviceUUIDString;
- (id)subscriptionEventTypeString;
- (id)timeStamp;
- (id)triggerSource;
- (id)userUUID;

@end
