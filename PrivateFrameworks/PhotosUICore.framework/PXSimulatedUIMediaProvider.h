
@interface PXSimulatedUIMediaProvider : NSObject {
    PXUIMediaProvider * _mediaProvider;
}

@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;

+ (id)defaultMediaProviderWithMediaProvider:(id)arg1;

- (void).cxx_destruct;
- (id)_simulatedMediaRequestWithOriginalOptions:(id)arg1 simulatedResultHandler:(id /* block */)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithMediaProvider:(id)arg1;
- (id)mediaProvider;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;

@end
