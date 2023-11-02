
@interface TCModelTrainerBackendGraphs : NSObject {
    MLCInferenceGraph * _inferenceGraph;
    NSDictionary * _inferenceInputs;
    NSDictionary * _inferenceOutputs;
    NSDictionary * _layerWeights;
    MLCTrainingGraph * _trainingGraph;
    NSDictionary * _trainingInputs;
    NSDictionary * _trainingLossLabelWeights;
    NSDictionary * _trainingLossLabels;
    NSDictionary * _trainingOutputs;
}

@property (nonatomic, retain) MLCInferenceGraph *inferenceGraph;
@property (nonatomic, retain) NSDictionary *inferenceInputs;
@property (nonatomic, retain) NSDictionary *inferenceOutputs;
@property (nonatomic, retain) NSDictionary *layerWeights;
@property (nonatomic, retain) MLCTrainingGraph *trainingGraph;
@property (nonatomic, retain) NSDictionary *trainingInputs;
@property (nonatomic, retain) NSDictionary *trainingLossLabelWeights;
@property (nonatomic, retain) NSDictionary *trainingLossLabels;
@property (nonatomic, retain) NSDictionary *trainingOutputs;

- (void).cxx_destruct;
- (id)inferenceGraph;
- (id)inferenceInputs;
- (id)inferenceOutputs;
- (id)layerWeights;
- (void)setInferenceGraph:(id)arg1;
- (void)setInferenceInputs:(id)arg1;
- (void)setInferenceOutputs:(id)arg1;
- (void)setLayerWeights:(id)arg1;
- (void)setTrainingGraph:(id)arg1;
- (void)setTrainingInputs:(id)arg1;
- (void)setTrainingLossLabelWeights:(id)arg1;
- (void)setTrainingLossLabels:(id)arg1;
- (void)setTrainingOutputs:(id)arg1;
- (id)trainingGraph;
- (id)trainingInputs;
- (id)trainingLossLabelWeights;
- (id)trainingLossLabels;
- (id)trainingOutputs;

@end
