
@interface MLPOptimizerAdam : MLPOptimizer {
    MPSVector * _momentum;
    MPSVector * _velocity;
}

@property (retain) MPSVector *momentum;
@property (retain) MPSVector *velocity;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3;
- (id)initWithNetwork:(id)arg1 momentum:(id /* block */)arg2 velocity:(id /* block */)arg3;
- (id)momentum;
- (void)setMomentum:(id)arg1;
- (void)setVelocity:(id)arg1;
- (id)velocity;

@end
