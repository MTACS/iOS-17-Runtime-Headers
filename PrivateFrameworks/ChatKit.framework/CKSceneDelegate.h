
@interface CKSceneDelegate : NSObject <UIWindowSceneDelegate> {
    CKConversation * _conversation;
    UIWindowScene * _scene;
    CKMacToolbarController * _toolbarController;
    UIWindow * _window;
}

@property (nonatomic, readonly) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIWindowScene *scene;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKMacToolbarController *toolbarController;
@property (nonatomic, retain) UIWindow *window;

+ (Class)containerClassForType:(long long)arg1;
+ (id)stateFromUserInfoDictionary:(id)arg1;
+ (id)userInfoDictionaryForState:(id)arg1;

- (void).cxx_destruct;
- (void)_scene:(id)arg1 openItemProviders:(id)arg2;
- (void)_setFrameNameForWindowIfNeeded;
- (id)canActivatePredicate;
- (id)conversation;
- (id)init;
- (void)installDebugHandlerForScene:(id)arg1;
- (id)predicateMatchingConversation:(id)arg1;
- (id)prefersToActivatePredicate;
- (id)scene;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)setToolbarController:(id)arg1;
- (void)setWindow:(id)arg1;
- (void)showDebugMenu;
- (id)stateRestorationActivityForScene:(id)arg1;
- (id)toolbarController;
- (long long)type;
- (void)updateSceneActivationConditions;
- (void)updateSceneTitleForConversation:(id)arg1;
- (id)window;
- (void)windowSceneDidBecomeVisible:(id)arg1;

@end
