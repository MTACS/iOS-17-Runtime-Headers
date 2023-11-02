
@interface ICASOnboardingScreenData : NSObject <AADataEventType> {
    ICASOnboardingScreenType * _onboardingScreenType;
    ICASOnboardingUserAction * _onboardingUserAction;
}

@property (nonatomic, readonly) ICASOnboardingScreenType *onboardingScreenType;
@property (nonatomic, readonly) ICASOnboardingUserAction *onboardingUserAction;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithOnboardingScreenType:(id)arg1 onboardingUserAction:(id)arg2;
- (id)onboardingScreenType;
- (id)onboardingUserAction;
- (id)toDict;

@end
