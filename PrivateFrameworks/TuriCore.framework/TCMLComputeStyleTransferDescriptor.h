
@interface TCMLComputeStyleTransferDescriptor : NSObject {
    NSArray * _contentStrength;
    MLCTensor * _contentTensor;
    NSDictionary * _descriptors;
    MLCTensor * _inferenceContentTensor;
    MLCTensor * _inferencePixelScaleTensor;
    MLCTensor * _meanTensor;
    MLCTensor * _pixelScaleTensor;
    MLCTensor * _styleLossWeightTensor;
    NSArray * _styleStrength;
    MLCTensor * _styleTensor;
    MLCTensor * _varianceTensor;
    NSDictionary * _weights;
}

@property (nonatomic, retain) NSArray *contentStrength;
@property (nonatomic, retain) MLCTensor *contentTensor;
@property (nonatomic, retain) NSDictionary *descriptors;
@property (nonatomic, retain) MLCTensor *inferenceContentTensor;
@property (nonatomic, retain) MLCTensor *inferencePixelScaleTensor;
@property (nonatomic, retain) MLCTensor *meanTensor;
@property (nonatomic, retain) MLCTensor *pixelScaleTensor;
@property (nonatomic, retain) MLCTensor *styleLossWeightTensor;
@property (nonatomic, retain) NSArray *styleStrength;
@property (nonatomic, retain) MLCTensor *styleTensor;
@property (nonatomic, retain) MLCTensor *varianceTensor;
@property (nonatomic, retain) NSDictionary *weights;

+ (void)convolutionLayerDescriptor:(id)arg1 normPrefix:(id)arg2 descriptorDictionary:(id*)arg3 kernelSize:(unsigned long long)arg4 strideSize:(unsigned long long)arg5 inputChannels:(unsigned long long)arg6 outputChannels:(unsigned long long)arg7 upsampleType:(int)arg8;
+ (id)defineVGG16Block1Descriptor:(id)arg1 inputChannels:(unsigned long long)arg2 outputChannels:(unsigned long long)arg3;
+ (id)defineVGG16Block2Descriptor:(id)arg1 inputChannels:(unsigned long long)arg2 outputChannels:(unsigned long long)arg3;
+ (id)defineVGG16Descriptor:(id)arg1;
+ (void)residualDescriptor:(id)arg1 normPrefix:(id)arg2 inputChannels:(unsigned long long)arg3 outputChannels:(unsigned long long)arg4 descriptorDictionary:(id*)arg5;
+ (id)styleNetDescriptor:(id)arg1 algorithmType:(int)arg2;

- (void).cxx_destruct;
- (id)contentStrength;
- (id)contentTensor;
- (id)descriptors;
- (id)inferenceContentTensor;
- (id)inferencePixelScaleTensor;
- (id)initTrain:(bool)arg1 algorithmType:(int)arg2;
- (bool)isComplete;
- (id)meanTensor;
- (id)pixelScaleTensor;
- (void)setContentStrength:(id)arg1;
- (void)setContentTensor:(id)arg1;
- (void)setDescriptors:(id)arg1;
- (void)setInferenceContentTensor:(id)arg1;
- (void)setInferencePixelScaleTensor:(id)arg1;
- (void)setMeanTensor:(id)arg1;
- (void)setPixelScaleTensor:(id)arg1;
- (void)setStyleLossWeightTensor:(id)arg1;
- (void)setStyleStrength:(id)arg1;
- (void)setStyleTensor:(id)arg1;
- (void)setVarianceTensor:(id)arg1;
- (void)setWeights:(id)arg1;
- (id)styleLossWeightTensor;
- (id)styleStrength;
- (id)styleTensor;
- (id)varianceTensor;
- (id)weights;

@end
