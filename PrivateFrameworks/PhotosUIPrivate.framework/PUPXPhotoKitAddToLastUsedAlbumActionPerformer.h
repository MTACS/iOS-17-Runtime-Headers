
@interface PUPXPhotoKitAddToLastUsedAlbumActionPerformer : PXPhotoKitAssetActionPerformer

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;

- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
