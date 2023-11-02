
@interface PXCuratedLibraryShareActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

- (id)activitySystemImageName;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (void)performUserInteractionTask;

@end
