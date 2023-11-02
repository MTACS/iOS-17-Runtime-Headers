
@interface MLPLearningRateDecayHandler : NSObject {
    float  _decayRate;
    unsigned long long  _decaySteps;
    float  _decayedLearningRate;
    <MLPLearningRateDecayHandlerDelegate> * _delegate;
    unsigned long long  _globalSteps;
    float  _learningRate;
    bool  _stairCase;
}

@property (readonly) float decayRate;
@property (readonly) unsigned long long decaySteps;
@property float decayedLearningRate;
@property <MLPLearningRateDecayHandlerDelegate> *delegate;
@property unsigned long long globalSteps;
@property (readonly) float learningRate;
@property (readonly) bool stairCase;

- (void).cxx_destruct;
- (float)decayRate;
- (unsigned long long)decaySteps;
- (float)decayedLearningRate;
- (id)delegate;
- (unsigned long long)globalSteps;
- (id)initWithLearningRate:(float)arg1 decaySteps:(unsigned long long)arg2 decayRate:(float)arg3 stairCase:(bool)arg4;
- (float)learningRate;
- (void)setDecayedLearningRate:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGlobalSteps:(unsigned long long)arg1;
- (bool)stairCase;
- (void)updateGlobalStep;

@end
