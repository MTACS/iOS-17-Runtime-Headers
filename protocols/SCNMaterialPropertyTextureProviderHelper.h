
@protocol SCNMaterialPropertyTextureProviderHelper <NSObject>

@required

- (<MTLTexture> *)cachedTextureWithURL:(NSURL *)arg1 token:(id*)arg2;
- (<MTLTexture> *)cachedTextureWithURL:(NSURL *)arg1 token:(id*)arg2 didFallbackToDefaultTexture:(bool*)arg3;

@end
