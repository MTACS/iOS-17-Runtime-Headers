
@interface MLNeuralNetworkMLComputeUpdateEngine : MLNeuralNetworkV1Engine <MLUpdatable> {
    unsigned long long  _batchSize;
    NSDictionary * _classLabelToIndexMap;
    bool  _classifierOutputIsSigmoidOutput;
    bool  _continueWithUpdate;
    float  _finalLossValue;
    NSString * _lossTargetName;
    MLNeuralNetworkMLComputeGraph * _mlcGraph;
    MLParameterContainer * _parameterContainer;
    MLUpdateProgressHandlers * _progressHandlers;
    NSObject<OS_dispatch_queue> * _progressHandlersDispatchQueue;
    MLShufflingBatchProvider * _shuffableTrainingData;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, readonly) NSDictionary *classLabelToIndexMap;
@property (nonatomic) bool classifierOutputIsSigmoidOutput;
@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (nonatomic) bool continueWithUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float finalLossValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *lossTargetName;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, retain) MLNeuralNetworkMLComputeGraph *mlcGraph;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, retain) MLParameterContainer *parameterContainer;
@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;
@property (nonatomic, retain) MLUpdateProgressHandlers *progressHandlers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue;
@property (nonatomic, readonly) bool recordsPredictionEvent;
@property (nonatomic, retain) MLShufflingBatchProvider *shuffableTrainingData;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConcurrentSubmissions;

+ (id)loadModelFromCompiledArchive:(void*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (void)cancelUpdate;
- (id)classLabelToIndexMap;
- (bool)classifierOutputIsSigmoidOutput;
- (bool)continueWithUpdate;
- (float)finalLossValue;
- (id)initWithCompiledArchive:(void*)arg1 nnContainer:(id)arg2 configuration:(id)arg3 error:(id*)arg4;
- (id)loadLossTargetName:(void*)arg1;
- (id)lossTargetName;
- (id)mlcGraph;
- (id)parameterContainer;
- (id)parameterValueForKey:(id)arg1;
- (id)parameterValueForKey:(id)arg1 error:(id*)arg2;
- (id)performInferenceWith:(id)arg1 outputNameToLayerMap:(id)arg2 error:(id*)arg3;
- (bool)performTrainingWith:(id)arg1 callBacks:(id)arg2 numberOfEpochs:(unsigned long long)arg3 error:(id*)arg4;
- (unsigned long long)predictionTypeForKTrace;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)progressHandlers;
- (id)progressHandlersDispatchQueue;
- (void)resumeUpdate;
- (void)resumeUpdateWithParameters:(id)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setClassifierOutputIsSigmoidOutput:(bool)arg1;
- (void)setContinueWithUpdate:(bool)arg1;
- (void)setFinalLossValue:(float)arg1;
- (void)setMlcGraph:(id)arg1;
- (void)setParameterContainer:(id)arg1;
- (void)setProgressHandlers:(id)arg1;
- (void)setProgressHandlersDispatchQueue:(id)arg1;
- (void)setShuffableTrainingData:(id)arg1;
- (void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;
- (id)shuffableTrainingData;
- (void)updateLearningRateWithValue:(float)arg1;
- (void)updateModelWithData:(id)arg1;
- (id)updateParameters;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
