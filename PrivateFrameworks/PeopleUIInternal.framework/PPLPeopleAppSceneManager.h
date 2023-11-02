
@interface PPLPeopleAppSceneManager : NSObject <FBApplicationUpdateScenesTransactionObserver, FBProcessWatchdogProviding, FBSceneObserver, PPLPeopleAppLauncherDelegate> {
    PPLPeopleAppLauncher * _peopleAppLauncher;
    FBScene * _scene;
    NSPointerArray * _sceneRequesters;
    FBApplicationUpdateScenesTransaction * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PPLPeopleAppLauncher *peopleAppLauncher;
@property (nonatomic, retain) FBScene *scene;
@property (nonatomic, readonly, copy) NSPointerArray *sceneRequesters;
@property (readonly) Class superclass;
@property (nonatomic, retain) FBApplicationUpdateScenesTransaction *transaction;

+ (id)sharedSceneManager;

- (void).cxx_destruct;
- (void)_configureSceneForRequester:(id)arg1;
- (void)_createSceneForRequester:(id)arg1;
- (void)_launchPeopleAppIfNeededWithForegroundPriority:(bool)arg1;
- (void)_sendSceneToBackground;
- (void)_updateSceneSettingsForRequester:(id)arg1;
- (void)_updateTraitCollection;
- (void)addSceneRequester:(id)arg1;
- (id)initWithAppLauncher:(id)arg1;
- (id)peopleAppLauncher;
- (void)removeSceneRequester:(id)arg1;
- (id)scene;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidInvalidate:(id)arg1;
- (id)sceneRequesters;
- (void)setScene:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;
- (void)transaction:(id)arg1 didCreateScene:(id)arg2;
- (id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2;
- (void)willLaunchPeopleAppInBackground:(id)arg1;

@end
