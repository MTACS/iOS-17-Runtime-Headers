
@interface PUPXMediaProvider : PUMediaProvider {
    PXUIMediaProvider * _underlyingMediaProvider;
}

@property (nonatomic, readonly) PXUIMediaProvider *underlyingMediaProvider;

- (void).cxx_destruct;
- (void)cancelImageRequest:(int)arg1;
- (id)init;
- (id)initWithUnderlyingMediaProvider:(id)arg1;
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)underlyingMediaProvider;

@end
