
@interface SBLiquidDetectionUISceneController : SBSystemUISceneController <SBFLiquidDetectionBlockProvider> {
    <BSInvalidatable> * _disableIdleTimer;
    SBFDeviceLockOutController * _lockOutController;
    NSHashTable * _observers;
    bool  _presenting;
    <BSInvalidatable> * _suppressSystemAperture;
    <BSInvalidatable> * _suppressSystemGestures;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_setupInfo;

- (void).cxx_destruct;
- (void)addLiquidDetectionObserver:(id)arg1;
- (void)dealloc;
- (id)initWithSceneWorkspaceIdentifier:(id)arg1 clientProcessIdentity:(id)arg2 sceneVendingPolicy:(long long)arg3 traitsRole:(id)arg4 jobLabel:(id)arg5 level:(double)arg6;
- (bool)isLiquidDetectionBlocked;
- (void)removeLiquidDetectionObserver:(id)arg1;
- (void)scenePresenter:(id)arg1 didPresentScene:(id)arg2;
- (void)scenePresenter:(id)arg1 willDismissScene:(id)arg2;
- (void)setDefaultPresenter:(id)arg1;

@end
