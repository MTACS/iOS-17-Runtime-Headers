
@interface PXForYouSuggestionAssetsDataSourceManager : PXAssetsDataSourceManager <PXPhotoLibraryUIChangeObserver, PXSectionedDataSourceManagerObserver> {
    PXSuggestionsDataSource * _suggestionsDataSource;
    PXSuggestionsDataSourceManager * _suggestionsDataSourceManager;
}

@property (nonatomic, readonly) NSString *collectionIdentifier;
@property (nonatomic, readonly) PXForYouSuggestionsAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXPhotosDataSource *photosDataSource;
@property (nonatomic, readonly) NSDictionary *snapshotAssetToSuggestionMap;
@property (nonatomic, retain) PXSuggestionsDataSource *suggestionsDataSource;
@property (nonatomic, readonly) PXSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionIdentifier;
- (id)createInitialDataSource;
- (id)initWithSuggestionsDataSourceManager:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)photosDataSource;
- (void)setSuggestionsDataSource:(id)arg1;
- (id)snapshotAssetToSuggestionMap;
- (id)suggestionsDataSource;
- (id)suggestionsDataSourceManager;

@end
