
@interface PXGMetalTextureAtlasManager : NSObject <PXGMetalTextureAtlasDelegate, PXGTextureAtlasManager> {
    NSArray * _atlasTextures;
    unsigned int  _capacityPerAtlas;
    PXGColorProgram * _colorProgram;
    <PXGTextureAtlasManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _layoutQueue;
    PXGMetalRenderContext * _metalRenderContext;
    bool  _mipmapped;
    unsigned long long  _pixelFormat;
    NSObject<OS_dispatch_queue> * _requestQueue;
    NSIndexSet * _skipRenderSpriteIndexes;
    NSObject<OS_dispatch_queue> * _syncQueue;
    <PXGTextureConverter> * _textureConverter;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
}

@property (copy) NSArray *atlasTextures;
@property (nonatomic, readonly) unsigned int capacityPerAtlas;
@property (nonatomic, readonly) PXGColorProgram *colorProgram;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGTextureAtlasManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *layoutQueue;
@property (nonatomic) bool mipmapped;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, retain) NSIndexSet *skipRenderSpriteIndexes;
@property (readonly) Class superclass;
@property (nonatomic) <PXGTextureConverter> *textureConverter;
@property (nonatomic, readonly, copy) NSArray *textures;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbnailSize;

- (void).cxx_destruct;
- (void)_getAtlas:(id*)arg1 localThumbnailIndex:(unsigned int*)arg2 forGlobalThumbnailIndex:(unsigned int)arg3;
- (void)_requestQueue_getNextAvailableAtlas:(id*)arg1 thumbnailOffset:(unsigned int*)arg2;
- (void)_updateAtlasSpriteIndexSkips;
- (void)addSpriteWithTextureRequestID:(int)arg1 thumbnailData:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 bytesPerRow:(unsigned long long)arg4 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)applyChangeDetails:(id)arg1;
- (id)atlasTextures;
- (unsigned int)capacityPerAtlas;
- (id)colorProgram;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithThumbnailSize:(struct CGSize { double x1; double x2; })arg1 pixelFormat:(unsigned long long)arg2 capacityPerAtlas:(unsigned int)arg3 mipmapped:(bool)arg4 requestQueue:(id)arg5 layoutQueue:(id)arg6 colorProgram:(id)arg7 context:(id)arg8;
- (id)layoutQueue;
- (bool)mipmapped;
- (unsigned long long)pixelFormat;
- (void)processPendingThumbnailRequestIDsWithHandler:(id /* block */)arg1;
- (void)pruneUnusedTextures;
- (void)removeSpriteIndex:(unsigned int)arg1 atThumbnailIndex:(unsigned int)arg2;
- (void)setAtlasTextures:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMipmapped:(bool)arg1;
- (void)setSkipRenderSpriteIndexes:(id)arg1;
- (void)setTextureConverter:(id)arg1;
- (id)skipRenderSpriteIndexes;
- (void)textureAtlasDidBecomeUnused:(id)arg1;
- (id)textureConverter;
- (id)textures;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
