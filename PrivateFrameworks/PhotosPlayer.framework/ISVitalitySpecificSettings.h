
@interface ISVitalitySpecificSettings : ISSettings <ISVitalitySettings> {
    long long  _behavior;
    double  _endTimeOffset;
    double  _maxVitalityDelay;
    double  _maximumDelayBeforePlayback;
    double  _minimumPhotoTransitionDuration;
    double  _minimumVisibilityFactor;
    double  _playbackRate;
    double  _postDuration;
    double  _preDuration;
    double  _startSeekTolerance;
}

@property (nonatomic) long long behavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double endTimeOffset;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxVitalityDelay;
@property (nonatomic) double maximumDelayBeforePlayback;
@property (nonatomic) double minimumPhotoTransitionDuration;
@property (nonatomic) double minimumVisibilityFactor;
@property (nonatomic) double playbackRate;
@property (nonatomic) double postDuration;
@property (nonatomic) double preDuration;
@property (nonatomic) double startSeekTolerance;
@property (readonly) Class superclass;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (long long)behavior;
- (double)endTimeOffset;
- (double)maxVitalityDelay;
- (double)maximumDelayBeforePlayback;
- (double)minimumPhotoTransitionDuration;
- (double)minimumVisibilityFactor;
- (double)playbackRate;
- (double)postDuration;
- (double)preDuration;
- (void)setBehavior:(long long)arg1;
- (void)setDefaultValues;
- (void)setEndTimeOffset:(double)arg1;
- (void)setMaxVitalityDelay:(double)arg1;
- (void)setMaximumDelayBeforePlayback:(double)arg1;
- (void)setMinimumPhotoTransitionDuration:(double)arg1;
- (void)setMinimumVisibilityFactor:(double)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void)setPostDuration:(double)arg1;
- (void)setPreDuration:(double)arg1;
- (void)setStartSeekTolerance:(double)arg1;
- (double)startSeekTolerance;

@end
