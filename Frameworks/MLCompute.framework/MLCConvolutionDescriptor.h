
@interface MLCConvolutionDescriptor : NSObject <NSCopying> {
    int  _convolutionType;
    unsigned long long  _dilationRateInX;
    unsigned long long  _dilationRateInY;
    unsigned long long  _groupCount;
    unsigned long long  _inputFeatureChannelCount;
    unsigned long long  _kernelHeight;
    unsigned long long  _kernelWidth;
    unsigned long long  _outputFeatureChannelCount;
    int  _paddingPolicy;
    unsigned long long  _paddingSizeInX;
    unsigned long long  _paddingSizeInY;
    unsigned long long  _strideInX;
    unsigned long long  _strideInY;
}

@property (nonatomic, readonly) int convolutionType;
@property (nonatomic, readonly) unsigned long long dilationRateInX;
@property (nonatomic, readonly) unsigned long long dilationRateInY;
@property (nonatomic, readonly) unsigned long long groupCount;
@property (nonatomic, readonly) unsigned long long inputFeatureChannelCount;
@property (nonatomic, readonly) bool isConvolutionTranspose;
@property (nonatomic, readonly) unsigned long long kernelHeight;
@property (nonatomic, readonly) unsigned long long kernelWidth;
@property (nonatomic, readonly) unsigned long long outputFeatureChannelCount;
@property (nonatomic) int paddingPolicy;
@property (nonatomic) unsigned long long paddingSizeInX;
@property (nonatomic) unsigned long long paddingSizeInY;
@property (nonatomic, readonly) unsigned long long strideInX;
@property (nonatomic, readonly) unsigned long long strideInY;
@property (nonatomic, readonly) bool usesDepthwiseConvolution;

+ (id)convolutionTransposeDescriptorWithKernelSizes:(id)arg1 inputFeatureChannelCount:(unsigned long long)arg2 outputFeatureChannelCount:(unsigned long long)arg3 groupCount:(unsigned long long)arg4 strides:(id)arg5 dilationRates:(id)arg6 paddingPolicy:(int)arg7 paddingSizes:(id)arg8;
+ (id)convolutionTransposeDescriptorWithKernelSizes:(id)arg1 inputFeatureChannelCount:(unsigned long long)arg2 outputFeatureChannelCount:(unsigned long long)arg3 strides:(id)arg4 paddingPolicy:(int)arg5 paddingSizes:(id)arg6;
+ (id)convolutionTransposeDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannelCount:(unsigned long long)arg3 outputFeatureChannelCount:(unsigned long long)arg4;
+ (id)depthwiseConvolutionDescriptorWithKernelSizes:(id)arg1 inputFeatureChannelCount:(unsigned long long)arg2 channelMultiplier:(unsigned long long)arg3 strides:(id)arg4 dilationRates:(id)arg5 paddingPolicy:(int)arg6 paddingSizes:(id)arg7;
+ (id)depthwiseConvolutionDescriptorWithKernelSizes:(id)arg1 inputFeatureChannelCount:(unsigned long long)arg2 channelMultiplier:(unsigned long long)arg3 strides:(id)arg4 paddingPolicy:(int)arg5 paddingSizes:(id)arg6;
+ (id)depthwiseConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannelCount:(unsigned long long)arg3 channelMultiplier:(unsigned long long)arg4;
+ (id)descriptorWithKernelSizes:(id)arg1 inputFeatureChannelCount:(unsigned long long)arg2 outputFeatureChannelCount:(unsigned long long)arg3 groupCount:(unsigned long long)arg4 strides:(id)arg5 dilationRates:(id)arg6 paddingPolicy:(int)arg7 paddingSizes:(id)arg8;
+ (id)descriptorWithKernelSizes:(id)arg1 inputFeatureChannelCount:(unsigned long long)arg2 outputFeatureChannelCount:(unsigned long long)arg3 strides:(id)arg4 paddingPolicy:(int)arg5 paddingSizes:(id)arg6;
+ (id)descriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannelCount:(unsigned long long)arg3 outputFeatureChannelCount:(unsigned long long)arg4;
+ (id)descriptorWithType:(int)arg1 kernelSizes:(id)arg2 inputFeatureChannelCount:(unsigned long long)arg3 outputFeatureChannelCount:(unsigned long long)arg4 groupCount:(unsigned long long)arg5 strides:(id)arg6 dilationRates:(id)arg7 paddingPolicy:(int)arg8 paddingSizes:(id)arg9;

- (int)convolutionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)dilationRateInX;
- (unsigned long long)dilationRateInY;
- (unsigned long long)groupCount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(int)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 inputFeatureChannelCount:(unsigned long long)arg4 outputFeatureChannelCount:(unsigned long long)arg5 groupCount:(unsigned long long)arg6 strideInX:(unsigned long long)arg7 strideInY:(unsigned long long)arg8 dilationRateInX:(unsigned long long)arg9 dilationRateInY:(unsigned long long)arg10 paddingPolicy:(int)arg11 paddingSizeInX:(unsigned long long)arg12 paddingSizeInY:(unsigned long long)arg13;
- (unsigned long long)inputFeatureChannelCount;
- (bool)isConvolutionTranspose;
- (bool)isEqual:(id)arg1;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (unsigned long long)outputFeatureChannelCount;
- (int)paddingPolicy;
- (unsigned long long)paddingSizeInX;
- (unsigned long long)paddingSizeInY;
- (void)setPaddingPolicy:(int)arg1;
- (void)setPaddingSizeInX:(unsigned long long)arg1;
- (void)setPaddingSizeInY:(unsigned long long)arg1;
- (unsigned long long)strideInX;
- (unsigned long long)strideInY;
- (bool)usesDepthwiseConvolution;

@end
