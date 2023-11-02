
@interface _DPPrioPlusPlusAlgorithm : NSObject {
    unsigned long long  _dimension;
    double  _secretSharingSigma;
    double  _sigma;
}

@property (nonatomic, readonly) unsigned long long dimension;
@property (nonatomic, readonly) double secretSharingSigma;
@property (nonatomic, readonly) double sigma;

+ (id)initializeWithSigma:(double)arg1 secretSharingSigma:(double)arg2 dimensionality:(unsigned long long)arg3;

- (unsigned long long)dimension;
- (id)initWithSigma:(double)arg1 secretSharingSigma:(double)arg2 dimensionality:(unsigned long long)arg3;
- (id)randomize:(id)arg1;
- (double)secretSharingSigma;
- (double)sigma;

@end
