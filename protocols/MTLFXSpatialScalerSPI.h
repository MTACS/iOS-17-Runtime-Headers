
@protocol MTLFXSpatialScalerSPI <MTLFXSpatialScaler>

@required

- (<MTLTexture> *)debugTexture;
- (void)encodeToCommandQueue:(id <MTLCommandQueue>)arg1;
- (void)setDebugTexture:(id <MTLTexture>)arg1;

@end
