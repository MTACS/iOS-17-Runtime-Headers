
@interface PUPXPhotoKitCompositeVideoActionPerformer : PXPhotoKitAssetActionPerformer <PXActivityActionDelegate> {
    PUCompositeVideoActivity * _compositeVideoActivity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void).cxx_destruct;
- (void)activity:(id)arg1 didFinishWithSuccess:(bool)arg2 error:(id)arg3;
- (void)performUserInteractionTask;

@end
