
@interface _PSHistogramFeatures : NSObject

+ (int)bucketCounttimeIntervalForFeatureName:(int)arg1;
+ (id)computeFactorNameForFeature:(id)arg1;
+ (id)conditionedProbabilityAcrossAllBucketsWithCandidates:(id)arg1 featureName:(int)arg2 predictionContext:(id)arg3 histogramFeatureData:(id)arg4 histogramSmoothingParameterK:(id)arg5 histogramSmoothingParameterV:(id)arg6;
+ (id)conditionedProbabilityAcrossAllCandidatesWithCandidates:(id)arg1 featureName:(int)arg2 predictionContext:(id)arg3 histogramFeatureData:(id)arg4 histogramSmoothingParameterK:(id)arg5 histogramSmoothingParameterV:(id)arg6;
+ (id)fetchBucketNamesFromPredictionContextForFeatureName:(int)arg1 predictionContext:(id)arg2;
+ (id)fetchIntervalStringForFeatureName:(int)arg1;
+ (id)hasEverInBucketWithCandidates:(id)arg1 featureName:(int)arg2 predictionContext:(id)arg3 histogramFeatureData:(id)arg4;
+ (int)virtualFeatureToDurableFeatureSourceMapping:(int)arg1;

@end
