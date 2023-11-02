
@interface MNGuidanceSignInfo : NSObject <NSSecureCoding> {
    double  _primaryDistance_SIRI_USE_ONLY;
    MNGuidanceSignDescription * _primarySign;
    double  _secondaryDistance_SIRI_USE_ONLY;
    MNGuidanceSignDescription * _secondarySign;
    unsigned long long  _stepIndex;
    double  _timeUntilPrimarySign_SIRI_USE_ONLY;
    double  _timeUntilSecondarySign_SIRI_USE_ONLY;
}

@property (nonatomic, readonly) double primaryDistance_SIRI_USE_ONLY;
@property (nonatomic, readonly) MNGuidanceSignDescription *primarySign;
@property (nonatomic, readonly) double secondaryDistance_SIRI_USE_ONLY;
@property (nonatomic, readonly) MNGuidanceSignDescription *secondarySign;
@property (nonatomic, readonly) unsigned long long stepIndex;
@property (nonatomic, readonly) double timeUntilPrimarySign_SIRI_USE_ONLY;
@property (nonatomic, readonly) double timeUntilSecondarySign_SIRI_USE_ONLY;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimarySign:(id)arg1 secondarySign:(id)arg2 stepIndex:(unsigned long long)arg3 primaryDistance:(double)arg4 secondaryDistance:(double)arg5 timeUntilPrimarySign:(double)arg6 timeUntilSecondarySign:(double)arg7;
- (double)primaryDistance_SIRI_USE_ONLY;
- (id)primarySign;
- (double)secondaryDistance_SIRI_USE_ONLY;
- (id)secondarySign;
- (unsigned long long)stepIndex;
- (double)timeUntilPrimarySign_SIRI_USE_ONLY;
- (double)timeUntilSecondarySign_SIRI_USE_ONLY;

@end
