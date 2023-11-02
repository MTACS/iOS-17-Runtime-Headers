
@interface UIExternalScenePairingObserver : NSObject <BSInvalidatable, FBSceneLayerManagerObserver, FBSceneManagerObserver, FBSceneObserver> {
    FBSSceneClientSettingsDiffInspector * _clientSettingsDiffInspector;
    <UIExternalScenePairingObserverDelegate> * _delegate;
    bool  _invalidated;
    NSMutableSet * _pairedExternalSceneIDs;
    FBScene * _scene;
    NSString * _sceneID;
    FBSSceneIdentityToken * _sceneIdentityToken;
    FBSceneManager * _sceneManager;
    NSMutableSet * _trackingExternalSceneIDs;
}

@property (setter=_setSceneManager:, nonatomic, retain) FBSceneManager *_sceneManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIExternalScenePairingObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithSceneManager:(id)arg1 scene:(id)arg2 delegate:(id)arg3;
- (id)_sceneManager;
- (void)_setSceneManager:(id)arg1;
- (void)_updateExternalScenes;
- (void)_updateScenePairingState;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithScene:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (bool)isPairedWithExternalSceneID:(id)arg1;
- (id)scene;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneLayerManagerDidUpdateLayers:(id)arg1;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
