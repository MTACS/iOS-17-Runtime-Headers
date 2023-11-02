
@interface _UIExternalSceneLayerHostView : _UISceneLayerHostView <UIExternalScenePairingObserverDelegate> {
    UIExternalScenePairingObserver * _pairingObserver;
    FBScene * _parentScene;
    UIScenePresentationManager * _presentationManager;
    <UIScenePresenter> * _presenter;
    FBScene * _targetScene;
    NSString * _targetSceneID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FBScene *targetScene;

- (void).cxx_destruct;
- (void)_updateHostingState;
- (void)_updateTargetScene;
- (void)dealloc;
- (void)externalScenePairingObserver:(id)arg1 pairingsDidChange:(id)arg2;
- (id)initWithSceneLayer:(id)arg1 parentScene:(id)arg2;
- (void)setCurrentPresentationContext:(id)arg1;
- (id)targetScene;

@end
