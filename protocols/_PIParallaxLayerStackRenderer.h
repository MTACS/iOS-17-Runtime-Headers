
@protocol _PIParallaxLayerStackRenderer

@required

- (PFParallaxLayer *)layerForBuffer:(id <NUImageBuffer>)arg1 image:(CIImage *)arg2 zPosition:(double)arg3 identifier:(NSString *)arg4;
- (PFParallaxLayer *)layerForVideoData:(NSData *)arg1 zPosition:(double)arg2 identifier:(NSString *)arg3;
- (<NUImageBuffer> *)newRenderedPixelBufferFromImage:(CIImage *)arg1 hasAlpha:(bool)arg2 error:(out id*)arg3;

@end
