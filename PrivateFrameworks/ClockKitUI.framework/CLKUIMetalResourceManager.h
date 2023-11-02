
@interface CLKUIMetalResourceManager : CLKUIResourceManager {
    <MTLDevice> * _device;
    <MTLTexture> * _nilTexture2D;
    <MTLTexture> * _nilTextureCube;
    NSObject<OS_dispatch_queue> * _textureStreamingQueue;
}

+ (void)addCompletedErrorCheckToCommandBuffer:(id)arg1 forCase:(id)arg2;
+ (void)setSynchronousTextureStreamingEnabled:(bool)arg1;
+ (id)sharedCommandQueue;
+ (id)sharedDevice;
+ (id)sharedMetalInstance;
+ (id)sharedNilTexture2D;
+ (id)sharedNilTextureCube;
+ (bool)synchronousTextureStreamingEnabled;
+ (id)textureStreamingQueue;

- (void).cxx_destruct;
- (id)_newAtlasForUuid:(id)arg1 nilTexture:(id)arg2 streaming:(bool)arg3;
- (id)_newAtlasForUuid:(id)arg1 nullTexture:(id)arg2 streaming:(bool)arg3;
- (void)_purgeAtlases:(id)arg1;
- (void)_updateTextureStreamingForAtlas:(id)arg1;
- (id)init;
- (id)nullAtlas2D;
- (id)nullAtlasCube;

@end
