
@interface SearchUIAsyncSectionLoader : NSObject {
    <SearchUIAsyncSectionLoaderDelegate> * _delegate;
    NSArray * _objectCache;
    unsigned long long  _queryId;
    id /* block */  _runningBlock;
    SFSearchResult * _searchResult;
    SearchUISectionModel * _sectionModel;
}

@property (readonly) SFColor *backgroundColor;
@property <SearchUIAsyncSectionLoaderDelegate> *delegate;
@property (retain) NSArray *objectCache;
@property (readonly) unsigned long long queryId;
@property (copy) id /* block */ runningBlock;
@property (readonly) SFSearchResult *searchResult;
@property (readonly) SearchUISectionModel *sectionModel;

+ (id)asyncLoaderSupportingSectionModel:(id)arg1 result:(id)arg2 queryId:(unsigned long long)arg3;
+ (bool)supportsSectionModel:(id)arg1;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)cacheIdentifier;
- (id)cachedValue;
- (id)cardSections;
- (id)delegate;
- (void)fetchCardSectionsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithSectionModel:(id)arg1 result:(id)arg2 queryId:(unsigned long long)arg3;
- (id)objectCache;
- (id)placeholderCardSections;
- (void)preloadIfNecessary;
- (unsigned long long)queryId;
- (void)reloadWithCardSections:(id)arg1 animated:(bool)arg2 reconfigureExisting:(bool)arg3;
- (id /* block */)runningBlock;
- (id)searchResult;
- (id)sectionModel;
- (void)setDelegate:(id)arg1;
- (void)setObjectCache:(id)arg1;
- (void)setRunningBlock:(id /* block */)arg1;
- (void)start;
- (bool)supportsPreloading;

@end
