
@interface CLKUIMetalAtlas : CLKUIAtlas {
    NSObject<OS_dispatch_queue> * _loaderQueue;
    <MTLTexture> * _loaderQueue_prewarmedTexture;
    unsigned long long  _mainQueue_prewarmState;
    bool  _needsStreaming;
    <MTLTexture> * _nilTexture;
    unsigned long long  _numMipmapLevelsDropped;
    bool  _streaming;
    id /* block */  _streamingCompletionBlock;
    <MTLTexture> * _texture;
}

@property (nonatomic, readonly) <MTLTexture> *nilTexture;

+ (id)_allocateMTLTextureWithBacking:(id)arg1 numMipmapLevelsToDrop:(unsigned long long)arg2 device:(id)arg3;
+ (unsigned long long)_computeMTLTextureMemoryUsageWithBacking:(id)arg1 numMipmapLevelsToDrop:(unsigned long long)arg2;
+ (id)_createMTLTextureWithBacking:(id)arg1 numMipmapLevelsToDrop:(unsigned long long)arg2 device:(id)arg3 encoder:(id)arg4;
+ (id)_uploadMTLTexture:(id)arg1 withBacking:(id)arg2 numMipmapLevelsToDrop:(unsigned long long)arg3 device:(id)arg4 encoder:(id)arg5;

- (void).cxx_destruct;
- (void)bind:(id)arg1 slot:(unsigned long long)arg2;
- (void)dealloc;
- (void)finishPrewarm;
- (id)initWithUuid:(id)arg1 nilTexture:(id)arg2 streaming:(bool)arg3;
- (id)nilTexture;
- (void)prewarm;
- (void)purge;
- (void)updateTextureStreaming;

@end
