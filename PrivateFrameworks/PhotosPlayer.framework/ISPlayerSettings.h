
@interface ISPlayerSettings : ISSettings {
    bool  _allowFrameBlending;
    bool  _allowVideoPreRoll;
    bool  _audioEnabled;
    bool  _crossfadeEnabled;
    bool  _easingEnabled;
    double  _forceScrubMaximumInteractiveRate;
    double  _forceScrubMinRateChange;
    double  _forceScrubMinimumRate;
    double  _forceScrubRewindFactor;
    bool  _longExposureVitality;
    bool  _loopingEnabled;
    bool  _playDuringHint;
    bool  _playIsSticky;
    bool  _prerollBeforePlaying;
    bool  _scaleDuringPlayback;
    bool  _showStateOverlay;
    long long  _startBehavior;
    bool  _useDedicatedQueues;
    double  _vitalityEaseDuration;
    float  _vitalityEaseMinRate;
}

@property (nonatomic) bool allowFrameBlending;
@property (nonatomic) bool allowVideoPreRoll;
@property (nonatomic) bool audioEnabled;
@property (nonatomic) bool crossfadeEnabled;
@property (nonatomic) bool easingEnabled;
@property (nonatomic) double forceScrubMaximumInteractiveRate;
@property (nonatomic) double forceScrubMinRateChange;
@property (nonatomic) double forceScrubMinimumRate;
@property (nonatomic) double forceScrubRewindFactor;
@property (nonatomic) bool longExposureVitality;
@property (nonatomic) bool loopingEnabled;
@property (nonatomic) bool playDuringHint;
@property (nonatomic) bool playIsSticky;
@property (nonatomic) bool prerollBeforePlaying;
@property (nonatomic) bool scaleDuringPlayback;
@property (nonatomic) bool showStateOverlay;
@property (nonatomic) long long startBehavior;
@property (nonatomic) bool useDedicatedQueues;
@property (nonatomic) double vitalityEaseDuration;
@property (nonatomic) float vitalityEaseMinRate;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)allowFrameBlending;
- (bool)allowVideoPreRoll;
- (bool)audioEnabled;
- (bool)crossfadeEnabled;
- (bool)easingEnabled;
- (double)forceScrubMaximumInteractiveRate;
- (double)forceScrubMinRateChange;
- (double)forceScrubMinimumRate;
- (double)forceScrubRewindFactor;
- (bool)longExposureVitality;
- (bool)loopingEnabled;
- (bool)playDuringHint;
- (bool)playIsSticky;
- (bool)prerollBeforePlaying;
- (bool)scaleDuringPlayback;
- (void)setAllowFrameBlending:(bool)arg1;
- (void)setAllowVideoPreRoll:(bool)arg1;
- (void)setAudioEnabled:(bool)arg1;
- (void)setCrossfadeEnabled:(bool)arg1;
- (void)setDefaultValues;
- (void)setEasingEnabled:(bool)arg1;
- (void)setForceScrubMaximumInteractiveRate:(double)arg1;
- (void)setForceScrubMinRateChange:(double)arg1;
- (void)setForceScrubMinimumRate:(double)arg1;
- (void)setForceScrubRewindFactor:(double)arg1;
- (void)setLongExposureVitality:(bool)arg1;
- (void)setLoopingEnabled:(bool)arg1;
- (void)setPlayDuringHint:(bool)arg1;
- (void)setPlayIsSticky:(bool)arg1;
- (void)setPrerollBeforePlaying:(bool)arg1;
- (void)setScaleDuringPlayback:(bool)arg1;
- (void)setShowStateOverlay:(bool)arg1;
- (void)setStartBehavior:(long long)arg1;
- (void)setUseDedicatedQueues:(bool)arg1;
- (void)setVitalityEaseDuration:(double)arg1;
- (void)setVitalityEaseMinRate:(float)arg1;
- (bool)showStateOverlay;
- (long long)startBehavior;
- (bool)useDedicatedQueues;
- (double)vitalityEaseDuration;
- (float)vitalityEaseMinRate;

@end
