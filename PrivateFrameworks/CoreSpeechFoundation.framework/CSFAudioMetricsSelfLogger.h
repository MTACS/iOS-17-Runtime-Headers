
@interface CSFAudioMetricsSelfLogger : NSObject

+ (id)sharedLogger;

- (int)_getMHBluetoothAudioDeviceCategoryFromString:(id)arg1;
- (id)_getPreprocessorCompletedMessageWithMetrics:(id)arg1;
- (id)_getRunPairs:(id)arg1;
- (id)_getSelfFanWithCSSiriFanInfo:(id)arg1;
- (int)_getSelfStopRecordingReasonWithADStopRecordingEvent:(unsigned short)arg1;
- (int)_getSpeechErrorTypeWithRecordingFailedReason:(long long)arg1;
- (id)init;
- (void)logCoreSpeechPreprocessorCompletedWithMHUUID:(id)arg1 withMetricsDictionary:(id)arg2;
- (void)logMHASRAudioConfigureStartedWithMHUUID:(id)arg1 withAudioCodecString:(id)arg2 withAudioSkippedNumSamples:(unsigned long long)arg3;
- (void)logMHASRAudioConfigureStartedWithMHUUID:(id)arg1 withAudioCodecString:(id)arg2 withAudioSkippedTimeInNs:(unsigned long long)arg3;
- (void)logMHApplicationPlaybackAttemptedWithMHUUID:(id)arg1 withAppBundleName:(id)arg2 withAppBundleVersion:(id)arg3;
- (void)logMHAssistantDaemonAudioBluetoothInfoWithMHUUID:(id)arg1 withWirelessSplitterSessionState:(int)arg2 withAudioDeviceCategory:(id)arg3;
- (void)logMHAssistantDaemonAudioConfigureContextWithMHUUID:(id)arg1 withConfigureStarted:(bool)arg2;
- (void)logMHAssistantDaemonAudioFetchRouteContextWithMHUUID:(id)arg1 withFetchRouteContextStarted:(bool)arg2;
- (void)logMHAssistantDaemonAudioInitContextWithMHUUID:(id)arg1 withInitStarted:(bool)arg2;
- (void)logMHAssistantDaemonAudioLateBufferDetectedWithMHUUID:(id)arg1 withBufferReceiptTimeInNs:(unsigned long long)arg2;
- (void)logMHAssistantDaemonAudioPrepareContextWithMHUUID:(id)arg1 withPrepareStarted:(bool)arg2;
- (void)logMHAssistantDaemonAudioPrewarmContextWithMHUUID:(id)arg1 withPrewarmStarted:(bool)arg2;
- (void)logMHAssistantDaemonAudioRecordingContextWithMHUUID:(id)arg1 withAudioRecordingStarted:(bool)arg2 withAudioInputRoute:(int)arg3 withAudioSource:(int)arg4 withAudioInterfaceVendorId:(id)arg5 withAudioInterfaceProductId:(id)arg6;
- (void)logMHAssistantDaemonAudioRecordingFailedWithMHUUID:(id)arg1 withReason:(long long)arg2 vendorId:(id)arg3 productId:(id)arg4;
- (void)logMHAssistantDaemonAudioRecordingFirstBufferWithMHUUID:(id)arg1 withStartEvent:(bool)arg2 withFirstBufferStartTimeOffsetNs:(unsigned long long)arg3 withFirstBufferReceiptTimeOffsetNs:(unsigned long long)arg4;
- (void)logMHAssistantDaemonAudioRecordingInterruptionContextWithMHUUID:(id)arg1 withStartEvent:(bool)arg2 withLinkID:(id)arg3 withAvAudioSessionInterruptorName:(id)arg4 withAVAudioSessionInterrupterType:(id)arg5;
- (void)logMHAssistantDaemonAudioRecordingInterruptionStartedTier1WithMHUUID:(id)arg1 withLinkID:(id)arg2 withActiveSessionDisplayIDs:(id)arg3;
- (void)logMHAssistantDaemonAudioRecordingLastBufferWithMHUUID:(id)arg1 withStartEvent:(bool)arg2 withLastBufferStartTimeOffsetNs:(unsigned long long)arg3 withLastBufferReceiptTimeOffsetNs:(unsigned long long)arg4;
- (void)logMHAssistantDaemonAudioRecordingMissedBufferDetectedWithMHUUID:(id)arg1;
- (void)logMHAssistantDaemonAudioSessionSetActivateContextWithMHUUID:(id)arg1 withSetActivateStarted:(bool)arg2;
- (void)logMHAssistantDaemonAudioSessionSetInactiveWithMHUUID:(id)arg1 withSetInactiveStarted:(bool)arg2;
- (void)logMHAssistantDaemonAudioStartRecordingContextWithMHUUID:(id)arg1 withStartRecordingContext:(bool)arg2 withFanInfoArray:(id)arg3 withActiveSessionDisplayIDs:(id)arg4;
- (void)logMHAssistantDaemonAudioStopRecordingContextWithMHUUID:(id)arg1 withStopRecordingStarted:(bool)arg2 withADStopRecordingEvent:(unsigned short)arg3;

@end
