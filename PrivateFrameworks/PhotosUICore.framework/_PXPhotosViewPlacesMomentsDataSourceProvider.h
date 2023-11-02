
@interface _PXPhotosViewPlacesMomentsDataSourceProvider : NSObject <PXPhotosDataSourceProvider> {
    <NSFastEnumeration> * _assets;
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createInitialPhotosDataSourceForDataSourceManager:(id)arg1;
- (id)initWithAllowedAssets:(id)arg1 photoLibrary:(id)arg2;
- (id)loadInitialPhotosDataSourceForDataSourceManager:(id)arg1;

@end
