
@protocol PXGMetalTextureConverterDelegate <NSObject>

@required

- (void)metalTextureConverter:(PXGMetalTextureConverter *)arg1 didCreateTexture:(id <PXGMetalSpriteTexture>)arg2 options:(struct { unsigned int x1; bool x2; })arg3;

@end
