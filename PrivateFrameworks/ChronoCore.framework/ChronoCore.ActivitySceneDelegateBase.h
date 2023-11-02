
@interface ChronoCore.ActivitySceneDelegateBase : NSObject <UIWindowSceneDelegate> {
    void _hasUI;
    void _isForeground;
    void _validated;
    void _viewModels;
    void activityService;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  clientLogger;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  descriptor;
    void descriptorService;
    void logIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  metricsDefinition;
    void scene;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  viewLogger;
    void window;
}

@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (id)init;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)window;

@end
