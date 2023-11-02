
@interface PhotosUIPrivate.ImageWellThumbnailProvider : NSObject <PUBrowsingSessionImageWellThumbnailProvider, PXAssetsDataSourceManagerObserver> {
    void dataSourceManager;
    void mediaProvider;
    void mediaProviderRequestIDsByRequestID;
    void nextAvailableRequestID;
    void startingAsset;
    void thumbnailRequests;
}

- (void).cxx_destruct;
- (void)cancelThumbnailRequest:(long long)arg1;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (long long)requestImageAndUUIDForStartingAssetFillingTargetSize:(struct CGSize { double x1; double x2; })arg1 resultHandler:(id /* block */)arg2;
- (long long)requestImageForStartingAssetFillingTargetSize:(struct CGSize { double x1; double x2; })arg1 resultHandler:(id /* block */)arg2;

@end
