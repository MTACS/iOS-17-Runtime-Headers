
@interface PTDefaults : BSAbstractDefaultDomain

@property (nonatomic) bool activePrototypingEnabled;
@property (nonatomic) bool prototypeSettingsEnabled;
@property (nonatomic) bool remotePrototypingEnabled;
@property (nonatomic) bool ringerSwitchShowsUI;
@property (nonatomic) bool shouldClearPrototypeCachesForMigration;
@property (nonatomic) bool shouldClearSettingsArchivesForMigration;
@property (nonatomic, retain) NSString *testRecipeDescription;
@property (nonatomic) bool testRecipeEatsRingerSwitch;
@property (nonatomic) bool testRecipeEatsVolumeDown;
@property (nonatomic) bool testRecipeEatsVolumeUp;
@property (nonatomic, retain) NSString *testRecipeIdentifier;
@property (nonatomic) bool volumeDownShowsUI;
@property (nonatomic) bool volumeUpShowsUI;

+ (id)sharedInstance;

- (void)_bindAndRegisterDefaults;
- (id)_eventDefaults;
- (bool)_eventShowsUI:(long long)arg1;
- (id)_testRecipeDefaults;
- (id)activeTestRecipeDescription;
- (bool)activeTestRecipeEatsEvent:(long long)arg1;
- (id)activeTestRecipeEventDescription;
- (id)activeTestRecipeIdentifier;
- (bool)canEditShowsUIForEvent:(long long)arg1;
- (void)deactivateTestRecipe;
- (bool)displayedShowsUIValueForEvent:(long long)arg1;
- (id)observeEventDefaultsOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (id)observeShowUISwitchDefaultsOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (id)observeTestRecipeDefaultsOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (bool)prototypingServerWantsEvent:(long long)arg1;
- (void)setShowsUI:(bool)arg1 forEvent:(long long)arg2;
- (bool)testRecipeIsActive;

@end
