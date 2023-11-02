
@interface _MLCGPUConvolutionTransposePadding : NSObject <MPSNNPadding> {
    unsigned long long  _bottomAmount;
    unsigned long long  _leftAmount;
    unsigned long long  _outputPaddingX;
    unsigned long long  _outputPaddingY;
    unsigned long long  _rightAmount;
    unsigned long long  _topAmount;
}

@property (nonatomic, readonly) unsigned long long bottomAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long leftAmount;
@property (nonatomic, readonly) unsigned long long outputPaddingX;
@property (nonatomic, readonly) unsigned long long outputPaddingY;
@property (nonatomic, readonly) unsigned long long rightAmount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long topAmount;

+ (id)convolutionTransposeZeroPaddingWithTopAmount:(unsigned long long)arg1 bottomAmount:(unsigned long long)arg2 leftAmount:(unsigned long long)arg3 rightAmount:(unsigned long long)arg4 outputPaddingX:(unsigned long long)arg5 outputPaddingY:(unsigned long long)arg6;
+ (bool)supportsSecureCoding;

- (unsigned long long)bottomAmount;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopAmount:(unsigned long long)arg1 bottomAmount:(unsigned long long)arg2 leftAmount:(unsigned long long)arg3 rightAmount:(unsigned long long)arg4 outputPaddingX:(unsigned long long)arg5 outputPaddingY:(unsigned long long)arg6;
- (unsigned long long)leftAmount;
- (unsigned long long)outputPaddingX;
- (unsigned long long)outputPaddingY;
- (unsigned long long)paddingMethod;
- (unsigned long long)rightAmount;
- (unsigned long long)topAmount;

@end
