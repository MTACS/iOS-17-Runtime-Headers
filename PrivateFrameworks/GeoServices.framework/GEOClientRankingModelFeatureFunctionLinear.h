
@interface GEOClientRankingModelFeatureFunctionLinear : GEOClientRankingModelFeatureFunction {
    float  _maxRelativeValue;
    float  _meanValue;
    float  _weight;
}

@property (nonatomic, readonly) float maxRelativeValue;
@property (nonatomic, readonly) float meanValue;
@property (nonatomic, readonly) float weight;

- (long long)functionType;
- (id)init;
- (id)initWithWeight:(float)arg1 maxRelativeValue:(float)arg2 meanValue:(float)arg3;
- (float)maxRelativeValue;
- (float)meanValue;
- (float)weight;

@end
