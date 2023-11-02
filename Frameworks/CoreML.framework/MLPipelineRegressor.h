
@interface MLPipelineRegressor : MLRegressor {
    MLPipeline * _engine;
}

@property (retain) MLPipeline *engine;
@property (readonly) MLPipeline *pipeline;

- (void).cxx_destruct;
- (id)engine;
- (id)initWithEngine:(id)arg1 description:(id)arg2 configuration:(id)arg3 error:(id*)arg4;
- (id)pipeline;
- (id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)setEngine:(id)arg1;
- (unsigned long long)signpostID;

@end
