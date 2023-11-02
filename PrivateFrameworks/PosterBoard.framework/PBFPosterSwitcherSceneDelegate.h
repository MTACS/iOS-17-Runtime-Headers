
@interface PBFPosterSwitcherSceneDelegate : UIResponder <UIWindowSceneDelegate, _UISceneBSActionHandler, _UISceneComponentProviding, _UISceneSettingsDiffAction> {
    void $__lazy_storage_$_posterExtensionTestingViewController;
    void $__lazy_storage_$_sceneSettingsDiffInspector;
    void _scene;
    void extensionTestingViewController;
    void sceneDelegateState;
    void switcherInUseAssertion;
    void window;
}

@property (nonatomic, retain) UIScene *_scene;
@property (nonatomic, retain) PBFExtensionTestingViewController *posterExtensionTestingViewController;
@property (nonatomic, readonly) PBFPosterRackCollectionViewController *posterRackViewController;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (id)_actionHandlersForScene:(id)arg1;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (void)dataStoreDidTearDown;
- (void)debugGestureWasTriggered;
- (id)init;
- (id)initWithScene:(id)arg1;
- (id)posterExtensionTestingViewController;
- (id)posterRackViewController;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)setPosterExtensionTestingViewController:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)window;
- (void)windowDidAttachContext:(id)arg1;
- (void)windowDidDetachContext:(id)arg1;

@end
