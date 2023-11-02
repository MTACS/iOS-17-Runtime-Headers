
@interface HUFeatureOnboarder : NSObject <HUFeatureOnboardingConfiguratorDelegate> {
    UIViewController<HUConfigurationViewController> * __currentViewControllerForTests;
    NSMutableArray * _allRemainingFlowGroups;
    NAFuture * _completionFuture;
    HUFeatureOnboardingConfigurator * _configurator;
    bool  _hasPerformedPostProcessing;
    NSDictionary * _initialUsageOptions;
    UINavigationController * _navController;
    bool  _restart;
    NSMutableDictionary * _userInputResults;
}

@property UIViewController<HUConfigurationViewController> *_currentViewControllerForTests;
@property (nonatomic, retain) NSMutableArray *allRemainingFlowGroups;
@property (nonatomic, retain) NAFuture *completionFuture;
@property (nonatomic, retain) HUFeatureOnboardingConfigurator *configurator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasPerformedPostProcessing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *initialUsageOptions;
@property (nonatomic, retain) UINavigationController *navController;
@property (nonatomic) bool restart;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *userInputResults;

- (void).cxx_destruct;
- (id)_currentViewControllerForTests;
- (id)_findNextAppropriateFlowByRemovingFlow:(id)arg1 currentOnboardingFlowClass:(Class)arg2 usageOptions:(id)arg3;
- (void)_skipAnyFlowsNoLongerRequired;
- (id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)arg1 usageOptions:(id)arg2;
- (id)allRemainingFlowGroups;
- (id)completionFuture;
- (id)configurator;
- (void)configuratorDidFinish:(id)arg1;
- (void)configuratorDidUpdateViewController:(id)arg1;
- (id)getNextViewControllerForOnboardingInput:(id)arg1 currentOnboardingFlowClass:(Class)arg2;
- (id)getPostProcessingFlowsForResults:(id)arg1;
- (bool)hasPerformedPostProcessing;
- (id)initWithFeatures:(id)arg1 usageOptions:(id)arg2;
- (id)initWithGroupedFeatures:(id)arg1 usageOptions:(id)arg2;
- (id)initialUsageOptions;
- (id)navController;
- (bool)restart;
- (void)restartCurrentOnboarding;
- (void)setAllRemainingFlowGroups:(id)arg1;
- (void)setCompletionFuture:(id)arg1;
- (void)setConfigurator:(id)arg1;
- (void)setHasPerformedPostProcessing:(bool)arg1;
- (void)setInitialUsageOptions:(id)arg1;
- (void)setNavController:(id)arg1;
- (void)setRestart:(bool)arg1;
- (void)setUserInputResults:(id)arg1;
- (void)set_currentViewControllerForTests:(id)arg1;
- (void)startOnboardingWithPresentingViewController:(id)arg1 usageOptions:(id)arg2;
- (id)userInputResults;

@end
