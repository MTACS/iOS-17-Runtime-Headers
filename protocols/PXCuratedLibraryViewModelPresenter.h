
@protocol PXCuratedLibraryViewModelPresenter <NSObject>

@required

- (PXAssetCollectionReference *)viewModel:(PXCuratedLibraryViewModel *)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2;

@optional

- (void)viewModel:(PXCuratedLibraryViewModel *)arg1 didTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (long long)viewModel:(PXCuratedLibraryViewModel *)arg1 transitionTypeFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (void)viewModel:(PXCuratedLibraryViewModel *)arg1 willTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;

@end
