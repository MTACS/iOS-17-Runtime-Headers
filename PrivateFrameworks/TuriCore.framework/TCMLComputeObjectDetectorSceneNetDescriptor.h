
@interface TCMLComputeObjectDetectorSceneNetDescriptor : NSObject {
    MLCTensor * _classificationOutput;
    MLCTensor * _labelClass;
    MLCTensor * _labelConfidence;
    MLCTensor * _labelCoordinates;
    MLCTensor * _localizationOutput;
    MLCTensor * _lossResultTensor;
    unsigned long long  _numAnchorBoxes;
    unsigned long long  _numClasses;
    MLCTensor * _sceneNetInput1;
    MLCTensor * _sceneNetInput2;
    MLCTensor * _softmaxOutput;
    NSDictionary * _weights;
    MLCTensor * _weightsClass;
    MLCTensor * _weightsCoordinates;
}

@property (nonatomic, retain) MLCTensor *classificationOutput;
@property (nonatomic, retain) MLCTensor *labelClass;
@property (nonatomic, retain) MLCTensor *labelConfidence;
@property (nonatomic, retain) MLCTensor *labelCoordinates;
@property (nonatomic, retain) MLCTensor *localizationOutput;
@property (nonatomic, retain) MLCTensor *lossResultTensor;
@property (nonatomic) unsigned long long numAnchorBoxes;
@property (nonatomic) unsigned long long numClasses;
@property (nonatomic, retain) MLCTensor *sceneNetInput1;
@property (nonatomic, retain) MLCTensor *sceneNetInput2;
@property (nonatomic, retain) MLCTensor *softmaxOutput;
@property (nonatomic, retain) NSDictionary *weights;
@property (nonatomic, retain) MLCTensor *weightsClass;
@property (nonatomic, retain) MLCTensor *weightsCoordinates;

- (void).cxx_destruct;
- (id)addCommonFPNLayersWithWeight:(id)arg1 bias:(id)arg2 headType:(id)arg3 scale:(unsigned long long)arg4 source:(id)arg5 graph:(id)arg6;
- (id)addHeadWithWeight:(id)arg1 bias:(id)arg2 outputChannels:(unsigned long long)arg3 source:(id)arg4 graph:(id)arg5;
- (id)addInitialConvLayerForScale:(unsigned long long)arg1 source:(id)arg2 graph:(id)arg3;
- (id)addReluBatchNormWithWeightPrefix:(id)arg1 source:(id)arg2 graph:(id)arg3;
- (id)classificationOutput;
- (void)defineGraph:(id)arg1 batchSize:(unsigned long long)arg2;
- (bool)isComplete;
- (id)labelClass;
- (id)labelConfidence;
- (id)labelCoordinates;
- (id)localizationOutput;
- (id)lossResultTensor;
- (unsigned long long)numAnchorBoxes;
- (unsigned long long)numClasses;
- (id)sceneNetInput1;
- (id)sceneNetInput2;
- (void)setClassificationOutput:(id)arg1;
- (void)setLabelClass:(id)arg1;
- (void)setLabelConfidence:(id)arg1;
- (void)setLabelCoordinates:(id)arg1;
- (void)setLocalizationOutput:(id)arg1;
- (void)setLossResultTensor:(id)arg1;
- (void)setNumAnchorBoxes:(unsigned long long)arg1;
- (void)setNumClasses:(unsigned long long)arg1;
- (void)setSceneNetInput1:(id)arg1;
- (void)setSceneNetInput2:(id)arg1;
- (void)setSoftmaxOutput:(id)arg1;
- (void)setWeights:(id)arg1;
- (void)setWeightsClass:(id)arg1;
- (void)setWeightsCoordinates:(id)arg1;
- (id)softmaxOutput;
- (id)weights;
- (id)weightsClass;
- (id)weightsCoordinates;

@end
