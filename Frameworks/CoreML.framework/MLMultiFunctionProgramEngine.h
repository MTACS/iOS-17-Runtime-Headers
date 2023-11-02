
@interface MLMultiFunctionProgramEngine : MLModelEngine <MLClassifier, MLCompiledModelLoader, MLNeuralNetwork, MLProgram, MLProgramInternal, MLRegressor> {
    MLMultiFunctionProgramContainer * _container;
    NSMutableDictionary * _functionNameToEngineMap;
    NSString * _modelFileBasePath;
}

@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (nonatomic, readonly) MLMultiFunctionProgramContainer *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) NSString *modelFileBasePath;
@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;
@property (nonatomic, readonly) bool recordsPredictionEvent;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConcurrentSubmissions;

+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { }*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (id)classLabels;
- (id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)container;
- (void)enableInstrumentsTracing;
- (id)evaluate:(id)arg1 error:(id*)arg2;
- (id)evaluateFunction:(id)arg1 arguments:(id)arg2 error:(id*)arg3;
- (id)executionSchedule;
- (id)initWithProgramContainer:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)modelFileBasePath;
- (id)modelPath;
- (id)newContextAndReturnError:(id*)arg1;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned long long)predictionTypeForKTrace;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)program;
- (id)programEngineForFunction:(id)arg1 error:(id*)arg2;
- (id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)removeEngineForFunctionName:(id)arg1;
- (void)setModelPath:(id)arg1 modelName:(id)arg2;
- (unsigned long long)signpostID;
- (void)updateModelFilePath:(id)arg1;
- (bool)verifyArgumentNames:(id)arg1 functionName:(id)arg2 error:(id*)arg3;

@end
