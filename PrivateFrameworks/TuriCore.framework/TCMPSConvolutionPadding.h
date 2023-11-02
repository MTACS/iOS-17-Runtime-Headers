
@interface TCMPSConvolutionPadding : NSObject <MPSNNPadding> {
    unsigned long long  _paddingHeight;
    unsigned long long  _paddingWidth;
    unsigned long long  _strideHeight;
    unsigned long long  _strideWidth;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long paddingHeight;
@property (nonatomic) unsigned long long paddingWidth;
@property (nonatomic) unsigned long long strideHeight;
@property (nonatomic) unsigned long long strideWidth;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParams:(unsigned long long)arg1 paddingHeight:(unsigned long long)arg2 strideWidth:(unsigned long long)arg3 strideHeight:(unsigned long long)arg4;
- (unsigned long long)paddingHeight;
- (unsigned long long)paddingMethod;
- (unsigned long long)paddingWidth;
- (void)setPaddingHeight:(unsigned long long)arg1;
- (void)setPaddingWidth:(unsigned long long)arg1;
- (void)setStrideHeight:(unsigned long long)arg1;
- (void)setStrideWidth:(unsigned long long)arg1;
- (unsigned long long)strideHeight;
- (unsigned long long)strideWidth;

@end
