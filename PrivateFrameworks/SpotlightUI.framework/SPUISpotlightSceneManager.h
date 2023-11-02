
@interface SPUISpotlightSceneManager : NSObject {
    SPUIAppService * _appService;
    RBSAssertion * _backgroundingAssertions;
    <SPUISpotlightSceneManagerDelegate> * _delegate;
    NSHashTable * _foregroundScenes;
    RBSAssertion * _initializationAssertions;
    FBSDisplayLayoutMonitor * _layoutMonitor;
    NSHashTable * _managedScenes;
    NSObject<OS_dispatch_queue> * _queue;
    RBSProcessHandle * _spotlightProcessHandle;
    BSTimer * _watchdogTimer;
}

@property (retain) RBSAssertion *backgroundingAssertions;
@property (nonatomic) <SPUISpotlightSceneManagerDelegate> *delegate;
@property (retain) NSHashTable *foregroundScenes;
@property (retain) RBSAssertion *initializationAssertions;
@property (retain) FBSDisplayLayoutMonitor *layoutMonitor;
@property (retain) NSHashTable *managedScenes;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) RBSProcessHandle *spotlightProcessHandle;
@property (retain) BSTimer *watchdogTimer;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addScene:(id)arg1;
- (void)applyAssertionAsNeeded;
- (id)backgroundingAssertions;
- (id)delegate;
- (id)foregroundScenes;
- (id)init;
- (id)initializationAssertions;
- (void)launchSpotlightIfNeededWithForegroundPriority:(bool)arg1;
- (id)layoutMonitor;
- (id)managedScenes;
- (id)queue;
- (void)removeScene:(id)arg1;
- (void)sceneWillBackground:(id)arg1;
- (void)sceneWillForeground:(id)arg1;
- (void)setBackgroundingAssertions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForegroundScenes:(id)arg1;
- (void)setInitializationAssertions:(id)arg1;
- (void)setLayoutMonitor:(id)arg1;
- (void)setManagedScenes:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSpotlightProcessHandle:(id)arg1;
- (void)setWatchdogTimer:(id)arg1;
- (void)spendMoreTimeReleasingMemory;
- (id)spotlightProcessHandle;
- (id)watchdogTimer;

@end
