
@protocol MTLFXTemporalScaler <NSObject>

@required

- (<MTLTexture> *)colorTexture;
- (unsigned long long)colorTextureFormat;
- (unsigned long long)colorTextureUsage;
- (<MTLTexture> *)depthTexture;
- (unsigned long long)depthTextureFormat;
- (unsigned long long)depthTextureUsage;
- (void)encodeToCommandBuffer:(id <MTLCommandBuffer>)arg1;
- (<MTLTexture> *)exposureTexture;
- (<MTLFence> *)fence;
- (unsigned long long)inputContentHeight;
- (float)inputContentMaxScale;
- (float)inputContentMinScale;
- (unsigned long long)inputContentWidth;
- (unsigned long long)inputHeight;
- (unsigned long long)inputWidth;
- (bool)isDepthReversed;
- (float)jitterOffsetX;
- (float)jitterOffsetY;
- (<MTLTexture> *)motionTexture;
- (unsigned long long)motionTextureFormat;
- (unsigned long long)motionTextureUsage;
- (float)motionVectorScaleX;
- (float)motionVectorScaleY;
- (unsigned long long)outputHeight;
- (<MTLTexture> *)outputTexture;
- (unsigned long long)outputTextureFormat;
- (unsigned long long)outputTextureUsage;
- (unsigned long long)outputWidth;
- (float)preExposure;
- (bool)reset;
- (void)setColorTexture:(id <MTLTexture>)arg1;
- (void)setDepthReversed:(bool)arg1;
- (void)setDepthTexture:(id <MTLTexture>)arg1;
- (void)setExposureTexture:(id <MTLTexture>)arg1;
- (void)setFence:(id <MTLFence>)arg1;
- (void)setInputContentHeight:(unsigned long long)arg1;
- (void)setInputContentWidth:(unsigned long long)arg1;
- (void)setJitterOffsetX:(float)arg1;
- (void)setJitterOffsetY:(float)arg1;
- (void)setMotionTexture:(id <MTLTexture>)arg1;
- (void)setMotionVectorScaleX:(float)arg1;
- (void)setMotionVectorScaleY:(float)arg1;
- (void)setOutputTexture:(id <MTLTexture>)arg1;
- (void)setPreExposure:(float)arg1;
- (void)setReset:(bool)arg1;

@end
