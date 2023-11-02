
@interface PXPeoplePickerDataSourceManager : PXSectionedDataSourceManager <PXPeoplePickerMutableDataSourceManager, PXPhotoLibraryUIChangeObserver> {
    PHFetchResult * _people;
    NSMutableArray * _selectedLocalIdentifiers;
    NSArray * _suggestedLocalIdentifiers;
}

@property (nonatomic, readonly) PXPeoplePickerDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)currentDataSourceManager;

- (void).cxx_destruct;
- (id)createInitialDataSource;
- (void)deselectAllLocalIdentifiers;
- (id)init;
- (void)performChanges:(id /* block */)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)setDisabledLocalIdentifiers:(id)arg1;
- (void)setLocalIdentifiers:(id)arg1 selected:(bool)arg2;
- (void)setPeople:(id)arg1;
- (void)setSuggestedLocalIdentifiers:(id)arg1 withPhotoLibrary:(id)arg2;

@end
