
@interface PXPhotoKitAssetCollectionContentSyndicationSaveToLibraryActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXAssetsSharingHelperDelegate> {
    PXContentSyndicationPhotoKitAssetArrivalObserver * _assetArrivalObserver;
    PHFetchResult * _assetsToSaveFetchResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)createBarButtonItemForAssetCollectionReference:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;

- (void).cxx_destruct;
- (bool)assetsSharingHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)assetsSharingHelper:(id)arg1 presentViewController:(id)arg2;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
