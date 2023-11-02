
@protocol ISVitalitySettings <NSObject>

@required

- (long long)behavior;
- (double)endTimeOffset;
- (double)maxVitalityDelay;
- (double)maximumDelayBeforePlayback;
- (double)minimumPhotoTransitionDuration;
- (double)minimumVisibilityFactor;
- (double)playbackRate;
- (double)postDuration;
- (double)preDuration;

@end
