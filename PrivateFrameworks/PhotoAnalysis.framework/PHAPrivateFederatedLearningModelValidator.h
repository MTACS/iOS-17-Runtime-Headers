
@interface PHAPrivateFederatedLearningModelValidator : NSObject {
    NSURL * _espressoModelShapeURL;
    NSURL * _espressoModelURL;
}

@property (nonatomic, readonly) NSURL *espressoModelShapeURL;
@property (nonatomic, readonly) NSURL *espressoModelURL;

- (void).cxx_destruct;
- (id)_dictionaryForJSONFileURL:(id)arg1 error:(id*)arg2;
- (long long)_featureVectorSizeForFingerprintVersionName:(id)arg1 error:(id*)arg2;
- (bool)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4;
- (bool)_isFingerprintVersionSupported:(long long)arg1;
- (id)_layerConfigForLabelName:(id)arg1 modelConfig:(id)arg2 error:(id*)arg3;
- (id)_layerConfigForLayerName:(id)arg1 modelConfig:(id)arg2 error:(id*)arg3;
- (id)_layerConfigForModelInputName:(id)arg1 modelConfig:(id)arg2 error:(id*)arg3;
- (id)_layerConfigForModelOutputName:(id)arg1 modelConfig:(id)arg2 error:(id*)arg3;
- (id)_layerConfigForName:(id)arg1 modelConfig:(id)arg2 attributeName:(id)arg3 useEquality:(bool)arg4 error:(id*)arg5;
- (id)_sizeForLayerName:(id)arg1 modelShape:(id)arg2 error:(id*)arg3;
- (id)espressoModelShapeURL;
- (id)espressoModelURL;
- (id)initWithEspressoModelURL:(id)arg1 espressoModelShapeURL:(id)arg2;
- (bool)isValidWithFingerprintVersionName:(id)arg1 modelInputName:(id)arg2 modelOutputName:(id)arg3 labelName:(id)arg4 labelPolicyName:(id)arg5 lossName:(id)arg6 layersToTrain:(id)arg7 error:(id*)arg8;

@end
