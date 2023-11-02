
@protocol PXGTextureAtlasManager <NSObject>

@required

- (void)addSpriteWithTextureRequestID:(int)arg1 thumbnailData:(NSData *)arg2 size:(struct CGSize { double x1; double x2; })arg3 bytesPerRow:(unsigned long long)arg4 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)applyChangeDetails:(PXGChangeDetails *)arg1;
- (<PXGTextureAtlasManagerDelegate> *)delegate;
- (unsigned long long)pixelFormat;
- (void)processPendingThumbnailRequestIDsWithHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, unsigned int, id /* block */, int, unsigned int, unsigned int, void*
- (void)pruneUnusedTextures;
- (void)removeSpriteIndex:(unsigned int)arg1 atThumbnailIndex:(unsigned int)arg2;
- (void)setDelegate:(id <PXGTextureAtlasManagerDelegate>)arg1;
- (void)setSkipRenderSpriteIndexes:(NSIndexSet *)arg1;
- (void)setTextureConverter:(id <PXGTextureConverter>)arg1;
- (NSIndexSet *)skipRenderSpriteIndexes;
- (<PXGTextureConverter> *)textureConverter;
- (NSArray *)textures;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
