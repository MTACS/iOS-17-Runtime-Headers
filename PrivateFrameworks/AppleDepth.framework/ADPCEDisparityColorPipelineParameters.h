
@interface ADPCEDisparityColorPipelineParameters : ADPipelineParameters {
    float  _disparityScaleForModelZoom;
    float  _maxDisparity;
    float  _minDisparity;
    float  _outputDisparityBias;
    float  _pceBias;
    unsigned long long  _trainingWidth;
}

@property (nonatomic) float disparityScaleForModelZoom;
@property (nonatomic) float maxDisparity;
@property (nonatomic) float minDisparity;
@property (nonatomic) float outputDisparityBias;
@property (nonatomic) float pceBias;
@property (nonatomic) unsigned long long trainingWidth;

- (float)disparityScaleForModelZoom;
- (id)init;
- (float)maxDisparity;
- (float)minDisparity;
- (float)outputDisparityBias;
- (float)pceBias;
- (void)setDisparityScaleForModelZoom:(float)arg1;
- (void)setMaxDisparity:(float)arg1;
- (void)setMinDisparity:(float)arg1;
- (void)setOutputDisparityBias:(float)arg1;
- (void)setPceBias:(float)arg1;
- (void)setTrainingWidth:(unsigned long long)arg1;
- (unsigned long long)trainingWidth;

@end
