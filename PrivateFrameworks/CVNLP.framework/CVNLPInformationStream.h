
@interface CVNLPInformationStream : NSObject {
    NSNumber * _decodingWeight;
    double  _decodingWeightValue;
    NSNumber * _lowerBoundLogProbability;
    double  _lowerBoundLogProbabilityValue;
}

@property (nonatomic, readonly) NSNumber *decodingWeight;
@property (nonatomic, readonly) NSNumber *lowerBoundLogProbability;

+ (id)defaultDecodingWeight;
+ (id)defaultLowerBoundLogProbability;

- (void).cxx_destruct;
- (id)decodingWeight;
- (double)decodingWeightValue;
- (id)initWithDecodingWeight:(id)arg1;
- (id)initWithDecodingWeight:(id)arg1 lowerBoundLogProbability:(id)arg2;
- (id)lowerBoundLogProbability;
- (double)lowerBoundLogProbabilityValue;

@end
