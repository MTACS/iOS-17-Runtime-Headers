
@interface PXSuggestionsDataSourceManager : PXSectionedDataSourceManager <PXChangeObserver, PXPhotoLibraryUIChangeObserver> {
    unsigned short  _dataSourceType;
    PXLibraryFilterState * _libraryFilterState;
}

@property (nonatomic, readonly) PXSuggestionsDataSource *dataSource;
@property (nonatomic, readonly) unsigned short dataSourceType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (readonly) Class superclass;

+ (id)baseFetchPredicate;
+ (id)mostRecentCreationDateForPXSuggestionDataSourceType:(unsigned short)arg1;
+ (id)typePredicateForDataSourceType:(unsigned short)arg1;

- (void).cxx_destruct;
- (id)_createNewDataSource;
- (void)_handleChangeWithDetails:(id)arg1;
- (void)_resetDataSource;
- (id)createInitialDataSource;
- (unsigned short)dataSourceType;
- (id)init;
- (id)initWithDataSourceType:(unsigned short)arg1 libraryFilterState:(id)arg2;
- (id)libraryFilterState;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;

@end
