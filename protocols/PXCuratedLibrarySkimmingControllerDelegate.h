
@protocol PXCuratedLibrarySkimmingControllerDelegate <NSObject>

@required

- (PXAssetCollectionReference *)assetCollectionReferenceForSkimmingSlideshow:(PXCuratedLibrarySkimmingController *)arg1;
- (PXAssetCollectionReference *)assetCollectionReferenceToShowSkimmingHints:(PXCuratedLibrarySkimmingController *)arg1;
- (void)skimmingController:(PXCuratedLibrarySkimmingController *)arg1 willHideSkimmingHintsForAssetCollectionReference:(PXAssetCollectionReference *)arg2 animationDuration:(double)arg3;
- (void)skimmingController:(PXCuratedLibrarySkimmingController *)arg1 willShowSkimmingHintsForAssetCollectionReference:(PXAssetCollectionReference *)arg2 animationDuration:(double)arg3;
- (void)skimmingController:(PXCuratedLibrarySkimmingController *)arg1 willStartSkimmingAssetCollectionReference:(PXAssetCollectionReference *)arg2 animationDuration:(double)arg3;
- (void)skimmingControllerDidStopSkimming:(PXCuratedLibrarySkimmingController *)arg1 animationDuration:(double)arg2;

@end
