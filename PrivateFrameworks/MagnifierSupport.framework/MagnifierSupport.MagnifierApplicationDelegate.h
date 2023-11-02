
@interface MagnifierSupport.MagnifierApplicationDelegate : UIResponder <UIApplicationDelegate> {
    void _commandManager;
    void _stillImageStore;
}

@property (nonatomic, readonly) UIResponder *nextResponder;

- (void).cxx_destruct;
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;
- (bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)init;
- (id)nextResponder;

@end
