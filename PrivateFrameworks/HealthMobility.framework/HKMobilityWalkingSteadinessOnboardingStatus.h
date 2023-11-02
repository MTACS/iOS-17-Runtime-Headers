
@interface HKMobilityWalkingSteadinessOnboardingStatus : NSObject <NSSecureCoding> {
    NSDate * _dateOnboarded;
    bool  _isClassificationAvailable;
    bool  _isLocaleValidOnLocalDevice;
    long long  _onboardingUnavailableReasons;
    bool  _shouldAdvertiseOnboarding;
    long long  _state;
}

@property (nonatomic, readonly, copy) NSDate *dateOnboarded;
@property (nonatomic, readonly) bool isClassificationAvailable;
@property (nonatomic, readonly) bool isLocaleValidOnLocalDevice;
@property (nonatomic, readonly) long long onboardingUnavailableReasons;
@property (nonatomic, readonly) bool shouldAdvertiseOnboarding;
@property (nonatomic, readonly) long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateOnboarded;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(long long)arg1 unavailableReasons:(long long)arg2 dateOnboarded:(id)arg3 shouldOnboardingTileBeAdvertised:(bool)arg4 isLocaleValidOnLocalDevice:(bool)arg5 isClassificationAvailable:(bool)arg6;
- (bool)isClassificationAvailable;
- (bool)isEqual:(id)arg1;
- (bool)isLocaleValidOnLocalDevice;
- (long long)onboardingUnavailableReasons;
- (bool)shouldAdvertiseOnboarding;
- (long long)state;

@end
