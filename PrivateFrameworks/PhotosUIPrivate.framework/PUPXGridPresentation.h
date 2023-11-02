
@interface PUPXGridPresentation : NSObject <PXGridPresentation> {
    PHPhotoLibrary * _photoLibrary;
    PUSessionInfo * _sessionInfo;
    long long  _userInterfaceIdiom;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) PUSessionInfo *sessionInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long userInterfaceIdiom;

- (void).cxx_destruct;
- (void)_customizePhotosViewConfiguationForAssetPicker:(id)arg1 assetCollection:(id)arg2;
- (bool)_isEmpty:(id)arg1;
- (id)createAlbumListViewControllerWithCollectionList:(id)arg1;
- (id)createAlbumListViewControllerWithConfiguration:(id)arg1;
- (id)createAssetPickerPhotosAlbumViewControllerForAlbum:(id)arg1;
- (id)createDuplicatesGridViewControllerWithCollection:(id)arg1;
- (id)createImportHistoryGridViewControllerWithCollection:(id)arg1;
- (id)createPanoramaViewController;
- (id)createPhotosAlbumViewControllerForAlbum:(id)arg1 withFetchResult:(id)arg2;
- (id)createPlacesViewControllerForAssetCollection:(id)arg1;
- (id)createSharedAlbumListViewControllerWithConfiguration:(id)arg1;
- (id)createViewControllerForAssetCollection:(id)arg1;
- (id)createViewControllerForAssetCollection:(id)arg1 existingAssetsFetchResult:(id)arg2;
- (id)init;
- (id)initWithUserInterfaceIdiom:(long long)arg1;
- (id)photoLibrary;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (long long)userInterfaceIdiom;

@end
