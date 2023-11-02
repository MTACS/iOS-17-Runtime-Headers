
@interface MLPSeqNetwork : MLPNetwork <MLPLearningRateDecayHandlerDelegate> {
    MLPLearningRateDecayHandler * _seqLearningRateDecayHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) MLPLearningRateDecayHandler *seqLearningRateDecayHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)computeInference:(id)arg1;
- (float)computeLoss:(id)arg1;
- (void)createLayerKernels;
- (void)decayHandler:(id)arg1 didUpdateLearningRate:(float)arg2;
- (id)initWithLayers:(id)arg1;
- (unsigned long long)runInference:(id)arg1 databatch:(id)arg2 inferredResult:(id)arg3 semaphore:(id)arg4;
- (void)runTraining:(id)arg1 databatch:(id)arg2 iteration:(unsigned long long)arg3 lossCallback:(id /* block */)arg4 semaphore:(id)arg5;
- (id)seqLearningRateDecayHandler;
- (void)setOptimizerParams:(id)arg1;
- (void)setSeqLearningRateDecayHandler:(id)arg1;

@end
