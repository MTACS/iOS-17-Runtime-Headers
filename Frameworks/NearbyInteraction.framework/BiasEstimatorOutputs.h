
@interface BiasEstimatorOutputs : NSObject <NSCopying, NSSecureCoding> {
    double  _correctedRange;
    NSArray * _outProbabilities;
    double  _rawRange;
}

@property (nonatomic) double correctedRange;
@property (nonatomic, copy) NSArray *outProbabilities;
@property (nonatomic) double rawRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)correctedRange;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBiasEstimatorOutputs:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOuputProbabilities:(id)arg1 rawRange:(double)arg2 correctedRange:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)outProbabilities;
- (id)populateOrderedBiasEstimatorOutputs;
- (double)rawRange;
- (void)setCorrectedRange:(double)arg1;
- (void)setOutProbabilities:(id)arg1;
- (void)setRawRange:(double)arg1;

@end
