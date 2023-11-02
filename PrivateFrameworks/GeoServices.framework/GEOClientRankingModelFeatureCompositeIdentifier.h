
@interface GEOClientRankingModelFeatureCompositeIdentifier : GEOClientRankingModelFeatureIdentifier {
    float  _featureWeight;
    NSArray * _unitExponentPairs;
}

@property (nonatomic, readonly) float featureWeight;
@property (nonatomic, copy) NSArray *unitExponentPairs;

- (void).cxx_destruct;
- (long long)featureIdentifierType;
- (float)featureWeight;
- (id)initWithUnitExponentPairs:(id)arg1 featureWeight:(float)arg2;
- (void)setUnitExponentPairs:(id)arg1;
- (id)unitExponentPairs;

@end
