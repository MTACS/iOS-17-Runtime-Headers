
@interface PIParallaxInwardFillKernel : NUComputeKernel {
    <MTLTexture> * _sourceTexture;
}

@property (nonatomic, retain) <MTLTexture> *sourceTexture;

+ (void)fillSourceTexture:(id)arg1 intoDestinationTexture:(id)arg2 withCommandBuffer:(id)arg3;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg1 destinationTexture:(id)arg2;
- (void)setSourceTexture:(id)arg1;
- (id)sourceTexture;

@end
