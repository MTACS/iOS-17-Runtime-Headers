
@interface BRCCoreAnalyticsReporter : NSObject

+ (id)dictionaryForErrorsByZone:(id)arg1 wantPrivateZone:(bool)arg2;
+ (void)newAppTelemetryMetricEvent:(id)arg1;
+ (void)sendTelemetryEvent:(id)arg1 withReport:(id)arg2;
+ (id)telemetryDictionaryToUploadForError:(id)arg1 errorMessage:(id)arg2 count:(id)arg3 syncType:(id)arg4 totalItemsCount:(id)arg5 zoneType:(id)arg6 zoneCountsOnly:(bool)arg7 isFolderSharingEnabled:(bool)arg8 dsid:(id)arg9 rampNumber:(id)arg10 lastFailureDate:(id)arg11 pcsState:(id)arg12;
+ (bool)uploadLoadErrorsAsIndividualEvents:(id)arg1 syncType:(id)arg2 totalItemsCount:(unsigned long long)arg3 zoneCountsOnly:(bool)arg4 isFolderSharingEnabled:(bool)arg5 dsid:(id)arg6 rampNumber:(id)arg7;
+ (void)uploadMetricsReport:(id)arg1;
+ (bool)uploadSyncErrorsAsIndividualEvents:(id)arg1 syncType:(id)arg2 totalItemsCount:(unsigned long long)arg3 zoneType:(id)arg4 zoneCountsOnly:(bool)arg5 isFolderSharingEnabled:(bool)arg6 dsid:(id)arg7 rampNumber:(id)arg8;

@end
