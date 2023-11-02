
@interface ICASOnboardingUserAction : NSObject <AADataType> {
    long long  _onboardingUserAction;
}

@property (nonatomic, readonly) long long onboardingUserAction;

- (id)initWithOnboardingUserAction:(long long)arg1;
- (long long)onboardingUserAction;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
