
@protocol PXGTextureAtlasManagerDelegate <NSObject>

@required

- (bool)textureAtlasManagerShouldPruneUnusedTextures:(id <PXGTextureAtlasManager>)arg1;

@end
