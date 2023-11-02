
@interface EspressoEvaluator : NSObject <Evaluator> {
    NSURL * _modelURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *modelURL;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (float)averageLossEvaluation:(id)arg1 dataWrapper:(id)arg2 batchSize:(int)arg3;
- (id)evaluateWithModelURL:(id)arg1 dataSource:(id)arg2 error:(id*)arg3;
- (id)evaluationMetrics:(id)arg1 dataWrapper:(id)arg2 outputName:(id)arg3;
- (id)modelURL;
- (void)setModelURL:(id)arg1;

@end
