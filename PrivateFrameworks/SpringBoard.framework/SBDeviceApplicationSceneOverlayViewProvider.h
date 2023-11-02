
@interface SBDeviceApplicationSceneOverlayViewProvider : NSObject {
    SBDeviceApplicationSceneOverlayBasicWrapperViewController * _basicWrapperViewController;
    bool  _contentWantsTraitsArbiterBasedRotation;
    <SBDeviceApplicationSceneOverlayViewProviderDelegate> * _delegate;
    SBIsolatedSceneOrientationFollowingWrapperViewController * _orientationWrapperViewController;
    bool  _prefersStatusBarHidden;
    SBDeviceApplicationSceneHandle * _sceneHandle;
}

@property (nonatomic, readonly) bool affectsStatusBarPresentation;
@property (nonatomic, readonly) bool contentWantsTraitsArbiterBasedRotation;
@property (nonatomic, readonly) <SBDeviceApplicationSceneOverlayViewProviderDelegate> *delegate;
@property (nonatomic, readonly) UIViewController<SBDeviceApplicationSceneOverlayViewController> *overlayViewController;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) bool prefersStatusBarHidden;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, retain) SBDeviceApplicationSceneHandle *sceneHandle;
@property (nonatomic, readonly) bool wantsResignActiveAssertion;

- (void).cxx_destruct;
- (void)_activateIfPossible;
- (void)_deactivateIfPossible;
- (id)_realOverlayViewController;
- (bool)affectsStatusBarPresentation;
- (long long)bestHomeAffordanceOrientationForOrientation:(long long)arg1;
- (void)containerDidUpdateTraitsParticipant:(id)arg1;
- (bool)contentWantsTraitsArbiterBasedRotation;
- (void)dealloc;
- (id)delegate;
- (void)hideContentWithAnimation:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithSceneHandle:(id)arg1 delegate:(id)arg2;
- (id)initialTraitsParticipantForOverlayContainer;
- (void)noteDisplayModeChange:(long long)arg1;
- (id)overlayViewController;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (long long)priority;
- (id)sceneHandle;
- (void)setSceneHandle:(id)arg1;
- (bool)shouldFollowSceneOrientation;
- (void)showContentWithAnimation:(bool)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)wantsResignActiveAssertion;

@end
