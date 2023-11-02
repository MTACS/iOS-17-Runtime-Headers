
@interface DNDSDailyHeartbeatMetricsRecord : DNDSHeartbeatMetricsRecord {
    NSNumber * _dayOfWeek;
}

@property (nonatomic, readonly, copy) NSNumber *dayOfWeek;

+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithEnabled:(bool)arg1 manuallyEnabled:(bool)arg2 numberOfSessions:(id)arg3 numberOfManualSessions:(id)arg4 enabledFromControlCenterPhone:(bool)arg5 enabledFromControlCenterWatch:(bool)arg6 enabledForOneHour:(bool)arg7 enabledUntilEvening:(bool)arg8 enabledUntilMorning:(bool)arg9 enabledAtLocation:(bool)arg10 enabledDuringEvent:(bool)arg11 enabledDrivingMode:(bool)arg12 enabledSleepMode:(bool)arg13 dayOfWeek:(id)arg14;
- (id)_initWithRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dayOfWeek;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
