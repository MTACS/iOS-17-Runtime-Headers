
@interface CKMediaObjectDeleteAssetActionPerformer : CKMediaObjectAssetActionPerformer

+ (bool)canPerformOnImplicitSelection;
+ (bool)canPerformWithActionManager:(id)arg1;
+ (id)createPreviewActionWithActionManager:(id)arg1 handler:(id /* block */)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void)_presentDeleteConfirmationDialogForTypedCount:(struct { unsigned long long x1; long long x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)performUserInteractionTask;

@end
