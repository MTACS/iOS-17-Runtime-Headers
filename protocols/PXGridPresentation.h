
@protocol PXGridPresentation <NSObject>

@optional

- (UIViewController *)createAlbumListViewControllerWithCollectionList:(PHCollectionList *)arg1;
- (PXPhotosUIViewController *)createAssetPickerPhotosAlbumViewControllerForAlbum:(PHAssetCollection *)arg1;
- (UIViewController *)createImportHistoryGridViewControllerWithCollection:(PHCollection *)arg1;
- (UIViewController *)createPanoramaViewController;
- (UIViewController *)createPhotosAlbumViewControllerForAlbum:(PHAssetCollection *)arg1 withFetchResult:(PHFetchResult *)arg2;
- (UIViewController *)createPlacesViewControllerForAssetCollection:(PHAssetCollection *)arg1;
- (UIViewController *)createViewControllerForAssetCollection:(PHAssetCollection *)arg1;
- (UIViewController *)createViewControllerForAssetCollection:(PHAssetCollection *)arg1 existingAssetsFetchResult:(PHFetchResult *)arg2;

@end
