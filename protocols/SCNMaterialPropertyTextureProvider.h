
@protocol SCNMaterialPropertyTextureProvider <NSObject>

@optional

- (<MTLTexture> *)newTextureForDevice:(id <MTLDevice>)arg1;
- (void)renderToTexture:(void *)arg1 computeCommandHandler:(void *)arg2 blitCommandHandler:(void *)arg3 completionHandler:(void *)arg4 helper:(void *)arg5; // needs 5 arg types, found 35: <MTLTexture> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, <MTLComputeCommandEncoder> *, void*, void*, id /* block */, void*, void, id /* block */, id /* block */, void*, void, id /* block */, <MTLBlitCommandEncoder> *, void*, void*, id /* block */, void*, void, id /* block */, id /* block */, void*, void, id /* block */, <MTLCommandBuffer> *, void*, void*, <SCNMaterialPropertyTextureProviderHelper> *
- (void)renderToTexture:(void *)arg1 computeCommandHandler:(void *)arg2 blitCommandHandler:(void *)arg3 helper:(void *)arg4; // needs 4 arg types, found 24: <MTLTexture> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, <MTLComputeCommandEncoder> *, void*, void*, id /* block */, void*, void, id /* block */, id /* block */, void*, void, id /* block */, <MTLBlitCommandEncoder> *, void*, void*, <SCNMaterialPropertyTextureProviderHelper> *

@end
