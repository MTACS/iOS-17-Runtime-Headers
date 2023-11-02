
@interface _UIKeyboardLayerHostView : _UISceneLayerHostView <FBSceneObserver> {
    bool  _isPaired;
    FBSSceneIdentityToken * _keyboardPreferredHostIdentity;
    FBScene * _keyboardScene;
    <BSInvalidatable> * _keyboardSceneAvailabilityObserver;
    FBSSceneClientSettingsDiffInspector * _keyboardSceneClientSettingsDiffInspector;
    FBScene * _owningScene;
    <UIScenePresenter> * _presenter;
    id /* block */  _sceneLayerMatchingPredicate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithLayer:(id)arg1 owningScene:(id)arg2 keyboardMatchingPredicate:(id /* block */)arg3;
- (void)_setKeyboardScene:(id)arg1;
- (void)_updatePairingState;
- (void)dealloc;
- (id)initWithKeyboardLayer:(id)arg1 owningScene:(id)arg2;
- (id)initWithKeyboardProxyLayer:(id)arg1 owningScene:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)setCurrentPresentationContext:(id)arg1;

@end
