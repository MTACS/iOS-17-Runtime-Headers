
@protocol PXGTextureConverter <NSObject>

@required

- (PXGImageTexture *)applyAdjustment:(id <PXGDisplayAssetAdjustment>)arg1 toTexture:(PXGImageTexture *)arg2 options:(struct { unsigned int x1; bool x2; })arg3;
- (PXGImageTexture *)createAtlasForTextureAtlasManager:(id <PXGTextureAtlasManager>)arg1;
- (PXGPayloadTexture *)createPayloadTextureFromPayload:(id <NSCopying>)arg1;
- (<PXGTextureAtlasManager> *)createTextureAtlasManagerForImageDataSpec:(struct { unsigned long long x1; struct __CFString {} *x2; unsigned short x3; unsigned short x4; })arg1 mipmapped:(bool)arg2;
- (PXGImageTexture *)createTextureFromCGImage:(void *)arg1 transform:(void *)arg2 alpha:(void *)arg3 options:(void *)arg4; // needs 4 arg types, found 3: struct CGImage { }*, float, struct { unsigned int x1; bool x2; }
- (PXGImageTexture *)createTextureFromCVPixelBuffer:(void *)arg1 transform:(void *)arg2 alpha:(void *)arg3 options:(void *)arg4 error:(void *)arg5; // needs 5 arg types, found 4: struct __CVBuffer { }*, float, struct { unsigned int x1; bool x2; }, id*
- (bool)lowMemoryMode;
- (unsigned char)presentationType;
- (NSObject<OS_dispatch_queue> *)processingQueue;
- (NSObject<OS_dispatch_queue> *)requestQueue;
- (void)setLowMemoryMode:(bool)arg1;
- (void)setProcessingQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setRequestQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (unsigned long long)supportedContentTypes;
- (PXGImageTexture *)transparentTexture;

@end
