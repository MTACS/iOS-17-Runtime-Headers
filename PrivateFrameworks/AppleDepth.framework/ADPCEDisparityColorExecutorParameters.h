
@interface ADPCEDisparityColorExecutorParameters : ADExecutorParameters {
    unsigned short  _disparityInvalidValue;
    bool  _disparityPostprocessingActive;
    bool  _disparityPreprocessingActive;
    long long  _disparityRotation;
    ADPCEDisparityColorPipelineParameters * _pipelineParameters;
    bool  _temporalConsistencyActive;
}

@property (nonatomic) unsigned short disparityInvalidValue;
@property (nonatomic) bool disparityPostprocessingActive;
@property (nonatomic) bool disparityPreprocessingActive;
@property (nonatomic) long long disparityRotation;
@property (nonatomic, readonly, retain) ADPCEDisparityColorPipelineParameters *pipelineParameters;
@property (nonatomic) bool temporalConsistencyActive;

- (void).cxx_destruct;
- (unsigned short)disparityInvalidValue;
- (bool)disparityPostprocessingActive;
- (bool)disparityPreprocessingActive;
- (long long)disparityRotation;
- (id)initForInputSource:(unsigned long long)arg1;
- (id)initForPipelineParameters:(id)arg1 inputSource:(unsigned long long)arg2;
- (id)pipelineParameters;
- (void)setDisparityInvalidValue:(unsigned short)arg1;
- (void)setDisparityPostprocessingActive:(bool)arg1;
- (void)setDisparityPreprocessingActive:(bool)arg1;
- (void)setDisparityRotation:(long long)arg1;
- (void)setTemporalConsistencyActive:(bool)arg1;
- (bool)temporalConsistencyActive;

@end
