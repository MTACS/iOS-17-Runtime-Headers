
@interface PUImportFakePhotosDataSource : PXPhotosDataSource {
    PXImportAssetsDataSource * _importDataSource;
}

@property (nonatomic, retain) PXImportAssetsDataSource *importDataSource;

- (void).cxx_destruct;
- (id)importDataSource;
- (id)initWithImportDataSource:(id)arg1 photoLibrary:(id)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)arg1 reverseOrder:(bool)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)setImportDataSource:(id)arg1;

@end
