
@interface MLPOptimizerSGD : MLPOptimizer {
    MPSVector * _momentum;
}

@property (retain) MPSVector *momentum;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3;
- (id)initWithNetwork:(id)arg1 momentum:(id /* block */)arg2;
- (id)momentum;
- (void)setMomentum:(id)arg1;
- (void)updateLearningRate:(float)arg1;

@end
