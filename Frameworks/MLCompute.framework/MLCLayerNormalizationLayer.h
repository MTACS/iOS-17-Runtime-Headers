
@interface MLCLayerNormalizationLayer : MLCLayer {
    MLCTensor * _beta;
    MLCTensorParameter * _betaParameter;
    MLCTensor * _gamma;
    MLCTensorParameter * _gammaParameter;
    NSArray * _normalizedShape;
    float  _varianceEpsilon;
}

@property (nonatomic, readonly, retain) MLCTensor *beta;
@property (nonatomic, readonly, retain) MLCTensorParameter *betaParameter;
@property (nonatomic, readonly, retain) MLCTensor *gamma;
@property (nonatomic, readonly, retain) MLCTensorParameter *gammaParameter;
@property (nonatomic, readonly, copy) NSArray *normalizedShape;
@property (nonatomic, readonly) float varianceEpsilon;

+ (id)layerWithNormalizedShape:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4;

- (void).cxx_destruct;
- (bool)allocateDataForOptimizer:(id)arg1;
- (unsigned long long)allocatedDataSizeForTraining:(bool)arg1 optimizer:(id)arg2;
- (id)beta;
- (id)betaParameter;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)gamma;
- (id)gammaParameter;
- (id)initWithNormalizedShape:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (bool)isValidTrainingParameters;
- (void)linkAssociatedTensors;
- (id)normalizedShape;
- (unsigned long long)parametersCount;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (id)summarizedDOTDescription;
- (void)unlinkAssociatedTensors;
- (float)varianceEpsilon;

@end
