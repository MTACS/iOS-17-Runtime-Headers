
@interface PBUIWallpaperWindowSceneTwoCurveTransitionContext : UIApplicationSceneTransitionContext

@property (nonatomic, copy) BSAnimationSettings *inAnimationSettings;
@property (nonatomic, copy) BSAnimationSettings *outAnimationSettings;

- (id)inAnimationSettings;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)outAnimationSettings;
- (void)setInAnimationSettings:(id)arg1;
- (void)setOutAnimationSettings:(id)arg1;

@end
