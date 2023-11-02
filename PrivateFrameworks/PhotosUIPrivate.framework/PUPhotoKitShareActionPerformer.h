
@interface PUPhotoKitShareActionPerformer : PUPhotoKitActionPerformer {
    PUActivitySharingController * _activitySharingController;
    UIViewController * _preheatedSharingViewController;
}

@property (nonatomic, retain) PUActivitySharingController *activitySharingController;
@property (nonatomic, retain) UIViewController *preheatedSharingViewController;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg1 inDataSource:(id)arg2;
- (id)_createSharingViewControllerFromCurrentSelection;
- (id)activitySharingController;
- (void)performUserInteractionTask;
- (void)preheatUserInteractionTask;
- (id)preheatedSharingViewController;
- (void)setActivitySharingController:(id)arg1;
- (void)setPreheatedSharingViewController:(id)arg1;

@end
