
@interface LPApplePhotosMetadataProviderSpecialization : LPMetadataProviderSpecialization <PXPhotoLibraryUIChangeObserver> {
    PHFetchResult * _anyAssetFetch;
    bool  _cancelled;
    PHFetchResult * _keyAssetFetch;
    LPApplePhotosMomentMetadata * _metadata;
    int  _pendingImageRequest;
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (void)completeWithMetadata:(id)arg1;
- (void)dealloc;
- (void)didFetchAsset:(id)arg1;
- (void)fail;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)start;

@end
