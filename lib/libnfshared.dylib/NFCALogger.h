
@interface NFCALogger : NSObject {
    NSUserDefaults * _userDefault;
}

+ (unsigned int)getBatteryPercent;
+ (id)sharedCALogger;

- (void).cxx_destruct;
- (bool)_incrementMiddlewareExceptionCountWithReset:(bool)arg1;
- (id)generateDailyUUIDForCA;
- (id)generateUUID;
- (id)getCALoggerUserDefaults;
- (void)getCAUniversityCode:(id)arg1 universityCodes:(unsigned int*)arg2;
- (unsigned int)getDurationFrom:(unsigned long long)arg1;
- (unsigned int)getHardwareTypeForCA:(unsigned int)arg1;
- (unsigned long long)getMiddlewareExceptionCount;
- (unsigned long long)getTimestamp;
- (id)init;
- (void)postCAEventFor:(id)arg1 eventInput:(id)arg2;
- (void)removeRestrictedMode;
- (void)resetCALoadStackExceptionCount;
- (bool)restrictedMode;
- (void)setRestrictedMode:(bool)arg1;

@end
