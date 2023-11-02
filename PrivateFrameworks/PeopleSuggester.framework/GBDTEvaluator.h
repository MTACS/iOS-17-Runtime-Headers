
@interface GBDTEvaluator : NSObject

+ (void)initialize;

- (id)_computeFirstOrderGradientsWithTargets:(id)arg1 predictions:(id)arg2 positiveSampleWeight:(id)arg3;
- (id)_computePredictionsFromModelWithInputVectors:(id)arg1 currentModel:(id)arg2 error:(id*)arg3;
- (id)_computeSecondOrderGradientsWithTargets:(id)arg1 predictions:(id)arg2 positiveSampleWeight:(id)arg3;
- (id)_computeSumOfGradientsLeftAndRightOfSplitWithFeature:(int)arg1 threshold:(float)arg2 inputVectors:(id)arg3 gradients:(id)arg4;
- (id)_differenceArrayWithArray:(id)arg1;
- (id)_evaluateResultWithGradients:(id)arg1 questions:(id)arg2 inputVectors:(id)arg3 reportGradientsBothSidesOfSplit:(bool)arg4 reportNodeSumGradients:(bool)arg5 reportPerFeatureResultDifference:(bool)arg6 reportPerNodeResultDifference:(bool)arg7;
- (id)_findNodeSamplesWithDecisionPath:(id)arg1 inputVectors:(id)arg2 gradients:(id)arg3;
- (float)_firstOrderGradientWithPrediction:(float)arg1 label:(float)arg2;
- (id)_l1NormWithArray:(id)arg1;
- (id)_l2NormWithArray:(id)arg1;
- (id)_makeKeysWithInputVectors:(id)arg1;
- (float)_secondOrderGradientWithPrediction:(float)arg1;
- (float)_sigmoidWithValue:(float)arg1;
- (id)_sumAbsoluteErrorWithPredictions:(id)arg1 targets:(id)arg2;
- (id)_sumAccuratePredictionsWithPredictions:(id)arg1 targets:(id)arg2;
- (id)_translateResultWithTranslateVector:(id)arg1 result:(id)arg2;
- (id)_weightResultWithWeightVector:(id)arg1 result:(id)arg2;
- (id)evaluateWithModelURL:(id)arg1 dataSource:(id)arg2 processDataReturnDict:(id)arg3 error:(id*)arg4;

@end
