
@interface SGMISaliencyModelConfig : NSObject {
    NSArray * _featureNames;
    NSArray * _groundTruthEstimatorFeatures;
    NSArray * _groundTruthEstimatorRules;
    NSArray * _mean;
    unsigned long long  _minCountToConsiderATokenAsExtremelyDiscriminant;
    unsigned long long  _minCountToConsiderATokenAsHighlyDiscriminant;
    double  _ratioToConsiderATokenAsExtremelyDiscriminant;
    double  _ratioToConsiderATokenAsHighlyDiscriminant;
    NSArray * _saliencyOverrideRules;
    NSArray * _std;
    NSNumber * _threshold;
}

@property (readonly) NSArray *featureNames;
@property (readonly) NSArray *groundTruthEstimatorFeatures;
@property (readonly) NSArray *groundTruthEstimatorRules;
@property (readonly) NSArray *mean;
@property (nonatomic, readonly) unsigned long long minCountToConsiderATokenAsExtremelyDiscriminant;
@property (nonatomic, readonly) unsigned long long minCountToConsiderATokenAsHighlyDiscriminant;
@property (nonatomic, readonly) double ratioToConsiderATokenAsExtremelyDiscriminant;
@property (nonatomic, readonly) double ratioToConsiderATokenAsHighlyDiscriminant;
@property (readonly) NSArray *saliencyOverrideRules;
@property (readonly) NSArray *std;
@property (readonly) NSNumber *threshold;

+ (id)defaultConfig;
+ (id)groundTruthVersion;
+ (id)inferenceVersion;
+ (id)rulesFromFeatures:(id)arg1 lowerBounds:(id)arg2 upperBounds:(id)arg3 outputs:(id)arg4;

- (void).cxx_destruct;
- (id)featureNames;
- (id)groundTruthEstimatorFeatures;
- (id)groundTruthEstimatorRules;
- (id)init;
- (id)initWithSaliencyOverrideRules:(id)arg1 featureNames:(id)arg2 mean:(id)arg3 std:(id)arg4 groundTruthEstimatorRules:(id)arg5 threshold:(id)arg6 minCountToConsiderATokenAsHighlyDiscriminant:(id)arg7 ratioToConsiderATokenAsHighlyDiscriminant:(id)arg8 minCountToConsiderATokenAsExtremelyDiscriminant:(id)arg9 ratioToConsiderATokenAsExtremelyDiscriminant:(id)arg10;
- (id)mean;
- (unsigned long long)minCountToConsiderATokenAsExtremelyDiscriminant;
- (unsigned long long)minCountToConsiderATokenAsHighlyDiscriminant;
- (double)ratioToConsiderATokenAsExtremelyDiscriminant;
- (double)ratioToConsiderATokenAsHighlyDiscriminant;
- (id)saliencyOverrideRules;
- (id)std;
- (id)threshold;

@end
