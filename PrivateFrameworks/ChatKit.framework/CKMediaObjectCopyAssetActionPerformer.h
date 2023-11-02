
@interface CKMediaObjectCopyAssetActionPerformer : CKMediaObjectAssetActionPerformer

+ (bool)canPerformOnImplicitSelection;
+ (bool)canPerformWithActionManager:(id)arg1 selectionSnapshot:(id)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void)performUserInteractionTask;

@end
