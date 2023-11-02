
@interface UVInjectedScene : NSObject <FBSceneDelegate, _UISceneSettingsDiffAction> {
    id /* block */  _actionHandler;
    bool  _invalidated;
    id /* block */  _invalidationHandler;
    bool  _maximized;
    struct CGSize { 
        double width; 
        double height; 
    }  _overrideMaximumSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _overrideSceneSize;
    UIWindowScene * _parentScene;
    FBScene * _scene;
    id /* block */  _sceneResizeHandler;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (nonatomic, copy) id /* block */ sceneResizeHandler;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sceneSize;
@property (readonly) Class superclass;

+ (id)_baseSceneSettings:(id)arg1 sceneIdentifier:(id)arg2 parentSettings:(id)arg3;
+ (id)_injectInProcessHandle:(id)arg1 error:(id*)arg2;
+ (id)injectInProcess:(int)arg1 error:(id*)arg2;
+ (id)injectInRunningTarget:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)_computeAndUpdateSceneSettings:(id*)arg1;
- (id)_computeSceneSettingsUsing:(id)arg1 error:(id*)arg2;
- (void)_handleActionsFromHostedScene:(id)arg1;
- (id)_initWithScene:(id)arg1;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (id)_prepareSceneSettingsForUpdate:(id)arg1;
- (void)_setParentScene:(id)arg1;
- (void)_updateSceneSettings:(id)arg1 transitionContext:(id)arg2;
- (id /* block */)actionHandler;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)scene;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidInvalidate:(id)arg1;
- (id)sceneIdentifier;
- (id /* block */)sceneResizeHandler;
- (struct CGSize { double x1; double x2; })sceneSize;
- (void)sendAction:(id)arg1;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (bool)setMaximizedWithParent:(id)arg1 error:(id*)arg2;
- (bool)setMinimizedWithParent:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 maximumSize:(struct CGSize { double x1; double x2; })arg3 error:(id*)arg4;
- (void)setSceneResizeHandler:(id /* block */)arg1;

@end
