
@interface PXAssetsAction : PXPhotosAction {
    <PXFastEnumeration> * _assets;
}

+ (bool)canPerformOnAllAssets:(id)arg1;
+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (id)assets;
- (id)initWithAsset:(id)arg1;
- (id)initWithAssets:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)performAssetChanges:(id /* block */)arg1 completionHandler:(id /* block */)arg2;

@end
