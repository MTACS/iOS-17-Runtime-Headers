
@interface STYUserScenarioCache : NSObject {
    NSDictionary * _animationConfigForWhitelistedCategories;
    NSDictionary * _animationConfigForWhitelistedNames;
    NSDictionary * _animationConfigForWhitelistedSubsystems;
    NSError * _badConfigError;
    NSDictionary * _bundleIdForAppName;
    NSError * _bundledIdLookupFailedrror;
    NSString * _hwModel;
    NSMutableDictionary * _lifecycleScenarios;
    NSDictionary * _responsivenessConfigForWhitelistedCategories;
    NSDictionary * _responsivenessConfigForWhitelistedNames;
    NSDictionary * _responsivenessConfigForWhitelistedSubsystems;
    NSMutableDictionary * _scenarioObjects;
}

@property (retain) NSDictionary *animationConfigForWhitelistedCategories;
@property (retain) NSDictionary *animationConfigForWhitelistedNames;
@property (retain) NSDictionary *animationConfigForWhitelistedSubsystems;
@property (retain) NSError *badConfigError;
@property (retain) NSDictionary *bundleIdForAppName;
@property (retain) NSError *bundledIdLookupFailedrror;
@property (retain) NSString *hwModel;
@property (retain) NSMutableDictionary *lifecycleScenarios;
@property (retain) NSDictionary *responsivenessConfigForWhitelistedCategories;
@property (retain) NSDictionary *responsivenessConfigForWhitelistedNames;
@property (retain) NSDictionary *responsivenessConfigForWhitelistedSubsystems;
@property (retain) NSMutableDictionary *scenarioObjects;

+ (id)internalResourceBundle;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)animationConfigForWhitelistedCategories;
- (id)animationConfigForWhitelistedNames;
- (id)animationConfigForWhitelistedSubsystems;
- (id)appNameFromBundleId:(id)arg1;
- (id)badConfigError;
- (id)bundleIdForAppName;
- (id)bundleIdForProcessName:(id)arg1;
- (id)bundledIdLookupFailedrror;
- (float)framerateGoalsForSignpostInterval:(id)arg1;
- (id)hwModel;
- (id)initWithPlatform:(id)arg1;
- (bool)isAnimationScenarioWhitelisted:(id)arg1 error:(id*)arg2;
- (bool)isResponsivenessScenarioWhitelisted:(id)arg1 error:(id*)arg2;
- (id)issueCategoryForSignpostInterval:(id)arg1;
- (bool)kpiIsLatency:(id)arg1;
- (float)latencyGoalsForSignpostInterval:(id)arg1;
- (id)lifecycleScenarios;
- (id)loadWhitelist:(id)arg1 platform:(id)arg2 bundles:(id)arg3;
- (id)processBundleIdForSignpostInterval:(id)arg1;
- (int)processIdForSignpostEvent:(id)arg1;
- (bool)processWhitelisted:(id)arg1 error:(id*)arg2;
- (id)responsivenessConfigForWhitelistedCategories;
- (id)responsivenessConfigForWhitelistedNames;
- (id)responsivenessConfigForWhitelistedSubsystems;
- (id)scenarioForFrontboardLaunchWatchdog:(id)arg1;
- (id)scenarioFromSignpostEvent:(id)arg1 error:(id*)arg2;
- (id)scenarioFromSignpostInterval:(id)arg1 error:(id*)arg2;
- (id)scenarioGroupForSignpostInterval:(id)arg1;
- (id)scenarioIdForSignpostEmittedEvent:(id)arg1;
- (id)scenarioIdForSignpostInterval:(id)arg1;
- (id)scenarioObjects;
- (bool)scenarioWhitelisted:(id)arg1 error:(id*)arg2;
- (void)setAnimationConfigForWhitelistedCategories:(id)arg1;
- (void)setAnimationConfigForWhitelistedNames:(id)arg1;
- (void)setAnimationConfigForWhitelistedSubsystems:(id)arg1;
- (void)setBadConfigError:(id)arg1;
- (void)setBundleIdForAppName:(id)arg1;
- (void)setBundledIdLookupFailedrror:(id)arg1;
- (void)setHwModel:(id)arg1;
- (void)setLifecycleScenarios:(id)arg1;
- (void)setResponsivenessConfigForWhitelistedCategories:(id)arg1;
- (void)setResponsivenessConfigForWhitelistedNames:(id)arg1;
- (void)setResponsivenessConfigForWhitelistedSubsystems:(id)arg1;
- (void)setScenarioObjects:(id)arg1;
- (void)setupBundleIdWhitelists:(id)arg1 bundles:(id)arg2;
- (bool)setupWhitelistedAnimationScenarios:(id)arg1 bundles:(id)arg2;
- (bool)setupWhitelistedResponsivenessScenarios:(id)arg1 bundles:(id)arg2;
- (bool)setupWhitelistedScenarios:(id)arg1 bundles:(id)arg2;

@end
