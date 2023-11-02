
@interface PXFileBackedAssetAddToLibraryActionPerformer : PXFileBackedAssetActionPerformer

+ (bool)canPerformOnImplicitSelection;
+ (bool)canPerformWithSelectionSnapshot:(id)arg1;

- (void)_completeSaveWithSuccess:(bool)arg1 error:(id)arg2;
- (void)performUserInteractionTask;

@end
