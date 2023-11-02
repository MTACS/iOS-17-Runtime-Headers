
@interface ETOptimizerDefSGD : ETOptimizerDef {
    float  _lr;
    float  _lr_decay_epoch;
    float  _momentum;
    float  _weight_decay;
}

@property float lr;
@property float lr_decay_epoch;
@property float momentum;
@property float weight_decay;

- (id)init;
- (float)lr;
- (float)lr_decay_epoch;
- (float)momentum;
- (void)setLr:(float)arg1;
- (void)setLr_decay_epoch:(float)arg1;
- (void)setMomentum:(float)arg1;
- (void)setWeight_decay:(float)arg1;
- (float)weight_decay;

@end
