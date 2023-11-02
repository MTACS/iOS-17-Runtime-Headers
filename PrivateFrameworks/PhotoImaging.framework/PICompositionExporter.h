
@interface PICompositionExporter : NSObject

+ (bool)_lowMemoryModeSupportedForComposition:(id)arg1 pixelSize:(struct { long long x1; long long x2; })arg2;
+ (id)metadataConverter;
+ (id)resetImageProperties:(id)arg1 preserveRegions:(bool)arg2;
+ (void)setMetadataConverter:(id)arg1;

- (void)_exportVideoToURL:(id)arg1 composition:(id)arg2 options:(id)arg3 properties:(id)arg4 progress:(id)arg5 completion:(id /* block */)arg6;
- (id)addImageProperties:(id)arg1 composition:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)addVideoProperties:(id)arg1 composition:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)exportComposition:(id)arg1 options:(id)arg2 completionQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)exportComposition:(id)arg1 toPrimaryURL:(id)arg2 videoComplementURL:(id)arg3 videoPosterFrameURL:(id)arg4 priority:(id)arg5 completionQueue:(id)arg6 completion:(id /* block */)arg7;
- (void)exportImageToDataWithComposition:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)exportImageToURL:(id)arg1 composition:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)exportVideoToURL:(id)arg1 composition:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (void)prepareAuxiliaryImagesFetchProperties:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)prepareImageExportRequest:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)variationForFlavor:(id)arg1;

@end
