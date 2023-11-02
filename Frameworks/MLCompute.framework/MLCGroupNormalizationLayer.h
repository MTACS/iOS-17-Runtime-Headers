
@interface MLCGroupNormalizationLayer : MLCLayer {
    MLCTensor * _beta;
    MLCTensorParameter * _betaParameter;
    unsigned long long  _featureChannelCount;
    MLCTensor * _gamma;
    MLCTensorParameter * _gammaParameter;
    unsigned long long  _groupCount;
    float  _varianceEpsilon;
}

@property (nonatomic, readonly, retain) MLCTensor *beta;
@property (nonatomic, readonly, retain) MLCTensorParameter *betaParameter;
@property (nonatomic, readonly) unsigned long long featureChannelCount;
@property (nonatomic, readonly, retain) MLCTensor *gamma;
@property (nonatomic, readonly, retain) MLCTensorParameter *gammaParameter;
@property (nonatomic, readonly) unsigned long long groupCount;
@property (nonatomic, readonly) float varianceEpsilon;

+ (id)layerWithFeatureChannelCount:(unsigned long long)arg1 groupCount:(unsigned long long)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5;

- (void).cxx_destruct;
- (bool)allocateDataForOptimizer:(id)arg1;
- (unsigned long long)allocatedDataSizeForTraining:(bool)arg1 optimizer:(id)arg2;
- (id)beta;
- (id)betaParameter;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (unsigned long long)featureChannelCount;
- (id)gamma;
- (id)gammaParameter;
- (unsigned long long)groupCount;
- (id)initWithFeatureChannelCount:(unsigned long long)arg1 groupCount:(unsigned long long)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (bool)isValidTrainingParameters;
- (void)linkAssociatedTensors;
- (unsigned long long)parametersCount;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (id)summarizedDOTDescription;
- (void)unlinkAssociatedTensors;
- (float)varianceEpsilon;

@end
