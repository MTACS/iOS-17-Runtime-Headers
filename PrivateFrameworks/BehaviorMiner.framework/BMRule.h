
@interface BMRule : NSObject <NSSecureCoding> {
    unsigned long long  _absoluteAntecedentSupport;
    unsigned long long  _absoluteConsequentSupport;
    unsigned long long  _absoluteSupport;
    NSSet * _antecedent;
    unsigned long long  _basketCount;
    double  _confidence;
    NSSet * _consequent;
    double  _support;
    unsigned long long  _uniqueDaysLastWeek;
    unsigned long long  _uniqueDaysTotal;
}

@property (nonatomic, readonly) unsigned long long absoluteAntecedentSupport;
@property (nonatomic, readonly) unsigned long long absoluteConsequentSupport;
@property (nonatomic, readonly) unsigned long long absoluteSupport;
@property (nonatomic, readonly) NSSet *antecedent;
@property (nonatomic, readonly) unsigned long long basketCount;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSSet *consequent;
@property (nonatomic, readonly) double conviction;
@property (nonatomic, readonly) double lift;
@property (nonatomic, readonly) double rulePowerFactor;
@property (nonatomic, readonly) double support;
@property (nonatomic, readonly) unsigned long long uniqueDaysLastWeek;
@property (nonatomic, readonly) unsigned long long uniqueDaysTotal;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)absoluteAntecedentSupport;
- (unsigned long long)absoluteConsequentSupport;
- (unsigned long long)absoluteSupport;
- (id)antecedent;
- (unsigned long long)basketCount;
- (double)confidence;
- (id)consequent;
- (double)conviction;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAntecedent:(id)arg1 consequent:(id)arg2 support:(double)arg3 confidence:(double)arg4;
- (id)initWithAntecedent:(id)arg1 consequent:(id)arg2 support:(double)arg3 confidence:(double)arg4 basketCount:(unsigned long long)arg5 absoluteSupport:(unsigned long long)arg6 absoluteAntecedentSupport:(unsigned long long)arg7 absoluteConsequentSupport:(unsigned long long)arg8;
- (id)initWithAntecedent:(id)arg1 consequent:(id)arg2 support:(double)arg3 confidence:(double)arg4 basketCount:(unsigned long long)arg5 absoluteSupport:(unsigned long long)arg6 absoluteAntecedentSupport:(unsigned long long)arg7 absoluteConsequentSupport:(unsigned long long)arg8 uniqueDaysLastWeek:(unsigned long long)arg9 uniqueDaysTotal:(unsigned long long)arg10;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)lift;
- (double)rulePowerFactor;
- (double)support;
- (unsigned long long)uniqueDaysLastWeek;
- (unsigned long long)uniqueDaysTotal;

@end
