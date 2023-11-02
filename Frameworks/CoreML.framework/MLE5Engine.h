
@interface MLE5Engine : MLModelEngine <MLClassifier, MLCompiledModelLoader, MLPreparable, MLProgramInternal> {
    NSObject<OS_dispatch_semaphore> * _batchMaxInFlightSem;
    id  _classLabelsSharedKey;
    NSString * _classProbabilitiesFeatureName;
    MLVersionInfo * _compilerVersionInfo;
    MLFeatureProviderConformer * _inputFeatureConformer;
    <MLE5ExecutionStreamOperationPool> * _operationPool;
    MLE5ProgramLibrary * _programLibrary;
    MLE5ExecutionStreamPool * _streamPool;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *batchMaxInFlightSem;
@property (readonly) id classLabelsSharedKey;
@property (readonly) NSString *classProbabilitiesFeatureName;
@property (nonatomic, readonly) MLVersionInfo *compilerVersionInfo;
@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLFeatureProviderConformer *inputFeatureConformer;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (readonly) <MLE5ExecutionStreamOperationPool> *operationPool;
@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;
@property (nonatomic, readonly) MLE5ProgramLibrary *programLibrary;
@property (nonatomic, readonly) bool recordsPredictionEvent;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (readonly) MLE5ExecutionStreamPool *streamPool;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConcurrentSubmissions;

+ (Class)containerClass;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { }*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (id)_classProbabilitiesInOutputFeatures:(id)arg1 error:(id*)arg2;
- (id)_classifierResultFromOutputFeatures:(id)arg1 classifyTopK:(unsigned long long)arg2 error:(id*)arg3;
- (void)_cleanUpStream:(id)arg1 operation:(id)arg2;
- (id)_conformFeatures:(id)arg1 error:(id*)arg2;
- (unsigned long long)_extractSupportFromBackendDict:(id)arg1;
- (unsigned long long)_extractSupportedComputeUnitFromString:(id)arg1;
- (id)_outputFeaturesByAddingClassifierResultTo:(id)arg1 classifyTopK:(unsigned long long)arg2 error:(id*)arg3;
- (id)_postProcessingForOutputs:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)_predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)_predictionFromFeatures:(id)arg1 options:(id)arg2 usingStream:(id)arg3 operation:(id)arg4 error:(id*)arg5;
- (id)_probabilityDictionaryWithMultiArray:(id)arg1 classifyTopK:(long long)arg2;
- (id)batchMaxInFlightSem;
- (id)classLabels;
- (id)classLabelsSharedKey;
- (id)classProbabilitiesFeatureName;
- (id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)compilerVersionInfo;
- (void)enableInstrumentsTracing;
- (id)evaluateFunction:(id)arg1 arguments:(id)arg2 error:(id*)arg3;
- (id)executionSchedule;
- (id)initWithContainer:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)initWithE5BundleAtURL:(id)arg1 modelDescription:(id)arg2 classProbabilitiesFeatureName:(id)arg3 modelDisplayName:(id)arg4;
- (id)initWithProgramLibrary:(id)arg1 modelDescription:(id)arg2 configuration:(id)arg3 classProbabilitiesFeatureName:(id)arg4 optionalInputDefaultValues:(id)arg5 compilerVersionInfo:(id)arg6;
- (id)inputFeatureConformer;
- (id)newContextAndReturnError:(id*)arg1;
- (id)newRequestForModel:(id)arg1 inputFeatures:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)operationPool;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned long long)predictionTypeForKTrace;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)prepareWithConcurrencyHint:(long long)arg1 error:(id*)arg2;
- (id)programLibrary;
- (id)streamPool;
- (void)submitPredictionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)supportsConcurrentSubmissions;

@end
