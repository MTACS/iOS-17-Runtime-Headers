
@protocol PXGTextureProviderDelegate

@required

- (void)textureProvider:(PXGTextureProvider *)arg1 didProvideCGImage:(struct CGImage { }*)arg2 options:(struct { bool x1; float x2; bool x3; })arg3 adjustment:(id <PXGDisplayAssetAdjustment>)arg4 isDegraded:(bool)arg5 forRequestID:(int)arg6;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvideFailureWithError:(NSError *)arg2 forRequestID:(int)arg3;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvideImageData:(NSData *)arg2 withSpecAtIndex:(long long)arg3 size:(struct CGSize { double x1; double x2; })arg4 bytesPerRow:(unsigned long long)arg5 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 forRequestID:(int)arg7;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvideNothingForRequestID:(int)arg2;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvidePayload:(id <NSCopying>)arg2 forRequestID:(int)arg3;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvidePixelBuffer:(struct __CVBuffer { }*)arg2 options:(struct { bool x1; float x2; bool x3; })arg3 adjustment:(id <PXGDisplayAssetAdjustment>)arg4 forRequestID:(int)arg5;
- (void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(PXGTextureProvider *)arg1;
- (void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(PXGTextureProvider *)arg1;

@end
