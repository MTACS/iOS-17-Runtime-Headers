
@interface PhotosUIPrivate.PUWallpaperShuffleConfigurationViewModel : NSObject <PXPassiveContentDataSourceChangeObserver, PXPassiveContentPeoplePickerDataSourceChangeObserver> {
    void $__lazy_storage_$_assetPreviewViewModel;
    void $__lazy_storage_$_peoplePickerDataSource;
    void $__lazy_storage_$_smartAlbumDataSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _availableSmartAlbums;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isFinishingWithFeaturedPhotos;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _selectedShuffleFrequencyType;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _selectedSmartAlbumsType;
    void availableShuffleFrequencies;
    void cancelHandler;
    void centerMedia;
    void contentMode;
    void finishHandler;
    void manualSelectionPhotoPickerHandler;
    void manuallySelectedAssetIdentifiers;
    void peoplePickerHandler;
    void photoLibrary;
    void posterConfiguration;
    void presentationState;
    void showAssetPreviews;
}

- (void).cxx_destruct;
- (id)init;
- (void)passiveContentDataSourceAvailableTypesDidChange:(id)arg1;
- (void)passiveContentDataSourcePreviewAssetsDidChange:(id)arg1;
- (void)passiveContentPeoplePickerDataSourceChanged:(id)arg1;

@end
