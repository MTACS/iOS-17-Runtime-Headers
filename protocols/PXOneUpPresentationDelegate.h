
@protocol PXOneUpPresentationDelegate <NSObject>

@required

- (PXAssetsDataSourceManager *)oneUpPresentationDataSourceManager:(PXOneUpPresentation *)arg1;
- (PXUIMediaProvider *)oneUpPresentationMediaProvider:(PXOneUpPresentation *)arg1;
- (long long)oneUpPresentationOrigin:(PXOneUpPresentation *)arg1;

@optional

- (NSArray *)oneUpPresentation:(PXOneUpPresentation *)arg1 accessoriesForContextMenuInteraction:(UIContextMenuInteraction *)arg2 configuration:(UIContextMenuConfiguration *)arg3;
- (bool)oneUpPresentation:(PXOneUpPresentation *)arg1 allowsActionsForContextMenuInteraction:(UIContextMenuInteraction *)arg2;
- (bool)oneUpPresentation:(PXOneUpPresentation *)arg1 allowsMultiSelectMenuForInteraction:(UIContextMenuInteraction *)arg2;
- (bool)oneUpPresentation:(PXOneUpPresentation *)arg1 allowsPreviewCommittingForContextMenuInteraction:(UIContextMenuInteraction *)arg2;
- (bool)oneUpPresentation:(PXOneUpPresentation *)arg1 canStartPreviewingForContextMenuInteraction:(UIContextMenuInteraction *)arg2;
- (bool)oneUpPresentation:(PXOneUpPresentation *)arg1 commitPreviewForContextMenuInteraction:(UIContextMenuInteraction *)arg2;
- (UIImage *)oneUpPresentation:(PXOneUpPresentation *)arg1 currentImageForAssetReference:(PXAssetReference *)arg2;
- (UITargetedPreview *)oneUpPresentation:(PXOneUpPresentation *)arg1 previewForDismissingToSecondaryItemWithIdentifier:(id <NSCopying>)arg2 configuration:(UIContextMenuConfiguration *)arg3;
- (UITargetedPreview *)oneUpPresentation:(PXOneUpPresentation *)arg1 previewForHighlightingSecondaryItemWithIdentifier:(id <NSCopying>)arg2 configuration:(UIContextMenuConfiguration *)arg3;
- (PXRegionOfInterest *)oneUpPresentation:(PXOneUpPresentation *)arg1 regionOfInterestForAssetReference:(PXAssetReference *)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 scrollAssetReferenceToVisible:(PXAssetReference *)arg2;
- (NSSet *)oneUpPresentation:(PXOneUpPresentation *)arg1 secondaryIdentifiersForConfiguration:(UIContextMenuConfiguration *)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 setHiddenAssetReferences:(NSSet *)arg2;
- (_UIContextMenuStyle *)oneUpPresentation:(PXOneUpPresentation *)arg1 styleForContextMenuInteraction:(UIContextMenuInteraction *)arg2 configuration:(UIContextMenuConfiguration *)arg3;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 willEndPreviewingForContextMenuInteraction:(UIContextMenuInteraction *)arg2 configuration:(UIContextMenuConfiguration *)arg3;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 willStartPreviewingForContextMenuInteraction:(UIContextMenuInteraction *)arg2;
- (long long)oneUpPresentationActionContext:(PXOneUpPresentation *)arg1;
- (PXAssetActionManager *)oneUpPresentationActionManager:(PXOneUpPresentation *)arg1;
- (PXAssetActionManager *)oneUpPresentationActionManagerForPreviewing:(PXOneUpPresentation *)arg1;
- (NSArray *)oneUpPresentationAssetUUIDsAllowedToHighlightText:(PXOneUpPresentation *)arg1;
- (UIScrollView *)oneUpPresentationHelperScrollView:(PXOneUpPresentation *)arg1;
- (<PXAssetImportStatusManager> *)oneUpPresentationImportStatusManager:(PXOneUpPresentation *)arg1;
- (PXAssetReference *)oneUpPresentationInitialAssetReference:(PXOneUpPresentation *)arg1;
- (NSArray *)oneUpPresentationMatchedAudioIdentifiers:(PXOneUpPresentation *)arg1;
- (NSArray *)oneUpPresentationMatchedHumanActionIdentifiers:(PXOneUpPresentation *)arg1;
- (NSArray *)oneUpPresentationMatchedPersonLocalIdentifiers:(PXOneUpPresentation *)arg1;
- (NSArray *)oneUpPresentationMatchedQueryStrings:(PXOneUpPresentation *)arg1;
- (NSArray *)oneUpPresentationMatchedSceneIdentifiers:(PXOneUpPresentation *)arg1;
- (PXPhotosDetailsContext *)oneUpPresentationPhotosDetailsContext:(PXOneUpPresentation *)arg1;
- (PXContentPrivacyController *)oneUpPresentationPrivacyController:(PXOneUpPresentation *)arg1;
- (PXSearchQueryMatchInfo *)oneUpPresentationSearchQueryMatchInfo:(PXOneUpPresentation *)arg1;
- (bool)oneUpPresentationShouldAutoPlay:(PXOneUpPresentation *)arg1;
- (bool)oneUpPresentationShouldPreventShowInAllPhotosAction:(PXOneUpPresentation *)arg1;
- (bool)oneUpPresentationWantsShowInLibraryButton:(PXOneUpPresentation *)arg1;

@end
