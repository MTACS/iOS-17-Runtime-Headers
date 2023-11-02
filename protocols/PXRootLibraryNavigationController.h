
@protocol PXRootLibraryNavigationController <NSObject, PLCloudFeedNavigating, PXProgrammaticNavigationParticipant>

@required

- (bool)albumIsAvailableForNavigation:(NSObject<PLAlbumProtocol> *)arg1;
- (bool)assetIsAvailableForNavigation:(PLManagedAsset *)arg1 inAlbum:(NSObject<PLAlbumProtocol> *)arg2;
- (bool)cloudFeedIsAvailableForNavigation;
- (bool)commentIsAvailableForNavigation:(PLCloudSharedComment *)arg1 inAsset:(PLManagedAsset *)arg2;
- (bool)contentModeIsAvailableForNavigation:(int)arg1;
- (void)navigateToAlbum:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSObject<PLAlbumProtocol> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToAsset:(PLManagedAsset *)arg1 inAlbum:(NSObject<PLAlbumProtocol> *)arg2 animated:(bool)arg3;
- (void)navigateToCloudFeedAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLManagedAsset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToCloudFeedComment:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLCloudSharedComment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToCloudFeedWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToComment:(PLCloudSharedComment *)arg1 forAsset:(PLManagedAsset *)arg2 animated:(bool)arg3;
- (void)navigateToContentMode:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: int, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)navigateToFeaturedPhotoWithSuggestionIdentifier:(NSString *)arg1 animated:(bool)arg2;
- (void)navigateToInvitationCMMWithIdentifier:(NSString *)arg1 animated:(bool)arg2;
- (void)navigateToOneYearAgoSearch;
- (void)navigateToPeopleAlbumAnimated:(void *)arg1 revealPersonWithLocalIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToPlacesAlbumAnimated:(bool)arg1;
- (void)navigateToRevealAlbum:(NSObject<PLAlbumProtocol> *)arg1 initiallyHidden:(bool)arg2 animated:(bool)arg3;
- (void)navigateToRevealAsset:(PLManagedAsset *)arg1 inAlbum:(NSObject<PLAlbumProtocol> *)arg2 animated:(bool)arg3;
- (void)navigateToRevealCloudFeedAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLManagedAsset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToRevealCloudFeedComment:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLCloudSharedComment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToRevealCloudFeedInvitationForAlbum:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLCloudSharedAlbum *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToRevealTheMostRecentMemoryAnimated:(bool)arg1;
- (void)navigateToSearch;
- (void)navigateToSearchWithHashtag:(NSString *)arg1;
- (void)navigateToSearchWithTerms:(NSArray *)arg1 searchCategories:(NSArray *)arg2;
- (PHPhotoLibrary *)photoLibrary;

@end
