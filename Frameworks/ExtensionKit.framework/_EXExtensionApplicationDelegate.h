
@interface _EXExtensionApplicationDelegate : NSObject <UIApplicationDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;
- (bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)applicationDidFinishLaunching:(id)arg1;

@end
