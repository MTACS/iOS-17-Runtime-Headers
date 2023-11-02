
@interface PXAssetsSceneSettings : PXSettings {
    bool  _allowAnimatedImagePlayback;
    bool  _allowLivePhotoPlayback;
    bool  _allowLoopingVideoPlayback;
    bool  _allowVideoPlayback;
    bool  _animateContentByDefault;
    bool  _enableImagePreheating;
    bool  _playLivePhotosAsLoops;
    bool  _showBordersOnAnimatedContent;
    double  _transitionDuration;
}

@property (nonatomic) bool allowAnimatedImagePlayback;
@property (nonatomic) bool allowLivePhotoPlayback;
@property (nonatomic) bool allowLoopingVideoPlayback;
@property (nonatomic) bool allowVideoPlayback;
@property (nonatomic) bool animateContentByDefault;
@property (nonatomic) bool enableImagePreheating;
@property (nonatomic) bool playLivePhotosAsLoops;
@property (nonatomic) bool showBordersOnAnimatedContent;
@property (nonatomic) double transitionDuration;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)allowAnimatedImagePlayback;
- (bool)allowLivePhotoPlayback;
- (bool)allowLoopingVideoPlayback;
- (bool)allowVideoPlayback;
- (bool)animateContentByDefault;
- (bool)enableImagePreheating;
- (id)parentSettings;
- (bool)playLivePhotosAsLoops;
- (void)setAllowAnimatedImagePlayback:(bool)arg1;
- (void)setAllowLivePhotoPlayback:(bool)arg1;
- (void)setAllowLoopingVideoPlayback:(bool)arg1;
- (void)setAllowVideoPlayback:(bool)arg1;
- (void)setAnimateContentByDefault:(bool)arg1;
- (void)setDefaultValues;
- (void)setEnableImagePreheating:(bool)arg1;
- (void)setPlayLivePhotosAsLoops:(bool)arg1;
- (void)setShowBordersOnAnimatedContent:(bool)arg1;
- (void)setTransitionDuration:(double)arg1;
- (bool)showBordersOnAnimatedContent;
- (double)transitionDuration;

@end
