
@interface _UISceneKeyboardProxyLayerForwardingPresentationScene : NSObject <FBSceneObserver, _UISceneKeyboardProxyLayerForwardingPresentationEnvironment, _UIScenePresentationViewObserver> {
    FBSSceneIdentityToken * _keyboardOwnerIdentityToken;
    FBSSceneClientSettingsDiffInspector * _layersChangedClientSettingsDiffInspector;
    NSHashTable * _observers;
    _UIScenePresenter * _prioritizedPresenter;
    FBScene * _scene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSSceneIdentityToken *keyboardOwnerIdentityToken;
@property (readonly) Class superclass;

+ (bool)forwardsLayersToRootSystemShell;

- (void).cxx_destruct;
- (void)_sendDelegateDidMoveToWindow:(id)arg1;
- (void)_updateKeyboardLayersForScene:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)keyboardLayers;
- (id)keyboardOwnerIdentityToken;
- (void)presentationView:(id)arg1 didMoveToWindow:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidInvalidate:(id)arg1;

@end
