
@interface NLProbabilityInfo : NSObject <NSCopying, NSSecureCoding> {
    bool  _isValid;
    double  _log10Probability;
    double  _probability;
    unsigned long long  _probabilityFlags;
}

@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) double log10Probability;
@property (nonatomic, readonly) double probability;
@property (nonatomic, readonly) unsigned long long probabilityFlags;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvalidProbability;
- (id)initWithLog10Probability:(double)arg1 flags:(unsigned long long)arg2;
- (id)initWithProbability:(double)arg1 flags:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (double)log10Probability;
- (double)probability;
- (unsigned long long)probabilityFlags;

@end
