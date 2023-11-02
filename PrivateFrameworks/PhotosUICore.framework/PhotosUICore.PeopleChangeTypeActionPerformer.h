
@interface PhotosUICore.PeopleChangeTypeActionPerformer : PXPhotoKitAssetActionPerformer {
    void bootstrapContext;
    void didPresentBootstrap;
    void people;
}

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;

- (void).cxx_destruct;
- (id)initWithActionType:(id)arg1;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
