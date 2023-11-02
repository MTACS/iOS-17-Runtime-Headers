
@interface SBUIMainScreenAnimationController : SBUIWorkspaceAnimationController {
    <BSInvalidatable> * _bannerSuppressionAssertion;
    <BSInvalidatable> * _wallpaperRequiredAssertion;
}

@property (nonatomic, retain) <BSInvalidatable> *bannerSuppressionAssertion;
@property (nonatomic, readonly, copy) NSSet *fromApplicationSceneEntities;
@property (nonatomic, readonly) SBDeviceApplicationSceneEntity *fromApplicationSceneEntity;
@property (nonatomic, readonly, copy) NSSet *toApplicationSceneEntities;
@property (nonatomic, readonly) SBDeviceApplicationSceneEntity *toApplicationSceneEntity;
@property (nonatomic, readonly) SBWorkspaceTransitionRequest *transitionRequest;
@property (nonatomic, retain) <BSInvalidatable> *wallpaperRequiredAssertion;

- (void).cxx_destruct;
- (void)__startAnimation;
- (bool)__wantsInitialProgressStateChange;
- (void)_begin;
- (void)_cleanupAnimation;
- (void)_dismissBannerAnimated:(bool)arg1;
- (id)_getTransitionWindow;
- (id)_primaryAppOrAnyAppFromSet:(id)arg1;
- (bool)_shouldDismissBanner;
- (id)bannerSuppressionAssertion;
- (id)fromApplicationSceneEntity;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;
- (void)setBannerSuppressionAssertion:(id)arg1;
- (void)setWallpaperRequiredAssertion:(id)arg1;
- (id)toApplicationSceneEntity;
- (id)transitionRequest;
- (id)wallpaperRequiredAssertion;

@end
