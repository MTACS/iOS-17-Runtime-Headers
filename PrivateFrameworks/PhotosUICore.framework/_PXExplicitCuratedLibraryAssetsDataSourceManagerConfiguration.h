
@interface _PXExplicitCuratedLibraryAssetsDataSourceManagerConfiguration : PXCuratedLibraryAssetsDataSourceManagerConfiguration {
    PXAssetsDataSourceManager * _allPhotosAssetsDataSourceManager;
    PXAssetsDataSourceManager * _daysAssetsDataSourceManager;
    PXAssetsDataSourceManager * _monthsAssetsDataSourceManager;
    PXAssetsDataSourceManager * _yearsAssetsDataSourceManager;
}

- (void).cxx_destruct;
- (id)configurationForZoomLevel:(long long)arg1;
- (id)initWithPhotoLibrary:(id)arg1 yearsAssetsDataSourceManager:(id)arg2 monthsAssetsDataSourceManager:(id)arg3 daysAssetsDataSourceManager:(id)arg4 allPhotosAssetsDataSourceManager:(id)arg5;

@end
