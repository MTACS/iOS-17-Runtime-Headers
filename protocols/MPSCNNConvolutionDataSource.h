
@protocol MPSCNNConvolutionDataSource <NSCopying, NSObject>

@required

- (float*)biasTerms;
- (unsigned int)dataType;
- (MPSCNNConvolutionDescriptor *)descriptor;
- (NSString *)label;
- (bool)load;
- (void)purge;
- (void*)weights;

@optional

- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id <MTLDevice>)arg2;
- (unsigned int)kernelWeightsDataType;
- (float*)lookupTableForUInt8Kernel;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)rangesForUInt8Kernel;
- (MPSCNNConvolutionWeightsAndBiasesState *)updateWithCommandBuffer:(id <MTLCommandBuffer>)arg1 gradientState:(MPSCNNConvolutionGradientState *)arg2 sourceState:(MPSCNNConvolutionWeightsAndBiasesState *)arg3;
- (bool)updateWithGradientState:(MPSCNNConvolutionGradientState *)arg1 sourceState:(MPSCNNConvolutionWeightsAndBiasesState *)arg2;
- (unsigned int)weightsLayout;
- (unsigned int)weightsQuantizationType;

@end
