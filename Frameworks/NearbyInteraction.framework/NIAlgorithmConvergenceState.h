
@interface NIAlgorithmConvergenceState : NSObject <NSCopying, NSSecureCoding> {
    long long  _convergence;
    bool  _insufficientHorizontalSweep;
    bool  _insufficientLighting;
    bool  _insufficientMovement;
    bool  _insufficientSignalStrength;
    bool  _insufficientVerticalSweep;
}

@property (nonatomic) long long convergence;
@property (nonatomic) bool insufficientHorizontalSweep;
@property (nonatomic) bool insufficientLighting;
@property (nonatomic) bool insufficientMovement;
@property (nonatomic) bool insufficientSignalStrength;
@property (nonatomic) bool insufficientVerticalSweep;

+ (bool)supportsSecureCoding;

- (long long)convergence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAlgorithmConvergenceState:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConvergenceStatus:(long long)arg1;
- (bool)insufficientHorizontalSweep;
- (bool)insufficientLighting;
- (bool)insufficientMovement;
- (bool)insufficientSignalStrength;
- (bool)insufficientVerticalSweep;
- (bool)isEqual:(id)arg1;
- (void)setConvergence:(long long)arg1;
- (void)setInsufficientHorizontalSweep:(bool)arg1;
- (void)setInsufficientLighting:(bool)arg1;
- (void)setInsufficientMovement:(bool)arg1;
- (void)setInsufficientSignalStrength:(bool)arg1;
- (void)setInsufficientVerticalSweep:(bool)arg1;

@end
