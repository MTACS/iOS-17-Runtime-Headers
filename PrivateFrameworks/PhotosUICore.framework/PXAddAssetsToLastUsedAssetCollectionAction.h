
@interface PXAddAssetsToLastUsedAssetCollectionAction : PXAssetsAction {
    PXAddAssetsToAssetCollectionAction * _underlyingAction;
}

@property (nonatomic, readonly) PXAddAssetsToAssetCollectionAction *underlyingAction;

+ (id)commandTitleWithPhotoLibrary:(id)arg1;
+ (void)configureToast:(id)arg1 withAlbumName:(id)arg2;
+ (id)placeholderCommandTitle;
+ (id)targetAssetCollectionInPhotoLibrary:(id)arg1 error:(id*)arg2;
+ (void)userDidAddAssetsToAssetCollection:(id)arg1;

- (void).cxx_destruct;
- (id)initWithAssets:(id)arg1;
- (id)initWithAssets:(id)arg1 error:(id*)arg2;
- (id)localizedActionName;
- (void)performAction:(id /* block */)arg1;
- (void)performRedo:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)underlyingAction;

@end
