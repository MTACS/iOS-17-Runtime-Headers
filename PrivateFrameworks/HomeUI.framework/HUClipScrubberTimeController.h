
@interface HUClipScrubberTimeController : NSObject {
    double  _maximumPosterFrameDuration;
    double  _minimumPosterFrameDuration;
    bool  _portraitMode;
    double  _timeScale;
    bool  _userControlled;
}

@property (nonatomic, readonly) double maximumGestureScale;
@property (nonatomic) double maximumPosterFrameDuration;
@property (nonatomic) double minimumPosterFrameDuration;
@property (nonatomic) bool portraitMode;
@property (nonatomic) double timeScale;
@property (nonatomic) bool userControlled;

- (double)_numberOfPosterFrameUnitsForEvent:(id)arg1 timeScale:(double)arg2;
- (double)clampGestureScale:(double)arg1;
- (void)dealloc;
- (void)expandTimelineToMaximumZoom;
- (id)init;
- (bool)isAtMinimumZoom;
- (double)maximumGestureScale;
- (double)maximumPosterFrameDuration;
- (double)minimumPosterFrameDuration;
- (double)numberOfPosterFrameUnitsForEvent:(id)arg1;
- (bool)portraitMode;
- (double)posterFrameWidth;
- (double)posterFrameWidthFromCameraLiveSource;
- (void)reloadEvents:(id)arg1;
- (void)setMaximumPosterFrameDuration:(double)arg1;
- (void)setMinimumPosterFrameDuration:(double)arg1;
- (void)setPortraitMode:(bool)arg1;
- (void)setTimeScale:(double)arg1;
- (void)setUserControlled:(bool)arg1;
- (void)shrinkTimelineToMinimumZoom;
- (double)timeScale;
- (double)timelineWidthForEvent:(id)arg1;
- (double)updateTimeScaleForGestureScale:(double)arg1;
- (void)updateTimeScaleIfNeeded;
- (bool)userControlled;

@end
