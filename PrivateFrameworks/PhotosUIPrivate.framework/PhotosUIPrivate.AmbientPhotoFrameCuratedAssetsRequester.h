
@interface PhotosUIPrivate.AmbientPhotoFrameCuratedAssetsRequester : NSObject <PXPassiveContentDataSourceChangeObserver, PXPassiveContentPeoplePickerDataSourceChangeObserver> {
    void $__lazy_storage_$_peoplePickerDataSource;
    void $__lazy_storage_$_smartAlbumDataSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  assetsContinuation;
    void maxAssets;
    void photoLibrary;
    void randomSeed;
    void restrictToSmartAlbumTypes;
}

- (void).cxx_destruct;
- (id)init;
- (void)passiveContentDataSourceAvailableTypesDidChange:(id)arg1;
- (void)passiveContentDataSourcePreviewAssetsDidChange:(id)arg1;
- (void)passiveContentPeoplePickerDataSourceChanged:(id)arg1;

@end
