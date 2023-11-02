
@interface AXUIDaemonApplicationDelegate : NSObject <UIApplicationDelegate> {
    FBSOrientationObserver * _orientationObserver;
    UIWindow * window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

+ (id)debugFeatureName;
+ (id)featureEnabledStatusDidChangeNotification;
+ (bool)isFeatureEnabled;
+ (id)loggingFacility;

- (void).cxx_destruct;
- (void)_didUpdateToOrientation:(long long)arg1 duration:(double)arg2;
- (void)_enabledPreferenceDidChange:(id)arg1;
- (void)_exitIfNotEnabled;
- (void)_systemAppDidBecomeReady;
- (bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)dealloc;
- (void)didFinishLaunching;
- (void)didUpdateOrientation;
- (id)init;
- (void)setKeepAlive:(bool)arg1;
- (void)setWindow:(id)arg1;
- (void)willTerminate;
- (id)window;

@end
