
@interface MLNeuralNetworkMLComputeGraph : NSObject {
    bool  _classifierOutputIsSigmoidOutput;
    MLCDevice * _device;
    unsigned long long  _executionOptions;
    NSString * _fusedLayerInputName;
    MLCGraph * _graph;
    MLCInferenceGraph * _inferenceGraph;
    bool  _layerFusedToLoss;
    NSDictionary * _layersMap;
    NSDictionary * _mlcInputs;
    NSDictionary * _mlcLabels;
    MLModelDescription * _modelDescription;
    NSDictionary * _outputNameToLayerMap;
    MLCTrainingGraph * _trainingGraph;
}

@property (nonatomic) bool classifierOutputIsSigmoidOutput;
@property (nonatomic, retain) MLCDevice *device;
@property (nonatomic) unsigned long long executionOptions;
@property (nonatomic, retain) NSString *fusedLayerInputName;
@property (nonatomic, retain) MLCGraph *graph;
@property (nonatomic, retain) MLCInferenceGraph *inferenceGraph;
@property (nonatomic) bool layerFusedToLoss;
@property (nonatomic, retain) NSDictionary *layersMap;
@property (nonatomic, retain) NSDictionary *mlcInputs;
@property (nonatomic, retain) NSDictionary *mlcLabels;
@property (nonatomic, retain) MLModelDescription *modelDescription;
@property (nonatomic, readonly) NSDictionary *outputNameToLayerMap;
@property (nonatomic, retain) MLCTrainingGraph *trainingGraph;

+ (id)graphFromCompiledArchive:(void*)arg1 modelDescription:(id)arg2 batchSize:(unsigned long long)arg3 numberOfClasses:(unsigned long long)arg4 computeUnits:(long long)arg5 error:(id*)arg6;

- (void).cxx_destruct;
- (bool)buildGraphsFor:(void*)arg1 batchSize:(unsigned long long)arg2 numberOfClasses:(unsigned long long)arg3 error:(id*)arg4;
- (id)buildInferenceGraph:(id)arg1 updateParams:(const void*)arg2 layers:(const void*)arg3 mlcTensorByName:(id)arg4 outputNameToLayerMap:(id)arg5 error:(id*)arg6;
- (id)buildMLComputeTensorDescriptorWith:(id)arg1 featureName:(id)arg2 batchSize:(unsigned long long)arg3 numberOfClasses:(unsigned long long)arg4 error:(id*)arg5;
- (id)buildTrainingGraphFrom:(id)arg1 updateParams:(const void*)arg2 numberOfClasses:(unsigned long long)arg3 mlcTensorByName:(id)arg4 error:(id*)arg5;
- (bool)classifierOutputIsSigmoidOutput;
- (bool)copyWeightsFrom:(id)arg1 to:(void*)arg2 error:(id*)arg3;
- (id)createMultiArrayFromTensor:(id)arg1 error:(id*)arg2;
- (id)device;
- (unsigned long long)executionOptions;
- (id)fusedLayerInputName;
- (id)getBiasesForLayerNamed:(id)arg1 error:(id*)arg2;
- (id)getWeightsForLayerNamed:(id)arg1 error:(id*)arg2;
- (id)graph;
- (id)inferenceGraph;
- (id)initWithCompiledArchive:(void*)arg1 modelDescription:(id)arg2 batchSize:(unsigned long long)arg3 numberOfClasses:(unsigned long long)arg4 computeUnits:(long long)arg5 error:(id*)arg6;
- (id)inputTensorMapWithBatchSize:(unsigned long long)arg1 numberOfClasses:(unsigned long long)arg2 error:(id*)arg3;
- (id)labelTensorMapWithBatchSize:(unsigned long long)arg1 numberOfClasses:(unsigned long long)arg2 error:(id*)arg3;
- (bool)layerFusedToLoss;
- (id)layersMap;
- (id)lossInputsFromUpdateParams:(const void*)arg1;
- (int)mlcDeviceTypeForComputeUnit:(long long)arg1;
- (id)mlcInputs;
- (id)mlcLabels;
- (id)modelDescription;
- (id)outputNameToLayerMap;
- (bool)saveUpdatedWeightsTo:(void*)arg1 error:(id*)arg2;
- (void)setClassifierOutputIsSigmoidOutput:(bool)arg1;
- (void)setDevice:(id)arg1;
- (void)setExecutionOptions:(unsigned long long)arg1;
- (void)setFusedLayerInputName:(id)arg1;
- (void)setGraph:(id)arg1;
- (void)setInferenceGraph:(id)arg1;
- (void)setLayerFusedToLoss:(bool)arg1;
- (void)setLayersMap:(id)arg1;
- (void)setMlcInputs:(id)arg1;
- (void)setMlcLabels:(id)arg1;
- (void)setModelDescription:(id)arg1;
- (void)setTrainingGraph:(id)arg1;
- (id)trainingGraph;

@end
