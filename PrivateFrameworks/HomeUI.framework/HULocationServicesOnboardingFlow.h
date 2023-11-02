
@interface HULocationServicesOnboardingFlow : NSObject <HUFeatureOnboardingFlow> {
    HMHome * _home;
    UIViewController<HUConfigurationViewController> * _initialViewController;
    NAFuture * _onboardingFuture;
    bool  _shouldAbortAllOnboarding;
    bool  _shouldAbortThisOnboardingFlowGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) UIViewController<HUConfigurationViewController> *initialViewController;
@property (nonatomic, retain) NAFuture *onboardingFuture;
@property (nonatomic, retain) NAFuture *readyFuture;
@property (nonatomic) bool shouldAbortAllOnboarding;
@property (nonatomic) bool shouldAbortThisOnboardingFlowGroup;
@property (readonly) Class superclass;

+ (id)needsOnboardingForHome:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)home;
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2;
- (id)initialViewController;
- (id)onboardingFuture;
- (id)processUserInput:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setInitialViewController:(id)arg1;
- (void)setOnboardingFuture:(id)arg1;
- (void)setShouldAbortAllOnboarding:(bool)arg1;
- (void)setShouldAbortThisOnboardingFlowGroup:(bool)arg1;
- (bool)shouldAbortAllOnboarding;
- (bool)shouldAbortThisOnboardingFlowGroup;

@end
