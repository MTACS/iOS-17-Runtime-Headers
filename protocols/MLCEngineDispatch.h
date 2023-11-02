
@protocol MLCEngineDispatch <NSObject>

@required

- (void)dispatchForwardAndGradientLossLayer:(NSArray *)arg1 sourceTensor:(MLCTensor *)arg2 labelsTensor:(MLCTensor *)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(MLCTensor *)arg5 resultTensor:(MLCTensor *)arg6 resultGradientTensor:(MLCTensor *)arg7;
- (void)dispatchForwardCompareLayer:(NSArray *)arg1 sourceTensor:(MLCTensor *)arg2 secondaryTensor:(MLCTensor *)arg3 resultTensor:(MLCTensor *)arg4 compareOp:(int)arg5 forTraining:(bool)arg6;
- (void)dispatchForwardConcatLayer:(NSArray *)arg1 sourceTensors:(NSArray *)arg2 resultTensor:(MLCTensor *)arg3;
- (void)dispatchForwardEmbeddingLayer:(NSArray *)arg1 weight:(MLCTensor *)arg2 sourceTensor:(MLCTensor *)arg3 resultTensor:(MLCTensor *)arg4;
- (void)dispatchForwardFullyConnectedLayer:(NSArray *)arg1 sourceTensor:(MLCTensor *)arg2 resultTensor:(MLCTensor *)arg3 forTraining:(bool)arg4;
- (void)dispatchForwardFusedArithmeticLayerNormalizationLayer:(NSArray *)arg1 sourceTensors:(NSArray *)arg2 resultTensor:(MLCTensor *)arg3 forTraining:(bool)arg4;
- (void)dispatchForwardGatherLayer:(NSArray *)arg1 sourceTensors:(NSArray *)arg2 resultTensor:(MLCTensor *)arg3 forTraining:(bool)arg4;
- (void)dispatchForwardLayer:(NSArray *)arg1 sourceTensor:(MLCTensor *)arg2 resultTensor:(MLCTensor *)arg3 resultStateIsTemporary:(bool)arg4 forTraining:(bool)arg5;
- (void)dispatchForwardLayer:(NSArray *)arg1 sourceTensor:(MLCTensor *)arg2 secondaryTensor:(MLCTensor *)arg3 tertiaryTensor:(MLCTensor *)arg4 resultTensor:(MLCTensor *)arg5 resultStateIsTemporary:(bool)arg6 forTraining:(bool)arg7;
- (void)dispatchForwardLossLayer:(NSArray *)arg1 sourceTensor:(MLCTensor *)arg2 labelsTensor:(MLCTensor *)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(MLCTensor *)arg5 resultTensor:(MLCTensor *)arg6 resultStateIsTemporary:(bool)arg7 forTraining:(bool)arg8;
- (void)dispatchForwardMHALayer:(NSArray *)arg1 sourceTensors:(NSArray *)arg2 resultTensor:(MLCTensor *)arg3 resultStateIsTemporary:(bool)arg4 forTraining:(bool)arg5;
- (void)dispatchForwardMatMulLayer:(NSArray *)arg1 sourceTensors:(NSArray *)arg2 resultTensor:(MLCTensor *)arg3;
- (void)dispatchForwardReduceLayer:(NSArray *)arg1 sourceTensor:(MLCTensor *)arg2 resultTensor:(MLCTensor *)arg3 reductionType:(int)arg4 reduceDimensions:(NSArray *)arg5 forTraining:(bool)arg6;
- (void)dispatchForwardReshapeLayer:(NSArray *)arg1 sourceTensor:(MLCTensor *)arg2 resultTensor:(MLCTensor *)arg3 resultStateIsTemporary:(bool)arg4 forTraining:(bool)arg5;
- (void)dispatchForwardScatterLayer:(NSArray *)arg1 sourceTensors:(NSArray *)arg2 resultTensor:(MLCTensor *)arg3 forTraining:(bool)arg4;
- (void)dispatchForwardSelectLayer:(NSArray *)arg1 conditionTensor:(MLCTensor *)arg2 sourceTensors:(NSArray *)arg3 resultTensor:(MLCTensor *)arg4 forTraining:(bool)arg5;
- (void)dispatchForwardSliceLayer:(NSArray *)arg1 sourceTensor:(MLCTensor *)arg2 resultTensor:(MLCTensor *)arg3 forTraining:(bool)arg4;
- (void)dispatchForwardSplitLayer:(NSArray *)arg1 sourceTensor:(MLCTensor *)arg2 resultTensors:(NSArray *)arg3;
- (void)dispatchGradientConcatLayer:(NSArray *)arg1 sourceGradientTensor:(MLCTensor *)arg2 resultGradientTensors:(NSArray *)arg3;
- (void)dispatchGradientEmbeddingLayer:(NSArray *)arg1 sourceGradientTensor:(MLCTensor *)arg2;
- (void)dispatchGradientFullyConnectedLayer:(NSArray *)arg1 sourceGradientTensor:(MLCTensor *)arg2 resultGradientTensor:(MLCTensor *)arg3 resultStateIsTemporary:(bool)arg4;
- (void)dispatchGradientLayer:(NSArray *)arg1 sourceGradientTensor:(MLCTensor *)arg2 resultGradientTensor:(MLCTensor *)arg3;
- (void)dispatchGradientLayer:(NSArray *)arg1 sourceGradientTensor:(MLCTensor *)arg2 resultGradientTensor:(MLCTensor *)arg3 secondaryResultGradientTensor:(MLCTensor *)arg4;
- (void)dispatchGradientLossLayer:(NSArray *)arg1 sourceGradientTensor:(MLCTensor *)arg2 labelsTensor:(MLCTensor *)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(MLCTensor *)arg5 resultGradientTensor:(MLCTensor *)arg6;
- (void)dispatchGradientMHALayer:(NSArray *)arg1 sourceGradientTensor:(MLCTensor *)arg2 resultGradientTensors:(NSArray *)arg3 resultStateIsTemporary:(bool)arg4;
- (void)dispatchGradientMatMulLayer:(NSArray *)arg1 sourceGradientTensor:(MLCTensor *)arg2 resultGradientTensors:(NSArray *)arg3;
- (void)dispatchGradientReduceLayer:(NSArray *)arg1 sourceGradientTensor:(MLCTensor *)arg2 resultGradientTensor:(MLCTensor *)arg3 reductionType:(int)arg4 reduceDimensions:(NSArray *)arg5;
- (void)dispatchGradientReshapeLayer:(NSArray *)arg1 sourceGradientTensor:(MLCTensor *)arg2 resultGradientTensor:(MLCTensor *)arg3;
- (void)dispatchGradientSelectLayer:(NSArray *)arg1 conditionTensor:(MLCTensor *)arg2 sourceGradientTensor:(MLCTensor *)arg3 resultGradientTensors:(NSArray *)arg4;
- (void)dispatchGradientSliceLayer:(NSArray *)arg1 sourceGradientTensor:(MLCTensor *)arg2 resultGradientTensor:(MLCTensor *)arg3;
- (void)dispatchGradientSplitLayer:(NSArray *)arg1 sourceGradientTensors:(NSArray *)arg2 resultGradientTensor:(MLCTensor *)arg3;
- (void)dispatchRNNForwardLayer:(NSArray *)arg1 sourceTensors:(NSArray *)arg2 resultTensors:(NSArray *)arg3;
- (void)dispatchRNNForwardLayer:(NSArray *)arg1 sourceTensors:(NSArray *)arg2 resultTensors:(NSArray *)arg3 resultStateIsTemporary:(bool)arg4 forTraining:(bool)arg5;
- (void)dispatchRNNGradientLayer:(NSArray *)arg1 sourceGradientTensors:(NSArray *)arg2 resultGradientTensors:(NSArray *)arg3;
- (void)incrementReadCountForGradientState:(NSArray *)arg1 increment:(long long)arg2;
- (void)incrementReadCountForTensorDeviceMemory:(NSArray *)arg1 increment:(long long)arg2;
- (void)optimizeComputationForTrainingGraph:(NSArray *)arg1;

@optional

- (void)dispatchForwardLayer:(NSArray *)arg1;
- (NSArray *)partitionInferenceGraph:(MLCInferenceGraph *)arg1 startAtLayerIndex:(unsigned long long)arg2 aneDevice:(MLCDevice *)arg3 secondaryDevice:(MLCDevice *)arg4;

@end
