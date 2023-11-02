
@interface ATXDirichletDistribution : NSObject {
    double  kBlendedScoreNormalizationConstant;
    double  kGlobalScoreMultiplier;
}

+ (double)getGammaDistributionShapeParameterForComputingGlobalAppScoresWithAlpha:(double)arg1 andNormalizationConstant:(double)arg2;
+ (id)sharedInstance;

- (id)getBlendedLocalAndGlobalScoresWithLocalCounts:(id)arg1 andGlobalScores:(id)arg2 withSamplingEnabled:(bool)arg3;
- (id)init;
- (id)sampleProbabilitiesFromDirichletWithNormalizedParameters:(id)arg1 andNormalizationConstant:(double)arg2;

@end
