
@interface MLModel : NSObject <MLModeling, SNMLModel> {
    NSObject<OS_dispatch_queue> * _asyncPredictionQueue;
    MLModelConfiguration * _configuration;
    MLFairPlayDecryptSession * _decryptSession;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _emittedDetailsToInstruments;
    MLModelMetadata * _metadata;
    MLModelDescription * _modelDescription;
    struct atomic<unsigned long long> { 
        struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { 
            _Atomic unsigned long long __a_value; 
        } __a_; 
    }  _nextPredictionRequestID;
    MLPredictionEvent * _predictionEvent;
    unsigned long long  _signpostID;
}

@property (nonatomic, readonly) <MLClassifier> *classifier;
@property (nonatomic, retain) MLModelConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) MLFairPlayDecryptSession *decryptSession;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLModelMetadata *metadata;
@property (readonly) MLModelDescription *modelDescription;
@property (nonatomic, retain) MLModelDescription *modelDescription;
@property (nonatomic, readonly) <MLNeuralNetwork> *neuralNetwork;
@property (nonatomic, readonly) <MLPipeline> *pipeline;
@property (nonatomic, retain) MLPredictionEvent *predictionEvent;
@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;
@property (nonatomic, readonly) <MLProgram> *program;
@property (nonatomic, readonly) bool recordsPredictionEvent;
@property (nonatomic, readonly) <MLRegressor> *regressor;
@property (nonatomic) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConcurrentSubmissions;
@property (nonatomic, readonly) <MLWritable> *writable;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)_compileModelAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)availableComputeDevices;
+ (void)compileModelAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)compileModelAtURL:(id)arg1 error:(id*)arg2;
+ (id)compileModelWithoutAutoreleaseAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (unsigned long long)generateSignpostId;
+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)loadModelAsset:(id)arg1 configuration:(id)arg2 completionHandler:(id /* block */)arg3;
+ (long long)maxPredictionsInFlight;
+ (id)modelWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (id)modelWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)predictionsFromLoopingOverBatch:(id)arg1 model:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)predictionsFromSubbatchingBatch:(id)arg1 maxSubbatchLength:(long long)arg2 predictionBlock:(id /* block */)arg3 options:(id)arg4 error:(id*)arg5;
+ (bool)serializeInterfaceAndMetadata:(void*)arg1 toArchive:(void*)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)cancelPredictionRequest:(id)arg1;
- (id)classifier;
- (id)configuration;
- (id)debugQuickLookObject;
- (id)decryptSession;
- (id)description;
- (void)enableInstrumentsTracing;
- (void)enableInstrumentsTracingIfNeeded;
- (id)executionSchedule;
- (id)initDescriptionOnlyWithSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)initInterfaceAndMetadataWithCompiledArchive:(void*)arg1 error:(id*)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithDescription:(id)arg1;
- (id)initWithDescription:(id)arg1 configuration:(id)arg2;
- (id)initWithName:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 configuration:(id)arg6;
- (id)internalEngine;
- (id)metadata;
- (id)modelDescription;
- (id)modelPath;
- (id)neuralNetwork;
- (id)newRequestForModel:(id)arg1 inputFeatures:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)newRequestWithInputFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned long long)nextPredictionRequestID;
- (id)objectBoundingBoxOutputDescription;
- (id)parameterValueForKey:(id)arg1 error:(id*)arg2;
- (id)pipeline;
- (id)pipelineOfPostVisionFeaturePrintModelsFromPipeline:(id)arg1;
- (id)predictionEvent;
- (void)predictionFromFeatures:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned long long)predictionTypeForKTrace;
- (id)predictionsFromBatch:(id)arg1 error:(id*)arg2;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)prepareWithCompletionHandler:(id /* block */)arg1;
- (void)prepareWithConcurrencyHint:(long long)arg1;
- (id)program;
- (bool)recordsPredictionEvent;
- (id)regressor;
- (void)setConfiguration:(id)arg1;
- (void)setDecryptSession:(id)arg1;
- (void)setModelDescription:(id)arg1;
- (void)setModelPath:(id)arg1 modelName:(id)arg2;
- (void)setPredictionEvent:(id)arg1;
- (void)setSignpostID:(unsigned long long)arg1;
- (unsigned long long)signpostID;
- (void)submitPredictionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)supportsConcurrentSubmissions;
- (id)updatable;
- (id)vectorizeInput:(id)arg1 error:(id*)arg2;
- (id)visionFeaturePrintInfo;
- (id)writable;

// Image: /System/Library/PrivateFrameworks/PromotedContentPrediction.framework/PromotedContentPrediction

+ (id)modelFromCompiledURL:(id)arg1 isCPUOnly:(bool)arg2;

@end
