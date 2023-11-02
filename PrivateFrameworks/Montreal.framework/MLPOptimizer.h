
@interface MLPOptimizer : NSObject {
    MPSNNOptimizer * _mpsOptimizer;
    MLPNetwork * _network;
}

@property (readonly) MPSNNOptimizer *mpsOptimizer;
@property (readonly) MLPNetwork *network;

+ (id)optimizerWithNetwork:(id)arg1 momentum:(id /* block */)arg2 velocity:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientMatrix:(id)arg2 inputValuesMatrix:(id)arg3;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3;
- (id)initWithNetwork:(id)arg1 mpsOptimizer:(id)arg2;
- (id)mpsOptimizer;
- (id)network;
- (void)updateLearningRate:(float)arg1;

@end
