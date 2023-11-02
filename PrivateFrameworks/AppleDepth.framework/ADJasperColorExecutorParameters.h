
@interface ADJasperColorExecutorParameters : ADExecutorParameters {
    bool  _doComputeNormals;
    bool  _doTemporalConsistency;
    ADJasperColorPipelineParameters * _pipelineParameters;
    unsigned long long  _temporalConsistencyMethod;
    bool  _useAlphaMapForTemporalConsistency;
}

@property (nonatomic) bool doComputeNormals;
@property (nonatomic) bool doTemporalConsistency;
@property (nonatomic, readonly, retain) ADJasperColorPipelineParameters *pipelineParameters;
@property (nonatomic) unsigned long long temporalConsistencyMethod;
@property (nonatomic) bool useAlphaMapForTemporalConsistency;

- (void).cxx_destruct;
- (bool)doComputeNormals;
- (bool)doTemporalConsistency;
- (id)initForDevice:(id)arg1;
- (id)pipelineParameters;
- (void)setDoComputeNormals:(bool)arg1;
- (void)setDoTemporalConsistency:(bool)arg1;
- (void)setTemporalConsistencyMethod:(unsigned long long)arg1;
- (void)setUseAlphaMapForTemporalConsistency:(bool)arg1;
- (unsigned long long)temporalConsistencyMethod;
- (bool)useAlphaMapForTemporalConsistency;

@end
