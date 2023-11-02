
@interface UIScenePresentationBinder : NSObject <BSDescriptionProviding, BSInvalidatable, FBSceneLayerManagerObserver, FBSceneObserver> {
    unsigned long long  _appearanceStyle;
    <UIScenePresentationBinderDelegate> * _delegate;
    struct { 
        unsigned int delegateShouldPresentWithNoSceneLayers : 1; 
        unsigned int delegateDidStartPresentingScene : 1; 
        unsigned int delegateDidStopPresentingScene : 1; 
    }  _delegateFlags;
    NSString * _identifier;
    bool  _invalidated;
    NSMutableDictionary * _mapSceneIDToPresenter;
    long long  _priority;
    UIView * _rootView;
    NSMutableSet * _scenes;
    FBSSceneSettingsDiffInspector * _settingsDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIScenePresentationBinderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *scenes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activatePresenter:(id)arg1 scene:(id)arg2 reason:(id)arg3;
- (void)_deactivatePresenter:(id)arg1 scene:(id)arg2 reason:(id)arg3;
- (void)_delegateDidStartPresentingScene:(id)arg1;
- (void)_delegateDidStopPresentingScene:(id)arg1;
- (bool)_delegateShouldPresentSceneOnlyWhenLayersExist;
- (void)_evaluateSceneForHosting:(id)arg1 forReason:(id)arg2;
- (void)_noteDidStopPresentingScene:(id)arg1;
- (void)_noteSceneChangedLevel:(id)arg1;
- (void)_noteSceneMovedToBackground:(id)arg1;
- (void)_noteSceneMovedToForeground:(id)arg1;
- (void)_noteWillStartPresentingScene:(id)arg1;
- (void)_positionPresentationViewInRootViewOrderedCorrectly:(id)arg1;
- (void)_removeScene:(id)arg1 forReason:(id)arg2;
- (id)_rootView;
- (void)addScene:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithIdentifier:(id)arg1 priority:(long long)arg2 rootView:(id)arg3 appearanceStyle:(unsigned long long)arg4;
- (void)invalidate;
- (void)removeScene:(id)arg1;
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
- (void)sceneDidInvalidate:(id)arg1;
- (void)sceneLayerManagerDidStartTrackingLayers:(id)arg1;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)arg1;
- (id)scenes;
- (void)setDelegate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
