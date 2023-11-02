
@interface PUWrappingPXMediaProvider : PXMediaProvider {
    PUMediaProvider * _wrappedMediaProvider;
}

@property (nonatomic, readonly) PUMediaProvider *wrappedMediaProvider;

- (void).cxx_destruct;
- (void)cancelImageRequest:(long long)arg1;
- (id)initWithWrappedMediaProvider:(id)arg1;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)wrappedMediaProvider;

@end
