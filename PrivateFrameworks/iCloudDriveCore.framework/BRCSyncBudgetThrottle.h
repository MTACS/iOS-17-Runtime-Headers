
@interface BRCSyncBudgetThrottle : NSObject <NSSecureCoding> {
    double  _t0;
    float  _values;
}

@property (nonatomic, readonly) float lastDay;
@property (nonatomic, readonly) float lastHour;
@property (nonatomic, readonly) float lastMinute;

+ (bool)supportsSecureCoding;

- (double)_timeToLoseAmount:(float)arg1 count:(int)arg2;
- (float)availableBudgetWithDefaults:(id)arg1;
- (void)clear;
- (void)consume:(float)arg1;
- (id)debugDescriptionWithDefaults:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)lastDay;
- (float)lastHour;
- (float)lastMinute;
- (double)nextDateWithBudgetWithDefaults:(id)arg1;
- (void)updateForTime:(double)arg1;

@end
