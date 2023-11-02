
@interface TSAppDelegate : UIResponder <UIApplicationDelegate> {
    void $__lazy_storage_$_commandCenter;
    void $__lazy_storage_$_container;
    void $__lazy_storage_$_containerManager;
    void $__lazy_storage_$_menuManager;
    void $__lazy_storage_$_resolver;
    void $__lazy_storage_$_tracker;
    void backgroundFetchSignal;
    void remoteNotificationSignal;
    void window;
}

@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(id /* block */)arg3;
- (void)application:(id)arg1 handleIntent:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(id /* block */)arg2;
- (bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)bootstrapWithApplication:(id)arg1;
- (void)buildMenuWithBuilder:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)createBridgedAppResolver;
- (id)createCarPlaySceneContainer;
- (id)createSceneContainer;
- (void)didCommitFirstFrame;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (void)registerAudioAppIntentsDependencies;
- (void)setWindow:(id)arg1;
- (void)validateCommand:(id)arg1;
- (id)window;

@end
