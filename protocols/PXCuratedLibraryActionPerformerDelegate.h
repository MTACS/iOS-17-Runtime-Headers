
@protocol PXCuratedLibraryActionPerformerDelegate <PXAssetCollectionActionPerformerDelegate>

@optional

- (void)curatedLibraryActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 contentFilterStateChanged:(PXContentFilterState *)arg2;
- (void)curatedLibraryActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 libraryFilterStateChanged:(PXLibraryFilterState *)arg2;
- (void)curatedLibraryActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 presentContextMenuActionsWithPerformers:(NSArray *)arg2;
- (void)curatedLibraryActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 presentShareSheetWithSharingContext:(PXActivitySharingContext *)arg2;
- (void)curatedLibraryActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 showFilterPopoverWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

@end
