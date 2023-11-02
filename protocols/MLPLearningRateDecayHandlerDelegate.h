
@protocol MLPLearningRateDecayHandlerDelegate <NSObject>

@required

- (void)decayHandler:(MLPLearningRateDecayHandler *)arg1 didUpdateLearningRate:(float)arg2;

@end
