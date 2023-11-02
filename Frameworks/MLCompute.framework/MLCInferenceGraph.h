
@interface MLCInferenceGraph : MLCGraph {
    unsigned long long  _inferenceNodeIndexInGraphLayerList;
    unsigned long long  _inferenceNodeInit;
}

@property (nonatomic, readonly) unsigned long long deviceMemorySize;
@property (nonatomic) unsigned long long inferenceNodeIndexInGraphLayerList;
@property (nonatomic) unsigned long long inferenceNodeInit;

+ (id)graphWithGraphObjects:(id)arg1;

- (bool)addInputs:(id)arg1;
- (bool)addInputs:(id)arg1 lossLabels:(id)arg2;
- (bool)addInputs:(id)arg1 lossLabels:(id)arg2 lossLabelWeights:(id)arg3;
- (bool)addOutputs:(id)arg1;
- (bool)compileWithOptions:(unsigned long long)arg1 device:(id)arg2;
- (bool)compileWithOptions:(unsigned long long)arg1 device:(id)arg2 inputTensors:(id)arg3 inputTensorsData:(id)arg4;
- (id)concatenateWithSources:(id)arg1 dimension:(unsigned long long)arg2;
- (id)description;
- (unsigned long long)deviceMemorySize;
- (bool)executeWithInputsData:(id)arg1 batchSize:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (bool)executeWithInputsData:(id)arg1 lossLabelsData:(id)arg2 lossLabelWeightsData:(id)arg3 batchSize:(unsigned long long)arg4 options:(unsigned long long)arg5 completionHandler:(id /* block */)arg6;
- (bool)executeWithInputsData:(id)arg1 lossLabelsData:(id)arg2 lossLabelWeightsData:(id)arg3 outputsData:(id)arg4 batchSize:(unsigned long long)arg5 options:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;
- (bool)executeWithInputsData:(id)arg1 outputsData:(id)arg2 batchSize:(unsigned long long)arg3 options:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (unsigned long long)inferenceNodeIndexInGraphLayerList;
- (unsigned long long)inferenceNodeInit;
- (id)initWithGraphObjects:(id)arg1;
- (bool)linkWithGraphs:(id)arg1;
- (id)nodeWithLayer:(id)arg1 source:(id)arg2;
- (id)nodeWithLayer:(id)arg1 sources:(id)arg2;
- (bool)recompileWithOptions:(unsigned long long)arg1;
- (id)reshapeWithShape:(id)arg1 source:(id)arg2;
- (id)resultTensorsForLayer:(id)arg1;
- (void)setInferenceNodeIndexInGraphLayerList:(unsigned long long)arg1;
- (void)setInferenceNodeInit:(unsigned long long)arg1;
- (id)sourceTensorsForLayer:(id)arg1;
- (id)splitWithSource:(id)arg1 splitCount:(unsigned long long)arg2 dimension:(unsigned long long)arg3;
- (id)splitWithSource:(id)arg1 splitSectionLengths:(id)arg2 dimension:(unsigned long long)arg3;
- (id)transposeWithDimensions:(id)arg1 source:(id)arg2;

@end
