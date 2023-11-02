
@interface SBAmbientTelemetryEmitter : NSObject {
    PRSPosterConfiguration * _activePosterConfiguration;
    NSDate * _ambientActiveFaceTimestamp;
    AMAmbientDefaults * _ambientDefaults;
    NSTimer * _ambientEnabledDailyTimer;
    NSDate * _ambientPresentationTimestamp;
    NSUUID * _sessionId;
}

+ (long long)_ambientActiveFaceTypeForConfiguration:(id)arg1;
+ (long long)_ambientClockFaceDescriptorForConfiguration:(id)arg1;
+ (void)_ambientCoreAnalyticsActiveFaceDescription:(id)arg1 duration:(double)arg2 sessionIdString:(id)arg3;
+ (void)_ambientCoreAnalyticsAmbientEnabled:(bool)arg1 userTriggered:(bool)arg2;
+ (void)_ambientCoreAnalyticsConfigurationUpdateForEventType:(long long)arg1 activeFace:(id)arg2 metadata:(id)arg3 sessionIdString:(id)arg4 timeOfDay:(long long)arg5;
+ (void)_ambientCoreAnalyticsSystemEventForBumpIgnored:(bool)arg1 sessionIdString:(id)arg2;
+ (void)_ambientCoreAnalyticsSystemEventForSleepSuppressionActive:(bool)arg1 sessionIdString:(id)arg2;
+ (void)_ambientCoreAnalyticsTotalAmbientDuration:(double)arg1 sessionIdString:(id)arg2;
+ (void)_ambientCoreAnalyticsUserSettingsForAmbientDefaults:(id)arg1 userTriggered:(bool)arg2;
+ (long long)_ambientPhotosFaceDescriptorForConfiguration:(id)arg1;
+ (void)_ambientPowerLogActiveFaceUpdateWithFaceType:(unsigned long long)arg1 activeFaceDescriptor:(unsigned long long)arg2;
+ (void)_ambientPowerLogAmbientModeEnabled:(bool)arg1;
+ (void)_ambientPowerLogAmbientPresented:(bool)arg1 displayStyle:(long long)arg2;
+ (void)_ambientPowerLogLifetimePresentationCounterUpdate:(unsigned long long)arg1;
+ (void)_ambientPowerLogWithEventName:(id)arg1 dictionary:(id)arg2;
+ (long long)_ambientTimeOfDay;
+ (id)_faceDescriptionFromConfiguration:(id)arg1;

- (void).cxx_destruct;
- (void)_logAmbientEnabled:(bool)arg1 userTriggered:(bool)arg2;
- (void)_logAmbientUserSettingsUserTriggered:(bool)arg1;
- (void)_setupAmbientEnabledDailyTimerForLogging;
- (void)_setupAmbientEnabledLogging;
- (void)_setupUserSettingUpdateLogging;
- (void)_updateActiveFaceDurationForPreviousConfiguration:(id)arg1 currentConfiguration:(id)arg2 sessionIdString:(id)arg3;
- (void)_updateSessionIdForAmbientPresented:(bool)arg1;
- (void)_updateTotalDurationLoggingForAmbientPresented:(bool)arg1 sessionIdString:(id)arg2;
- (void)dealloc;
- (id)initWithAmbientDefaults:(id)arg1;
- (void)logTelemetryForAmbientConfigurationUpdate:(id)arg1 metadata:(id)arg2;
- (void)logTelemetryForAmbientPresented:(bool)arg1 displayStyle:(long long)arg2;
- (void)logTelemetryForBumpEventIgnored:(bool)arg1;
- (void)logTelemetryForSleepSuppressionActive:(bool)arg1;

@end
