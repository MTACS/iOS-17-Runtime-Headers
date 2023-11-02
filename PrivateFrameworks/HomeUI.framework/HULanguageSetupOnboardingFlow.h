
@interface HULanguageSetupOnboardingFlow : NSObject <HUFeatureOnboardingFlow> {
    NSString * _assistantDeviceIntendedRecognitionLanguage;
    bool  _forceOnboardingFinishedForErrorRecovery;
    HMHome * _home;
    UIViewController<HUConfigurationViewController> * _initialViewController;
    unsigned long long  _languageOnboardingFlowType;
    NAFuture * _onboardingFuture;
    NAFuture * _readyFuture;
    bool  _shouldAbortAllOnboarding;
    bool  _shouldAbortThisOnboardingFlowGroup;
    NSDictionary * _usageOptions;
}

@property (nonatomic, retain) NSString *assistantDeviceIntendedRecognitionLanguage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceOnboardingFinishedForErrorRecovery;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) UIViewController<HUConfigurationViewController> *initialViewController;
@property (nonatomic) unsigned long long languageOnboardingFlowType;
@property (nonatomic, retain) NAFuture *onboardingFuture;
@property (nonatomic, retain) NAFuture *readyFuture;
@property (nonatomic) bool shouldAbortAllOnboarding;
@property (nonatomic) bool shouldAbortThisOnboardingFlowGroup;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *usageOptions;

+ (id)needsOnboardingForHome:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (id)_determineNextViewControllerWithPriorResults:(id)arg1;
- (id)assistantDeviceIntendedRecognitionLanguage;
- (id)description;
- (bool)forceOnboardingFinishedForErrorRecovery;
- (id)home;
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2;
- (id)initialViewController;
- (unsigned long long)languageOnboardingFlowType;
- (id)onboardingFuture;
- (id)processUserInput:(id)arg1;
- (id)readyFuture;
- (void)setAssistantDeviceIntendedRecognitionLanguage:(id)arg1;
- (void)setForceOnboardingFinishedForErrorRecovery:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setInitialViewController:(id)arg1;
- (void)setLanguageOnboardingFlowType:(unsigned long long)arg1;
- (void)setOnboardingFuture:(id)arg1;
- (void)setReadyFuture:(id)arg1;
- (void)setShouldAbortAllOnboarding:(bool)arg1;
- (void)setShouldAbortThisOnboardingFlowGroup:(bool)arg1;
- (void)setUsageOptions:(id)arg1;
- (bool)shouldAbortAllOnboarding;
- (bool)shouldAbortThisOnboardingFlowGroup;
- (id)usageOptions;

@end
