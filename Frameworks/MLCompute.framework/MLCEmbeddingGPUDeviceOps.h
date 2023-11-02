
@interface MLCEmbeddingGPUDeviceOps : MLCGPUDeviceOps {
    NSArray * _embeddingParams;
    id  _gradientForWeights;
    NSNumber * _paddingIndex;
    bool  _scaleGradientByFrequency;
}

@property (nonatomic, copy) NSArray *embeddingParams;
@property (nonatomic, retain) id gradientForWeights;
@property (nonatomic, copy) NSNumber *paddingIndex;
@property (nonatomic) bool scaleGradientByFrequency;

+ (id)deviceOps;

- (void).cxx_destruct;
- (id)embeddingParams;
- (id)gradientForWeights;
- (id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2;
- (id)paddingIndex;
- (bool)scaleGradientByFrequency;
- (void)setEmbeddingParams:(id)arg1;
- (void)setGradientForWeights:(id)arg1;
- (void)setPaddingIndex:(id)arg1;
- (void)setScaleGradientByFrequency:(bool)arg1;

@end
