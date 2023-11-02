
@interface CSPowerLogger : NSObject {
    unsigned long long  _numSelfTriggersInInterval;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _selfTriggerSuppressionAudioSource;
    bool  _selfTriggerSuppressionIsPhoneCallConnected;
    unsigned long long  _selfTriggerSuppressionPlaybackRoute;
    double  _selfTriggerSuppressionStartTime;
}

@property (nonatomic) unsigned long long numSelfTriggersInInterval;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long selfTriggerSuppressionAudioSource;
@property (nonatomic) bool selfTriggerSuppressionIsPhoneCallConnected;
@property (nonatomic) unsigned long long selfTriggerSuppressionPlaybackRoute;
@property (nonatomic) double selfTriggerSuppressionStartTime;

+ (id)sharedPowerLogger;

- (void).cxx_destruct;
- (void)_borealisPowerlog:(id)arg1;
- (void)_configPowerlog:(id)arg1;
- (void)_emitSelfTriggerSuppressionToBiomeWithStsDuration:(double)arg1;
- (void)_updateConfigToPreferencesWithLanguage:(id)arg1 withModelVersion:(id)arg2;
- (id)init;
- (unsigned long long)numSelfTriggersInInterval;
- (void)powerLogSecondPassWithResult:(unsigned long long)arg1 withSecondPassScore:(float)arg2 withPhId:(unsigned long long)arg3;
- (void)powerLogSelfTriggerSuppressionDetectedWithSpeakerType:(unsigned long long)arg1 withAudioSource:(unsigned long long)arg2 atTime:(double)arg3 isPhoneCall:(bool)arg4;
- (void)powerLogSelfTriggerSuppressionStartWithSpeakerType:(unsigned long long)arg1 withAudioSource:(unsigned long long)arg2 atTime:(double)arg3 isPhoneCall:(bool)arg4;
- (void)powerLogSelfTriggerSuppressionStopAtTime:(double)arg1;
- (void)powerLogSiriConfigWithVoiceTriggerEnabled:(bool)arg1 withLanguage:(id)arg2 withModelVersion:(id)arg3;
- (void)powerLogVoiceTriggerStart;
- (void)powerLogVoiceTriggerStop;
- (void)powerWithNumFalseWakeup:(unsigned long long)arg1 withDuration:(double)arg2 withPhraseDict:(id)arg3;
- (id)queue;
- (unsigned long long)selfTriggerSuppressionAudioSource;
- (bool)selfTriggerSuppressionIsPhoneCallConnected;
- (unsigned long long)selfTriggerSuppressionPlaybackRoute;
- (double)selfTriggerSuppressionStartTime;
- (void)setNumSelfTriggersInInterval:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setSelfTriggerSuppressionAudioSource:(unsigned long long)arg1;
- (void)setSelfTriggerSuppressionIsPhoneCallConnected:(bool)arg1;
- (void)setSelfTriggerSuppressionPlaybackRoute:(unsigned long long)arg1;
- (void)setSelfTriggerSuppressionStartTime:(double)arg1;

@end
