
@interface _DPPrioPlusPlusMetricsAlgorithm : NSObject {
    unsigned long long  _dimension;
    double  _secretSharingSigma;
}

@property (nonatomic, readonly) unsigned long long dimension;
@property (nonatomic, readonly) double secretSharingSigma;

+ (id)initializeWithSecretSharingSigma:(double)arg1 dimensionality:(unsigned long long)arg2;

- (unsigned long long)dimension;
- (id)initWithSecretSharingSigma:(double)arg1 dimensionality:(unsigned long long)arg2;
- (id)randomize:(id)arg1;
- (double)secretSharingSigma;

@end
