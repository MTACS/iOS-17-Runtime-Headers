
@interface _PFLPrivacyParameters : NSObject {
    unsigned long long  _dimension;
    double  _epsilon;
    NSString * _identifier;
    long long  _maxRejection;
    double  _minCDProduct;
    double  _normmax;
    double  _precision;
    double  _reconstructionProbability;
    double  _rho;
    bool  _shouldUseCustomEpsilon;
}

@property (nonatomic) unsigned long long dimension;
@property (nonatomic) double epsilon;
@property (nonatomic) long long maxRejection;
@property (nonatomic) double minCDProduct;
@property (nonatomic) double normmax;
@property (nonatomic) double precision;
@property (nonatomic) double reconstructionProbability;
@property (nonatomic) double rho;
@property (nonatomic) bool shouldUseCustomEpsilon;

- (void).cxx_destruct;
- (unsigned long long)dimension;
- (double)epsilon;
- (id)initWithIdentifier:(id)arg1;
- (long long)maxRejection;
- (double)minCDProduct;
- (double)normmax;
- (bool)populateFromDefaultFile;
- (bool)populateFromFile:(id)arg1;
- (double)precision;
- (double)reconstructionProbability;
- (double)rho;
- (void)setDimension:(unsigned long long)arg1;
- (void)setEpsilon:(double)arg1;
- (void)setMaxRejection:(long long)arg1;
- (void)setMinCDProduct:(double)arg1;
- (void)setNormmax:(double)arg1;
- (void)setPrecision:(double)arg1;
- (void)setReconstructionProbability:(double)arg1;
- (void)setRho:(double)arg1;
- (void)setShouldUseCustomEpsilon:(bool)arg1;
- (bool)shouldUseCustomEpsilon;

@end
