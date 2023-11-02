
@interface PMLEspressoTrainingPlan : NSObject <PMLPlanProtocol> {
    PMLEspressoTrainingVariables * _etv;
    <ETDataProvider> * _groundTruth;
    PMLMetaTrainingVariables * _mtv;
    NSString * _planId;
    ETTaskDefinition * _taskDefinition;
    <ETDataProvider> * _trainingPredictions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *planId;
@property (readonly) Class superclass;

+ (id)_calculateGradientInPlaceForTask:(id)arg1 startingParameters:(id)arg2 globalNames:(id)arg3 weightNames:(id)arg4 biasNames:(id)arg5;
+ (id)_calculateTrainingMetricsWithSamplingProb:(double)arg1 groundTruthProvider:(id)arg2 predictionsProvider:(id)arg3 trueLabelName:(id)arg4 trainingOutputName:(id)arg5 lossValueName:(id)arg6 probThreshold:(double)arg7 includeSummableOnly:(bool)arg8;
+ (id)_getModelParametersForTask:(id)arg1 globalNames:(id)arg2 weightNames:(id)arg3 biasNames:(id)arg4 error:(id*)arg5;
+ (id)_iterateModelParametersForTask:(id)arg1 globalNames:(id)arg2 weightNames:(id)arg3 biasNames:(id)arg4 block:(id /* block */)arg5;
+ (int)argmax:(id)arg1;
+ (bool)isValidGradient:(id)arg1 error:(id*)arg2;
+ (unsigned long long)numberOfParametersInTensor:(id)arg1;

- (void).cxx_destruct;
- (id)_newTaskForTraining;
- (id /* block */)_updateResultsReferenceCallback:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithMetaTrainingVariables:(id)arg1 espressoTrainingVariables:(id)arg2;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEspressoTrainingPlan:(id)arg1;
- (id)planId;
- (id)runWithError:(id*)arg1;
- (id)toPlistWithChunks:(id)arg1;

@end
