
@interface PXPhotosAction : PXAction {
    PHPhotoLibrary * _photoLibrary;
    PHFetchOptions * _standardFetchOptions;
}

@property (nonatomic, readonly) long long assetCount;
@property (nonatomic, readonly) <PXFastEnumeration> *assets;
@property (nonatomic, readonly) <PXFastEnumeration> *collections;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PHFetchOptions *standardFetchOptions;

- (void).cxx_destruct;
- (long long)assetCount;
- (id)assets;
- (id)collections;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)performChanges:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)photoLibrary;
- (id)standardFetchOptions;

@end
