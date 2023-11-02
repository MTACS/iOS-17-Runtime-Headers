
@interface MLPipelineClassifier : MLClassifier <MLAsyncClassifier> {
    MLPipeline * _engine;
}

@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) MLPipeline *engine;
@property (readonly) unsigned long long hash;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (readonly) MLPipeline *pipeline;
@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;
@property (nonatomic, readonly) bool recordsPredictionEvent;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConcurrentSubmissions;

- (void).cxx_destruct;
- (void)classify:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)enableInstrumentsTracing;
- (id)engine;
- (id)initWithEngine:(id)arg1 description:(id)arg2 configuration:(id)arg3 error:(id*)arg4;
- (id)pipeline;
- (void)setEngine:(id)arg1;
- (unsigned long long)signpostID;

@end
