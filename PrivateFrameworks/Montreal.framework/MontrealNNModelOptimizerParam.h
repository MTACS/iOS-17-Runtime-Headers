
@interface MontrealNNModelOptimizerParam : MontrealNNDescription <MontrealNNDescriptionProtocol> {
    NSNumber * _gradientClipMax;
    NSNumber * _gradientClipMin;
    float  _learningRate;
    float  _momentum;
    unsigned long long  _optimizerType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSNumber *gradientClipMax;
@property (readonly) NSNumber *gradientClipMin;
@property (readonly) unsigned long long hash;
@property (readonly) float learningRate;
@property (readonly) float momentum;
@property (readonly) unsigned long long optimizerType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)gradientClipMax;
- (id)gradientClipMin;
- (id)initWithDictionary:(id)arg1;
- (id)initWithOptimizerType:(unsigned long long)arg1 learningRate:(float)arg2 momentum:(float)arg3 gradientClipMin:(id)arg4 gradientClipMax:(id)arg5;
- (float)learningRate;
- (float)momentum;
- (unsigned long long)optimizerType;

@end
