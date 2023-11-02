
@interface PXPhotoKitAssetView : PXDisplayAssetView {
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)photoLibrary;
- (void)setAsset:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;

@end
