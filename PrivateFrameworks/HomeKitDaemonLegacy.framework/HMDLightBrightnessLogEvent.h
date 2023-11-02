
@interface HMDLightBrightnessLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _accessoryUUID;
    NSString * _brightness;
    NSString * _bundleId;
    NSString * _characteristicUUID;
    NSString * _eventOrder;
    NSString * _homePresence;
    NSString * _luxLevel;
    NSString * _regionRange;
    NSString * _sunRiseTime;
    NSString * _sunSetTime;
    NSString * _timeStamp;
    NSString * _triggerSource;
    NSString * _userUUID;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSString *accessoryUUID;
@property (nonatomic, readonly, copy) NSString *brightness;
@property (nonatomic, readonly, copy) NSString *bundleId;
@property (nonatomic, readonly, copy) NSString *characteristicUUID;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *eventOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *homePresence;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly, copy) NSString *luxLevel;
@property (nonatomic, readonly, copy) NSString *regionRange;
@property (nonatomic, readonly, copy) NSString *sunRiseTime;
@property (nonatomic, readonly, copy) NSString *sunSetTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *timeStamp;
@property (nonatomic, readonly, copy) NSString *triggerSource;
@property (nonatomic, readonly, copy) NSString *userUUID;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)brightness;
- (id)bundleId;
- (id)characteristicUUID;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)eventOrder;
- (id)homePresence;
- (id)initWithBrightness:(id)arg1 accessoryUUID:(id)arg2 characteristicUUID:(id)arg3 timeStamp:(id)arg4 homeUUID:(id)arg5 eventOrder:(id)arg6 sunRiseTime:(id)arg7 sunSetTime:(id)arg8 homePresence:(id)arg9 regionRange:(id)arg10 luxLevel:(id)arg11 triggerSource:(id)arg12 bundleId:(id)arg13 userUUID:(id)arg14;
- (id)luxLevel;
- (id)regionRange;
- (id)sunRiseTime;
- (id)sunSetTime;
- (id)timeStamp;
- (id)triggerSource;
- (id)userUUID;

@end
