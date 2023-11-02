
@interface PXPhotoKitUnifiedDestructiveActionPerformer : PXPhotoKitAssetActionPerformer

+ (id)_containedPerformerClasses;
+ (id)_localizedTitleForAsset:(id)arg1 titleUseCase:(unsigned long long)arg2 key:(id)arg3;
+ (id)_localizedTitleForAssets:(id)arg1 titleUseCase:(unsigned long long)arg2 key:(id)arg3;
+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (bool)canPerformOnSubsetOfSelection;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void)_handleActionPickForPerformerClass:(Class)arg1;
- (bool)_isDestructiveAction:(Class)arg1;
- (void)performUserInteractionTask;

@end
