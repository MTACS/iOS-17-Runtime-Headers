
@interface PXPhotoKitVideoContentProvider : PXDisplayAssetVideoContentProvider <PXPhotoLibraryUIChangeObserver> {
    PHFetchResult * _fetchResult;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 deliveryStrategies:(id)arg3 audioSession:(id)arg4 requestURLOnly:(bool)arg5;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;

@end
