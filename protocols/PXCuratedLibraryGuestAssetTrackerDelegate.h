
@protocol PXCuratedLibraryGuestAssetTrackerDelegate <NSObject>

@required

- (void)guestAssetsTracker:(PXCuratedLibraryGuestAssetTracker *)arg1 canDisplayGuestAssets:(bool)arg2;
- (void)guestAssetsTracker:(PXCuratedLibraryGuestAssetTracker *)arg1 isDisplayingGuestAssets:(bool)arg2;

@end
