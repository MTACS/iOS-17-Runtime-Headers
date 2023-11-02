
@interface ARPersonOcclusionParentTechnique : ARParentTechnique <ARTechniqueDelegate> {
    ARTechnique<ARMLDepthDataSourceProvider> * _depthTechnique;
    <ARTechniqueForwardingStrategy> * _depthTechniqueProcessingStrategy;
    bool  _detectedPerson;
    double  _lastDetectedPersonTimeStamp;
    long long  _optimizationStrategy;
    NSHashTable * _personDetectionTechniques;
    struct __CVBuffer { } * _placeholderDepthBuffer;
    ARTechnique * _primaryPersonDetectionTechnique;
    bool  _shouldSkipFramesWhenBusy;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <ARTechniqueForwardingStrategy> *depthTechniqueProcessingStrategy;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long optimizationStrategy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)depthTechniqueProcessingStrategy;
- (id)initWithTechniques:(id)arg1 delegate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)optimizationStrategy;
- (id)processData:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)setDepthTechniqueProcessingStrategy:(id)arg1;
- (void)setOptimizationStrategy:(long long)arg1;
- (void)setTechniques:(id)arg1;
- (void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4;
- (id)techniquesToRunWithForwardedDepth:(bool)arg1;
- (void)updatePersonDetectionTechniques;
- (void)updatePrimaryPersonDetectionTechnique;

@end
