
@interface MLPCNNNetwork : MLPNetwork

- (id)computeInference:(id)arg1;
- (float)computeLoss:(id)arg1;
- (void)createLayerKernels;
- (id)initWithLayers:(id)arg1;
- (unsigned long long)runInference:(id)arg1 databatch:(id)arg2 inferredResult:(id)arg3 semaphore:(id)arg4;
- (void)runTraining:(id)arg1 databatch:(id)arg2 iteration:(unsigned long long)arg3 lossCallback:(id /* block */)arg4 semaphore:(id)arg5;
- (void)setOptimizerParams:(id)arg1;

@end
