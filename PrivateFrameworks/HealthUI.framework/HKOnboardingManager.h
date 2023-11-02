
@interface HKOnboardingManager : NSObject <HKOnboardingPageViewControllerDelegate, UINavigationControllerDelegate> {
    unsigned long long  _currentPageIndex;
    HKOnboardingSequence * _currentSequence;
    long long  _currentStepIndex;
    <HKOnboardingManagerDataSource> * _dataSource;
    HKDateCache * _dateCache;
    <HKOnboardingManagerDelegate> * _delegate;
    bool  _firstTimeOnboarding;
    HKHealthStore * _healthStore;
    UINavigationController * _navigationController;
    long long  _onboardingType;
    unsigned long long  _presentedPagesCount;
    NSArray * _steps;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic) unsigned long long currentPageIndex;
@property (nonatomic, retain) HKOnboardingSequence *currentSequence;
@property (nonatomic) long long currentStepIndex;
@property (nonatomic) <HKOnboardingManagerDataSource> *dataSource;
@property (nonatomic, retain) HKDateCache *dateCache;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKOnboardingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool firstTimeOnboarding;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (nonatomic) long long onboardingType;
@property (nonatomic) unsigned long long presentedPagesCount;
@property (nonatomic, retain) NSArray *steps;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *userInfo;

- (void).cxx_destruct;
- (void)_didStepBackward;
- (unsigned long long)currentPageIndex;
- (id)currentSequence;
- (long long)currentStepIndex;
- (id)dataSource;
- (id)dateCache;
- (id)delegate;
- (void)dismissOnboarding;
- (bool)firstTimeOnboarding;
- (id)healthStore;
- (id)initWithOnboardingType:(long long)arg1 isFirstTimeOnboarding:(bool)arg2 healthStore:(id)arg3 dateCache:(id)arg4;
- (id)initWithOnboardingType:(long long)arg1 isFirstTimeOnboarding:(bool)arg2 healthStore:(id)arg3 dateCache:(id)arg4 navigationController:(id)arg5;
- (id)navigationController;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)onboardingCancelled;
- (id)onboardingNavigationController;
- (long long)onboardingType;
- (unsigned long long)presentedPagesCount;
- (void)pushPageAnimated:(bool)arg1;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
- (void)setCurrentSequence:(id)arg1;
- (void)setCurrentStepIndex:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDateCache:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setOnboardingType:(long long)arg1;
- (void)setPresentedPagesCount:(unsigned long long)arg1;
- (void)setSteps:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)stepForward;
- (void)stepToNextPage;
- (void)stepToNextState;
- (id)steps;
- (long long)upgradingFromAlgorithmVersionForOnboardingType:(long long)arg1;
- (id)userInfo;
- (id)viewControllerForPage:(id)arg1;

@end
