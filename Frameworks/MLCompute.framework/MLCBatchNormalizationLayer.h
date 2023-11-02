
@interface MLCBatchNormalizationLayer : MLCLayer {
    MLCTensor * _beta;
    MLCTensorParameter * _betaParameter;
    unsigned long long  _featureChannelCount;
    MLCTensor * _gamma;
    MLCTensorParameter * _gammaParameter;
    MLCTensor * _mean;
    float  _momentum;
    MLCTensor * _variance;
    float  _varianceEpsilon;
}

@property (nonatomic, readonly, retain) MLCTensor *beta;
@property (nonatomic, readonly, retain) MLCTensorParameter *betaParameter;
@property (nonatomic, readonly) unsigned long long featureChannelCount;
@property (nonatomic, readonly, retain) MLCTensor *gamma;
@property (nonatomic, readonly, retain) MLCTensorParameter *gammaParameter;
@property (nonatomic, readonly, retain) MLCTensor *mean;
@property (nonatomic, readonly) float momentum;
@property (nonatomic, readonly, retain) MLCTensor *variance;
@property (nonatomic, readonly) float varianceEpsilon;

// Image: /System/Library/Frameworks/MLCompute.framework/MLCompute

+ (id)layerWithFeatureChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6;
+ (id)layerWithFeatureChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7;

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
- (id)initWithFeatureChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (bool)isValidTrainingParameters;
- (void)linkAssociatedTensors;
- (id)mean;
- (float)momentum;
- (unsigned long long)parametersCount;
- (id)summarizedDOTDescription;
- (void)unlinkAssociatedTensors;
- (id)variance;
- (float)varianceEpsilon;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)batchNormLayer:(const void*)arg1 error:(id*)arg2;

@end
