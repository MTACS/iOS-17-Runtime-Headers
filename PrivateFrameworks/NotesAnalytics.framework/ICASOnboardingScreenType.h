
@interface ICASOnboardingScreenType : NSObject <AADataType> {
    long long  _onboardingScreenType;
}

@property (nonatomic, readonly) long long onboardingScreenType;

- (id)initWithOnboardingScreenType:(long long)arg1;
- (long long)onboardingScreenType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
