
@interface BWMattingInferenceConfiguration : BWInferenceConfiguration {
    float  _mainImageDownscalingFactor;
    <MTLCommandQueue> * _metalCommandQueue;
    bool  _refinedDepthDeliveryEnabled;
    NSDictionary * _sdofRenderingTuningParameters;
}

@property (nonatomic) float mainImageDownscalingFactor;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;
@property (nonatomic) bool refinedDepthDeliveryEnabled;
@property (nonatomic, retain) NSDictionary *sdofRenderingTuningParameters;

- (void)dealloc;
- (float)mainImageDownscalingFactor;
- (id)metalCommandQueue;
- (bool)refinedDepthDeliveryEnabled;
- (id)sdofRenderingTuningParameters;
- (void)setMainImageDownscalingFactor:(float)arg1;
- (void)setMetalCommandQueue:(id)arg1;
- (void)setRefinedDepthDeliveryEnabled:(bool)arg1;
- (void)setSdofRenderingTuningParameters:(id)arg1;

@end
