
@interface PXFetchResultDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    PHFetchResult * _currentFetchResult;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PXFetchResultDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createInitialDataSource;
- (id)initWithInitialFetchResult:(id)arg1;
- (id)photoLibrary;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)setFetchResult:(id)arg1 changeDetails:(id)arg2;
- (void)setPhotoLibrary:(id)arg1;

@end
