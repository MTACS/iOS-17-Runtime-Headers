
@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (float)adaptiveSiriVolumePermanentOffset;
- (int)adaptiveSiriVolumeRecentIntent;
- (void)disableAdaptiveSiriVolume:(id)arg1;
- (bool)enableAudioInjection:(bool)arg1;
- (bool)fileLoggingIsEnabled;
- (float)getAttendingTimeoutConfig;
- (id)getStartOfSpeechAudioLogFilePath;
- (bool)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (bool)isAdaptiveSiriVolumeTemporaryIntentValid;
- (bool)isAttentiveSiriAudioLoggingEnabled;
- (bool)isAttentiveSiriEnabled;
- (bool)isFlexibleFollowupsSupported;
- (bool)isFlexibleFollowupsUserDisabled;
- (bool)isGazeMandatory;
- (bool)isGazeSignalEnabled;
- (bool)isGazeSimlModelEnabled;
- (bool)isPHSSupported;
- (void)setAudioInjectionFilePath:(id)arg1;
- (void)setFileLoggingIsEnabled:(bool)arg1;
- (bool)smartSiriVolumeContextAwareEnabled;
- (id)trialBaseAssetDirectory;
- (bool)twoShotNotificationEnabled;
- (bool)useSiriActivationSPIForHomePod;
- (id)voiceTriggerAudioLogDirectory;
- (bool)voiceTriggerEnabled;

@end
