
@interface PMLLogisticRegressionModel : NSObject <PMLMultiLabelClassifierProtocol, PMLPlistAndChunksSerializableProtocol> {
    PMLGradientSolver * _solver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML

+ (id)solverWithWeights:(id)arg1;
+ (id)solverWithWeights:(id)arg1 andIntercept:(bool)arg2;
+ (id)solverWithWeights:(id)arg1 andIntercept:(bool)arg2 learningRate:(float)arg3 minIterations:(unsigned long long)arg4 stoppingThreshold:(float)arg5;
+ (id)solverWithWeights:(id)arg1 andIntercept:(bool)arg2 learningRate:(float)arg3 minIterations:(unsigned long long)arg4 stoppingThreshold:(float)arg5 l2RegularizationRate:(float)arg6;
+ (id)solverWithWeights:(id)arg1 andIntercept:(bool)arg2 learningRate:(float)arg3 minIterations:(unsigned long long)arg4 stoppingThreshold:(float)arg5 regularizationStrategy:(unsigned long long)arg6 regularizationRate:(float)arg7 l1Ratio:(float)arg8;
+ (id)withWeights:(id)arg1;
+ (id)withWeights:(id)arg1 andIntercept:(bool)arg2;

- (void).cxx_destruct;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithSolver:(id)arg1;
- (unsigned long long)outputDimension;
- (id)predict:(id)arg1;
- (id)serialize;
- (id)toPlistWithChunks:(id)arg1;
- (id)weights;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (bool)isEqual:(id)arg1;
- (bool)isEqualToPMLLogisticRegressionModel:(id)arg1;

@end
