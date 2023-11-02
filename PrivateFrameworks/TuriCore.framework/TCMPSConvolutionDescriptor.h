
@interface TCMPSConvolutionDescriptor : NSObject {
    unsigned long long  _inputFeatureChannels;
    unsigned long long  _kernelHeight;
    unsigned long long  _kernelWidth;
    NSString * _label;
    unsigned long long  _outputFeatureChannels;
    unsigned long long  _paddingHeight;
    unsigned long long  _paddingWidth;
    unsigned long long  _strideHeight;
    unsigned long long  _strideWidth;
    bool  _updateWeights;
}

@property (nonatomic) unsigned long long inputFeatureChannels;
@property (nonatomic) unsigned long long kernelHeight;
@property (nonatomic) unsigned long long kernelWidth;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long outputFeatureChannels;
@property (nonatomic) unsigned long long paddingHeight;
@property (nonatomic) unsigned long long paddingWidth;
@property (nonatomic) unsigned long long strideHeight;
@property (nonatomic) unsigned long long strideWidth;
@property (nonatomic) bool updateWeights;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)inputFeatureChannels;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (id)label;
- (unsigned long long)outputFeatureChannels;
- (unsigned long long)paddingHeight;
- (unsigned long long)paddingWidth;
- (void)setInputFeatureChannels:(unsigned long long)arg1;
- (void)setKernelHeight:(unsigned long long)arg1;
- (void)setKernelWidth:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setOutputFeatureChannels:(unsigned long long)arg1;
- (void)setPaddingHeight:(unsigned long long)arg1;
- (void)setPaddingWidth:(unsigned long long)arg1;
- (void)setStrideHeight:(unsigned long long)arg1;
- (void)setStrideWidth:(unsigned long long)arg1;
- (void)setUpdateWeights:(bool)arg1;
- (unsigned long long)strideHeight;
- (unsigned long long)strideWidth;
- (bool)updateWeights;

@end
