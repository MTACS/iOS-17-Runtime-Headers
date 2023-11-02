
@interface _MLCANEPlistBuilder : NSObject {
    NSMutableDictionary * _plist;
    _MLCANEWeightOps * _weightOps;
    NSMutableSet * _weightTensorsWithDeviceMemory;
}

@property (nonatomic, readonly) NSMutableDictionary *plist;
@property (nonatomic, readonly) _MLCANEWeightOps *weightOps;
@property (nonatomic, readonly) NSMutableSet *weightTensorsWithDeviceMemory;

+ (id)buildBiasParamsWithBiases:(id)arg1;
+ (id)constantTensorWithShape:(id)arg1 data:(id)arg2 dataType:(int)arg3 tensorLabel:(id)arg4;
+ (int)createBroadcastUnitWithSourceTensor:(id)arg1 targetShape:(id)arg2 layer:(id)arg3 broadcastUnit:(id*)arg4 broadcastResultTensor:(id*)arg5;
+ (id)createConstantTensorUnitWithTensor:(id)arg1;
+ (id)createReshapeUnitWithSourceTensor:(id)arg1 layer:(id)arg2 resultShape:(id)arg3;
+ (bool)createReshapeUnitsWithLayer:(id)arg1 reshapeUnits:(id*)arg2 reshapeResultTensors:(id*)arg3;
+ (id)createUnitWithLayer:(id)arg1 unitParams:(id)arg2;

- (void).cxx_destruct;
- (bool)addConstantTensor:(id)arg1 toNetwork:(id)arg2;
- (bool)addInputs:(id)arg1 ofUnit:(id)arg2 ofOperation:(id)arg3 toProcedure:(id)arg4 toNetwork:(id)arg5;
- (bool)addOutputs:(id)arg1 ofOperation:(id)arg2 toProcedure:(id)arg3 toNetwork:(id)arg4;
- (bool)addScalesAndBiasesOfGocUnit:(id)arg1 tensorWithBiases:(id)arg2 tensorWithScales:(id)arg3;
- (bool)addUnitsAndInputsAndOutpusOfLayer:(id)arg1 toNetwork:(id)arg2 toProcedure:(id)arg3 operationName:(id)arg4 liveInputs:(id)arg5 liveOutputs:(id)arg6;
- (bool)addWeightsOfConvolutionLayer:(id)arg1;
- (bool)addWeightsOfFullyConnectedLayer:(id)arg1 toNetwork:(id)arg2;
- (bool)addWeightsOfLayer:(id)arg1 toNetwork:(id)arg2;
- (bool)addWeightsOfLayerNormalizationLayer:(id)arg1 toNetwork:(id)arg2;
- (bool)addWeightsOfNormalizationLayer:(id)arg1;
- (bool)buildProcedureWithLayer:(id)arg1;
- (bool)buildProcedureWithRootLayer:(id)arg1 aneSubgraphLayerList:(id)arg2 liveInputs:(id)arg3 liveOutputs:(id)arg4;
- (id)init;
- (id)plist;
- (bool)queryAndAddConstantTensors:(id)arg1 ofLayer:(id)arg2 toNetwork:(id)arg3;
- (void)releaseWeights;
- (void)unitBottomNamesWithSourceTensor:(id)arg1 liveInputs:(id)arg2 unitBottomNames:(id)arg3 sourceTensorsToLiveUp:(id)arg4;
- (id)weightOps;
- (id)weightTensorsWithDeviceMemory;

@end
