
@interface PXGColorGradingTexturesStore : NSObject {
    NSCache * _cachedTextures;
    PXGMetalRenderContext * _metalRenderContext;
    PXGColorLookupCube * _placeholderCube;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)colorGradingTextureStoreForContext:(id)arg1;

- (void).cxx_destruct;
- (void)_createPlaceholderCube;
- (id)colorGradingTextureWithColorLookupCube:(id)arg1;
- (id)init;
- (id)initWithMetalContext:(id)arg1;

@end
