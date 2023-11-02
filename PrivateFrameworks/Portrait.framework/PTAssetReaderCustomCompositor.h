
@interface PTAssetReaderCustomCompositor : NSObject <AVVideoCompositing>

@property (nonatomic, readonly) bool canConformColorOfSourceFrames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsHDRSourceFrames;
@property (nonatomic, readonly) bool supportsWideColorSourceFrames;

- (bool)canConformColorOfSourceFrames;
- (void)renderContextChanged:(id)arg1;
- (id)requiredPixelBufferAttributesForRenderContext;
- (id)sourcePixelBufferAttributes;
- (void)startVideoCompositionRequest:(id)arg1;
- (bool)supportsHDRSourceFrames;

@end
