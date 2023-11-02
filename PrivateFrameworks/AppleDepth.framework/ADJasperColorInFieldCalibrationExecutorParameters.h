
@interface ADJasperColorInFieldCalibrationExecutorParameters : ADExecutorParameters {
    ADJasperColorInFieldCalibrationPipelineParameters * _pipelineParameters;
    bool  _reportTelemetry;
}

@property (nonatomic, readonly, retain) ADJasperColorInFieldCalibrationPipelineParameters *pipelineParameters;
@property (nonatomic) bool reportTelemetry;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPipelineParameters:(id)arg1;
- (id)pipelineParameters;
- (bool)reportTelemetry;
- (void)setReportTelemetry:(bool)arg1;

@end
