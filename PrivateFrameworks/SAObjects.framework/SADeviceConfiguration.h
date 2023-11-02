
@interface SADeviceConfiguration : SABaseClientBoundCommand

@property (nonatomic) double audioSessionActivationDelay;
@property (nonatomic) double audioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
@property (nonatomic) bool hasAudioSessionActivationDelay;
@property (nonatomic) double initialInterstitialDelay;
@property (nonatomic) double initialInterstitialDelayForCarPlay;
@property (nonatomic) double initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking;
@property (nonatomic) double mediaPlaybackVolumeThresholdForAudioSessionActivationDelay;

+ (id)deviceConfiguration;
+ (id)deviceConfigurationWithDictionary:(id)arg1 context:(id)arg2;

- (double)audioSessionActivationDelay;
- (double)audioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)hasAudioSessionActivationDelay;
- (double)initialInterstitialDelay;
- (double)initialInterstitialDelayForCarPlay;
- (double)initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking;
- (double)mediaPlaybackVolumeThresholdForAudioSessionActivationDelay;
- (bool)requiresResponse;
- (void)setAudioSessionActivationDelay:(double)arg1;
- (void)setAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold:(double)arg1;
- (void)setHasAudioSessionActivationDelay:(bool)arg1;
- (void)setInitialInterstitialDelay:(double)arg1;
- (void)setInitialInterstitialDelayForCarPlay:(double)arg1;
- (void)setInitialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking:(double)arg1;
- (void)setMediaPlaybackVolumeThresholdForAudioSessionActivationDelay:(double)arg1;

@end
