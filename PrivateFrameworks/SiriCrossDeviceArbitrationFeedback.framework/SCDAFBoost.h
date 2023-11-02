
@interface SCDAFBoost : NSObject <NSSecureCoding> {
    double  _boostValue;
    double  _currentDecay;
    long long  _kind;
    double  _totalDecay;
    long long  _type;
}

@property (nonatomic) double boostValue;
@property (nonatomic) double currentDecay;
@property (nonatomic) long long kind;
@property (nonatomic) double totalDecay;
@property (nonatomic) long long type;

+ (id)arrayDictionaryRepresentation:(id)arg1;
+ (id)boostsArrayWithDictionaryRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (double)boostValue;
- (double)currentDecay;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (long long)kind;
- (void)setBoostValue:(double)arg1;
- (void)setCurrentDecay:(double)arg1;
- (void)setKind:(long long)arg1;
- (void)setTotalDecay:(double)arg1;
- (void)setType:(long long)arg1;
- (double)totalDecay;
- (long long)type;

@end
