
@interface FBSceneMonitor : NSObject <FBSceneLayerManagerObserver, FBSceneManagerInternalObserver, FBSceneObserver> {
    <FBSceneMonitorDelegate> * _delegate;
    FBSceneMonitorBehaviors * _delegateMonitorBehaviors;
    FBSSceneClientSettingsDiffInspector * _diffInspector;
    FBSceneMonitorBehaviors * _effectiveMonitorBehaviors;
    NSMutableSet * _externalSceneIDs;
    FBSceneMonitorBehaviors * _givenMonitorBehaviors;
    FBSSceneIdentityToken * _identityToken;
    bool  _invalidated;
    bool  _isSynchronizing;
    NSMutableSet * _pairedExternalSceneIDs;
    FBScene * _scene;
    NSString * _sceneID;
    FBSceneManager * _sceneManager;
    FBSMutableSceneSettings * _sceneSettings;
    bool  _updateExternalScenesAfterSync;
    bool  _updateSettingsAfterSync;
}

@property (nonatomic, copy) FBSceneMonitorBehaviors *behaviors;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSceneMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly, copy) NSString *sceneID;
@property (nonatomic, readonly) FBSSceneSettings *sceneSettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_effectiveBehaviors;
- (void)_evaluateEffectiveMonitorBehaviors;
- (id)_initWithSceneManager:(id)arg1 sceneID:(id)arg2;
- (void)_setEffectiveMonitorBehaviors:(id)arg1;
- (void)_updateAllSceneStateIgnoringDelegate;
- (void)_updateExternalScenes:(bool)arg1;
- (void)_updateScenePairingState:(bool)arg1;
- (void)_updateSceneSettings:(bool)arg1;
- (id)behaviors;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithScene:(id)arg1;
- (id)initWithSceneID:(id)arg1;
- (void)invalidate;
- (bool)isPairedWithExternalSceneID:(id)arg1;
- (id)scene;
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (id)sceneID;
- (void)sceneLayerManagerDidUpdateLayers:(id)arg1;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1;
- (id)sceneSettings;
- (void)setBehaviors:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
