
@interface PXPersonsSectionedDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    PXPhotoLibraryLocalDefaults * _localDefaults;
    unsigned long long  _peopleHomeSortingType;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PXPersonsSectionedDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXPhotoLibraryLocalDefaults *localDefaults;
@property (nonatomic) unsigned long long peopleHomeSortingType;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_personTypeForSection:(long long)arg1;
- (id)createInitialDataSource;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)localDefaults;
- (unsigned long long)peopleHomeSortingType;
- (id)photoLibrary;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)reloadData;
- (void)setPeopleHomeSortingType:(unsigned long long)arg1;

@end
