
@interface ADPearlColorInFieldCalibrationExecutorParameters : ADExecutorParameters {
    ADPearlColorInFieldCalibrationPipelineParameters * _pipelineParameters;
    bool  _reportTelemetry;
}

@property (nonatomic, readonly, retain) ADPearlColorInFieldCalibrationPipelineParameters *pipelineParameters;
@property (nonatomic) bool reportTelemetry;

- (void).cxx_destruct;
- (id)init;
- (id)initForPipeline:(id)arg1;
- (id)initWithPipelineParameters:(id)arg1;
- (id)pipelineParameters;
- (bool)reportTelemetry;
- (void)setReportTelemetry:(bool)arg1;

@end
