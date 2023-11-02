
@interface DNDSHeartbeatMetricsRecord : NSObject <DNDSHeartbeatMetricsProtocol> {
    bool  _enabled;
    bool  _enabledAtLocation;
    bool  _enabledDrivingMode;
    bool  _enabledDuringEvent;
    bool  _enabledForOneHour;
    bool  _enabledFromControlCenterPhone;
    bool  _enabledFromControlCenterWatch;
    bool  _enabledSleepMode;
    bool  _enabledUntilEvening;
    bool  _enabledUntilMorning;
    bool  _manuallyEnabled;
    NSNumber * _numberOfManualSessions;
    NSNumber * _numberOfSessions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) bool enabledAtLocation;
@property (nonatomic, readonly) bool enabledDrivingMode;
@property (nonatomic, readonly) bool enabledDuringEvent;
@property (nonatomic, readonly) bool enabledForOneHour;
@property (nonatomic, readonly) bool enabledFromControlCenterPhone;
@property (nonatomic, readonly) bool enabledFromControlCenterWatch;
@property (nonatomic, readonly) bool enabledSleepMode;
@property (nonatomic, readonly) bool enabledUntilEvening;
@property (nonatomic, readonly) bool enabledUntilMorning;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool manuallyEnabled;
@property (nonatomic, readonly, copy) NSNumber *numberOfManualSessions;
@property (nonatomic, readonly, copy) NSNumber *numberOfSessions;
@property (readonly) Class superclass;

+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithEnabled:(bool)arg1 manuallyEnabled:(bool)arg2 numberOfSessions:(id)arg3 numberOfManualSessions:(id)arg4 enabledFromControlCenterPhone:(bool)arg5 enabledFromControlCenterWatch:(bool)arg6 enabledForOneHour:(bool)arg7 enabledUntilEvening:(bool)arg8 enabledUntilMorning:(bool)arg9 enabledAtLocation:(bool)arg10 enabledDuringEvent:(bool)arg11 enabledDrivingMode:(bool)arg12 enabledSleepMode:(bool)arg13;
- (id)_initWithRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (bool)enabled;
- (bool)enabledAtLocation;
- (bool)enabledDrivingMode;
- (bool)enabledDuringEvent;
- (bool)enabledForOneHour;
- (bool)enabledFromControlCenterPhone;
- (bool)enabledFromControlCenterWatch;
- (bool)enabledSleepMode;
- (bool)enabledUntilEvening;
- (bool)enabledUntilMorning;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)manuallyEnabled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)numberOfManualSessions;
- (id)numberOfSessions;

@end
