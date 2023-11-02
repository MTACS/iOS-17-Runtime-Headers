
@interface PUToggleCTMMediaProvider : PUEditableMediaProvider {
    PUMediaProvider * _mediaProvider;
    PUBrowsingViewModel * _viewModel;
}

@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (nonatomic, readonly) PUBrowsingViewModel *viewModel;

- (void).cxx_destruct;
- (id)_ctmImageResourceForAsset:(id)arg1;
- (id)_ctmPairedVideoResourceForAsset:(id)arg1;
- (id)_ctmVideoResourceForAsset:(id)arg1;
- (id)_imageWithSize:(struct CGSize { double x1; double x2; })arg1 string:(id)arg2;
- (id)_requestOptions;
- (id)_resourceOfType:(long long)arg1 forAsset:(id)arg2;
- (bool)_shouldToggleCTMForAsset:(id)arg1;
- (void)cancelImageRequest:(int)arg1;
- (id)initWithViewModel:(id)arg1 mediaProvider:(id)arg2;
- (id)mediaProvider;
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestAsynchronousVideoURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)viewModel;

@end
