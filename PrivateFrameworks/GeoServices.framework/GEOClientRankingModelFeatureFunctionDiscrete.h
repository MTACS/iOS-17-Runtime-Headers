
@interface GEOClientRankingModelFeatureFunctionDiscrete : GEOClientRankingModelFeatureFunction {
    float  _valueThresholdHigh;
    float  _valueThresholdLow;
    float  _weightHigh;
    float  _weightLow;
}

@property (nonatomic, readonly) float valueThresholdHigh;
@property (nonatomic, readonly) float valueThresholdLow;
@property (nonatomic, readonly) float weightHigh;
@property (nonatomic, readonly) float weightLow;

- (long long)functionType;
- (id)init;
- (id)initWithValueThresholdLow:(float)arg1 weightLow:(float)arg2 valueThresholdHigh:(float)arg3 weightHigh:(float)arg4;
- (float)valueThresholdHigh;
- (float)valueThresholdLow;
- (float)weightHigh;
- (float)weightLow;

@end
