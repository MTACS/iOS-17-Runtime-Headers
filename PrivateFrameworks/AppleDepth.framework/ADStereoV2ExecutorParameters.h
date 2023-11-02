
@interface ADStereoV2ExecutorParameters : ADExecutorParameters {
    ADStereoV2PipelineParameters * _pipelineParameters;
    bool  _temporalConsistencyActive;
    float  _temporalSmoothingCurrentFeaturesRatioMin;
    float  _temporalSmoothingPreviousFeaturesRatioMin;
}

@property (nonatomic, readonly, retain) ADStereoV2PipelineParameters *pipelineParameters;
@property (nonatomic) bool temporalConsistencyActive;
@property (nonatomic) float temporalSmoothingCurrentFeaturesRatioMin;
@property (nonatomic) float temporalSmoothingPreviousFeaturesRatioMin;

- (void).cxx_destruct;
- (id)initForDevice:(id)arg1;
- (id)pipelineParameters;
- (void)setTemporalConsistencyActive:(bool)arg1;
- (void)setTemporalSmoothingCurrentFeaturesRatioMin:(float)arg1;
- (void)setTemporalSmoothingPreviousFeaturesRatioMin:(float)arg1;
- (bool)temporalConsistencyActive;
- (float)temporalSmoothingCurrentFeaturesRatioMin;
- (float)temporalSmoothingPreviousFeaturesRatioMin;

@end
