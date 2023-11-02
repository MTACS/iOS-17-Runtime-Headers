
@interface PXGMetalOffscreenTexturesStore : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _queue_aliveTextures;
    <MTLDevice> * _queue_device;
    NSMutableSet * _queue_loadedTextures;
    unsigned long long  _queue_pixelFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _queue_renderSize;
    long long  _queue_sampleCount;
    NSMutableSet * _queue_usedTextures;
}

- (void).cxx_destruct;
- (id)_queue_checkoutOffscreenTexture;
- (id)_queue_loadTexture;
- (void)_queue_preloadTexturesCount:(long long)arg1;
- (void)_queue_removeAllTextures;
- (void)_queue_willRenderFrameWithDevice:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 sampleCount:(long long)arg3 pixelFormat:(unsigned long long)arg4 preloadTexturesCount:(long long)arg5;
- (id)checkoutOffscreenTexture;
- (id)init;
- (void)removeAllTextures;
- (void)willRenderFrameWithDevice:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 sampleCount:(long long)arg3 pixelFormat:(unsigned long long)arg4 preloadTexturesCount:(long long)arg5;

@end
