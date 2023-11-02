
@interface PUPXPhotoKitSlideShowAssetActionPerformer : PXPhotoKitAssetActionPerformer <PUSlideshowViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (bool)canPerformOnImplicitSelectionInContainerCollection:(id)arg1;
+ (bool)canPerformOnSubsetOfSelection;
+ (bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;
+ (id)createActivityWithActionManager:(id)arg1;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (id)_getLegacySlideshowSession;
- (id)_getSlideshowSession:(id)arg1;
- (void)_startSlideshow;
- (void)performUserInteractionTask;
- (bool)shouldExitSelectModeForState:(unsigned long long)arg1;
- (void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2;

@end
