
@interface TransferSeqTagMLFHelper : NSObject {
    NSDictionary * _trainingParameters;
}

@property (readonly, copy) NSDictionary *trainingParameters;

- (id)createConvLayerFromData:(unsigned long long)arg1 width:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 outputChannels:(unsigned long long)arg4 strideInX:(unsigned long long)arg5 strideInY:(unsigned long long)arg6 kernelWeight:(id)arg7 kernelBias:(id)arg8;
- (id)createConvLayerWithKernelHeight:(unsigned long long)arg1 width:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 outputChannels:(unsigned long long)arg4 strideInX:(unsigned long long)arg5 strideInY:(unsigned long long)arg6;
- (id)createDataWithFloatValue:(float)arg1 count:(unsigned long long)arg2;
- (id)createFullyConnectedLayer:(unsigned long long)arg1 outputSize:(unsigned long long)arg2;
- (id)createFullyConnectedLayerFromData:(unsigned long long)arg1 outputSize:(unsigned long long)arg2 weightData:(id)arg3 biasData:(id)arg4;
- (void)createGraphObjectAndLayersFromInputPlaceholders:(void*)arg1 scalarWeights:(void*)arg2 labelSize:(unsigned long long)arg3 embeddingDimension:(long long)arg4 graphObject:(id)arg5 graphLayerList:(void*)arg6;
- (id)createGraphObjectFromLayers:(void*)arg1 graphObject:(id)arg2 inputPlaceholders:(void*)arg3;
- (id)createInferenceGraphFromGraphObject:(id)arg1 inputPlaceholders:(void*)arg2 scalarWeights:(void*)arg3 finalLayerTensor:(id)arg4 device:(id)arg5;
- (id)createLSTM:(unsigned long long)arg1 outputSize:(unsigned long long)arg2;
- (id)createLSTMFromWeights:(unsigned long long)arg1 outputSize:(unsigned long long)arg2 inputWeights:(id)arg3 hiddenWeights:(id)arg4 biasTerms:(id)arg5;
- (id)createNSDataWithFloatValue:(float)arg1 count:(unsigned long long)arg2;
- (id)createTrainingGraphFromGraphObject:(id)arg1 inputPlaceholders:(void*)arg2 scalarWeights:(void*)arg3 targetLabels:(id)arg4 targeLabelWeights:(id)arg5 device:(id)arg6;
- (void)dealloc;
- (struct __CFDictionary { }*)doSeqTagTrainingAndEvalFromData:(void*)arg1 batchedLabels:(void*)arg2 batchedPaddedLabelDatasets:(void*)arg3 labelArray:(void*)arg4 embeddingRef:(void*)arg5 modeLayerList:(void*)arg6 trainingGraph:(id)arg7 inferenceGraph:(id)arg8 scalarParams:(void*)arg9 inputPlaceholders:(void*)arg10 targetLabelPlaceholders:(id)arg11 targetLabelWeightsPlaceholders:(id)arg12 trainingLogger:(id /* block */)arg13;
- (void)evaluateInferenceGraphWithInputTensorData:(void*)arg1 batchedInputSentences:(void*)arg2 batchedLabels:(void*)arg3 inferenceGraph:(id)arg4 inputPlaceholders:(void*)arg5 scalarParams:(void*)arg6 labelArray:(void*)arg7 dataTypeString:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg8 trainingLogger:(id /* block */)arg9 predictedLabels:(void*)arg10;
- (float)evaluateMontrealModelOnData:(void*)arg1 evalLabels:(void*)arg2 evalEmbeddingsCache:(void*)arg3 embeddingRef:(void*)arg4 montrealModel:(void*)arg5 labelArray:(void*)arg6 trainingLogger:(id /* block */)arg7 dataTypeString:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg8 predictedLabels:(void*)arg9;
- (void)executeInferenceGraph:(id)arg1 inputsDictionary:(id)arg2 batchSize:(int)arg3 maxLength:(int)arg4 labelSize:(int)arg5 predictedLabels:(void*)arg6;
- (id)findMaxIndexWithData:(id)arg1 batchSize:(unsigned long long)arg2 sequenceLength:(unsigned long long)arg3 numClasses:(unsigned long long)arg4;
- (void)flattenBatchOfOneHotSequences:(void*)arg1 flattenedBatch:(void*)arg2;
- (void)getEmbeddingsForSequenceData:(void*)arg1 batchSize:(int)arg2 maxLength:(int)arg3 embeddingRef:(void*)arg4 inputTensorDataItems:(void*)arg5;
- (void)getInputEmbeddingsAndTargetTensorsForSequenceData:(void*)arg1 seqLabels:(void*)arg2 batchSize:(int)arg3 maxLength:(int)arg4 numClasses:(int)arg5 embeddingRef:(void*)arg6 inputTensorDataItems:(void*)arg7 targetTensorData:(id*)arg8 targetWeightTensorData:(id*)arg9;
- (void)getMaxIndicesFromOneHotVectors:(void*)arg1 maxIndicesBatch:(void*)arg2;
- (id)getModelLayerWeights:(struct vector<void *, std::allocator<void *>> { void **x1; void **x2; struct __compressed_pair<void **, std::allocator<void *>> { void **x_3_1_1; } x3; })arg1;
- (void)getNSSequenceFromStdSequence:(void*)arg1 nsSentences:(id)arg2 nsSeqLengths:(id)arg3 maxLength:(int)arg4;
- (id)initWithTraininingParameters:(id)arg1;
- (void)labelIdsToString:(void*)arg1 labelArray:(void*)arg2 labelStrings:(void*)arg3;
- (bool)loadModelLayersFromWeights:(id)arg1 labelSize:(unsigned long long)arg2 embeddingDimension:(long long)arg3 modelLayers:(void*)arg4;
- (void)printLstmWeights:(id)arg1;
- (void)removeBatchingFromDataAndLabels:(void*)arg1 batchedLabels:(void*)arg2 inputSentences:(void*)arg3 inputLabels:(void*)arg4 maxLength:(int)arg5;
- (float)showF1ResultsMatrix:(void*)arg1 labelCounts:(struct map<int, int, std::less<int>, std::allocator<std::pair<const int, int>>> { struct __tree<std::__value_type<int, int>, std::__map_value_compare<int, std::__value_type<int, int>, std::less<int>>, std::allocator<std::__value_type<int, int>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, int>, std::less<int>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg2 perLabelResults:(void*)arg3 trainingLogger:(id /* block */)arg4 dataTypeString:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg5;
- (void)trainAndSaveSeqTagModelFromData:(void*)arg1 batchedLabels:(void*)arg2 labelArray:(void*)arg3 embeddingRef:(void*)arg4 trainedModelDict:(struct __CFDictionary {}**)arg5 trainingLogger:(id /* block */)arg6;
- (id)trainingParameters;

@end
