
@interface PVVideoCompositingExporter : PVVideoCompositing

- (id)init;
- (id)preferredDestinationPixelBufferFormat;
- (id)requiredPixelBufferAttributesForRenderContext;
- (void)setupEffectScheduler;
- (void)setupTextureFactories;

@end
