
@interface PXSearchResultsViewModel : NSObject {
    unsigned long long  _configurationType;
    PXSearchResultsSectionedDataSourceManager * _dataSourceManager;
    <PXSearchResultsLayoutDataSource> * _delegate;
}

@property (nonatomic, readonly) NSArray *attachmentURLs;
@property (nonatomic) unsigned long long configurationType;
@property (nonatomic, retain) PXSearchResultsSectionedDataSourceManager *dataSourceManager;
@property (nonatomic) <PXSearchResultsLayoutDataSource> *delegate;
@property (nonatomic, readonly) PXSearchQueryMatchInfo *searchQueryMatchInfo;
@property (nonatomic, readonly) NSArray *suggestions;
@property (nonatomic, readonly) PXSearchTopAssetsResult *topAssetsSearchResult;
@property (nonatomic, readonly) NSArray *wordEmbeddingSubstitutions;

- (void).cxx_destruct;
- (id)_adjustedIndexPathForIndexPath:(id)arg1;
- (long long)_adjustedSectionForSection:(long long)arg1;
- (unsigned long long)_displayableSuggestionCount;
- (bool)_resultsAreWordEmbeddingsOnly;
- (bool)_sectionIsTopAssetsSection:(long long)arg1;
- (id)_selectedWordEmbeddingTextAtRow:(long long)arg1;
- (id)_sugestionForIndexPath:(id)arg1;
- (id)allSearchResultsForSection:(long long)arg1;
- (id)attachmentURLs;
- (double)calculatedRowHeightForTopAssets;
- (id)collapseSection:(long long)arg1;
- (unsigned long long)configurationType;
- (id)dataSourceManager;
- (id)delegate;
- (id)expandSection:(long long)arg1;
- (void)fetchImageForPerson:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 completion:(id /* block */)arg4;
- (bool)hasDisplayableSuggestions;
- (bool)hasNoResults;
- (double)heightForRowType:(unsigned long long)arg1 info:(id)arg2;
- (id)initWithSearchSectionedDataSource:(id)arg1 configurationType:(unsigned long long)arg2;
- (id)initWithSectionedDataSourceManager:(id)arg1 configurationType:(unsigned long long)arg2;
- (bool)isValidSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSearchResultsInSection:(long long)arg1;
- (long long)numberOfSections;
- (double)numberOfTopAssetRows;
- (long long)numberOfVisibleSearchResultsInSection:(long long)arg1;
- (unsigned long long)rowTypeForIndexPath:(id)arg1;
- (id)searchQueryMatchInfo;
- (id)searchResultAtIndexPath:(id)arg1;
- (void)searchResultDataForIndexPath:(id)arg1 completion:(id /* block */)arg2;
- (bool)sectionIsExpandable:(long long)arg1;
- (bool)sectionIsExpanded:(long long)arg1;
- (unsigned long long)sectionTypeForSection:(long long)arg1;
- (void)setConfigurationType:(unsigned long long)arg1;
- (void)setDataSourceManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldDisplayHeaderViewForSection:(long long)arg1;
- (bool)shouldShowTableFooterView;
- (long long)startingSectionNumberForType:(unsigned long long)arg1;
- (id)suggestionItemForIndexPath:(id)arg1;
- (id)suggestions;
- (id)thumbnailAssetsForResultIndexPaths:(id)arg1;
- (id)titleForHeaderButtonInSection:(long long)arg1;
- (id)titleForHeaderInSection:(long long)arg1 accessibilityIdentifier:(out id*)arg2;
- (id)topAssetAtIndexPath:(id)arg1;
- (bool)topAssetsExistForSection:(long long)arg1;
- (id)topAssetsSearchResult;
- (id)wordEmbeddingForIndexPath:(id)arg1;
- (id)wordEmbeddingSubstitutions;

@end
