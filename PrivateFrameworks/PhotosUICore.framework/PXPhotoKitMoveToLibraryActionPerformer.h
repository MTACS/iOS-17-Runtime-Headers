
@interface PXPhotoKitMoveToLibraryActionPerformer : PXPhotoKitAssetActionPerformer <PXActionPerformerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (readonly) Class superclass;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (bool)canPerformOnSubsetOfSelection;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;

- (void)performUserInteractionTask;
- (bool)shouldExitSelectModeForState:(unsigned long long)arg1;
- (id)undoManagerForActionPerformer:(id)arg1;

@end
