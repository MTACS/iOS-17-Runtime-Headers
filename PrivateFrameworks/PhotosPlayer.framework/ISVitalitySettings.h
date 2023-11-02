
@interface ISVitalitySettings : ISSettings <ISVitalitySettings> {
    ISVitalitySpecificSettings * _activityViewSettings;
    ISVitalitySpecificSettings * _oneUpSettings;
    ISVitalitySpecificSettings * _orbPreviewSettings;
    ISVitalitySpecificSettings * _shareViewSettings;
    bool  _shouldPreroll;
    bool  _useLegacyBehavior;
    float  _vitalityTransitionScoreMinimumValueForPlayback;
}

@property (nonatomic, retain) ISVitalitySpecificSettings *activityViewSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ISVitalitySpecificSettings *oneUpSettings;
@property (nonatomic, retain) ISVitalitySpecificSettings *orbPreviewSettings;
@property (nonatomic, retain) ISVitalitySpecificSettings *shareViewSettings;
@property (nonatomic) bool shouldPreroll;
@property (readonly) Class superclass;
@property (nonatomic) bool useLegacyBehavior;
@property (nonatomic) float vitalityTransitionScoreMinimumValueForPlayback;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_defaultSettings;
- (id)activityViewSettings;
- (long long)behavior;
- (double)endTimeOffset;
- (double)maxVitalityDelay;
- (double)maximumDelayBeforePlayback;
- (double)minimumPhotoTransitionDuration;
- (double)minimumVisibilityFactor;
- (id)oneUpSettings;
- (id)orbPreviewSettings;
- (double)playbackRate;
- (double)postDuration;
- (double)preDuration;
- (void)setActivityViewSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setOneUpSettings:(id)arg1;
- (void)setOrbPreviewSettings:(id)arg1;
- (void)setShareViewSettings:(id)arg1;
- (void)setShouldPreroll:(bool)arg1;
- (void)setUseLegacyBehavior:(bool)arg1;
- (void)setVitalityTransitionScoreMinimumValueForPlayback:(float)arg1;
- (id)shareViewSettings;
- (bool)shouldPreroll;
- (bool)useLegacyBehavior;
- (float)vitalityTransitionScoreMinimumValueForPlayback;

@end
