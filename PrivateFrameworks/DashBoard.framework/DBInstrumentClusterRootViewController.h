
@interface DBInstrumentClusterRootViewController : UIViewController <BSInvalidatable, DBEnvironmentConfigurationObserving, DBProcessMonitorObserving> {
    DBInstrumentClusterAppSceneViewController * _appSceneViewController;
    CARDisplayInfo * _displayInfo;
    <DBEnvironment> * _environment;
    NSString * _targetBundleIdentifier;
}

@property (nonatomic, retain) DBInstrumentClusterAppSceneViewController *appSceneViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CARDisplayInfo *displayInfo;
@property (nonatomic) <DBEnvironment> *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *targetBundleIdentifier;

- (void).cxx_destruct;
- (id)appSceneViewController;
- (void)backgroundScene;
- (id)displayInfo;
- (id)environment;
- (void)foregroundSceneWithURL:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (void)invalidate;
- (void)processMonitor:(id)arg1 didHandleDeathOfBundleIdentifier:(id)arg2;
- (void)processMonitor:(id)arg1 shouldHandleDeathOfBundleIdentifier:(id)arg2 isCrash:(bool)arg3;
- (void)setAppSceneViewController:(id)arg1;
- (void)setDisplayInfo:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setTargetBundleIdentifier:(id)arg1;
- (id)targetBundleIdentifier;
- (void)updateSceneWithAnimationSettings:(id)arg1;
- (void)viewDidLoad;

@end
