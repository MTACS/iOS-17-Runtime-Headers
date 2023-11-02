
@protocol MTLFXSpatialScaler <NSObject>

@required

- (long long)colorProcessingMode;
- (<MTLTexture> *)colorTexture;
- (unsigned long long)colorTextureFormat;
- (unsigned long long)colorTextureUsage;
- (void)encodeToCommandBuffer:(id <MTLCommandBuffer>)arg1;
- (<MTLFence> *)fence;
- (unsigned long long)inputContentHeight;
- (unsigned long long)inputContentWidth;
- (unsigned long long)inputHeight;
- (unsigned long long)inputWidth;
- (unsigned long long)outputHeight;
- (<MTLTexture> *)outputTexture;
- (unsigned long long)outputTextureFormat;
- (unsigned long long)outputTextureUsage;
- (unsigned long long)outputWidth;
- (void)setColorTexture:(id <MTLTexture>)arg1;
- (void)setFence:(id <MTLFence>)arg1;
- (void)setInputContentHeight:(unsigned long long)arg1;
- (void)setInputContentWidth:(unsigned long long)arg1;
- (void)setOutputTexture:(id <MTLTexture>)arg1;

@end
