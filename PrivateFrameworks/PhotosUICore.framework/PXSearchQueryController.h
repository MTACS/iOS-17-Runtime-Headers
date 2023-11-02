
@interface PXSearchQueryController : NSObject <PXSearchQueryControllerProtocol> {
    PXSearchQuery * _currentSearchQuery;
    PHPhotoLibrary * _photoLibrary;
    PSIDatabase * _psiSearchIndex;
    bool  _requestSceneAncestryInformation;
    id /* block */  _resultsHandler;
    PXSearchQueryExecutor * _searchQueryExecutor;
}

@property (nonatomic, retain) PXSearchQuery *currentSearchQuery;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) PSIDatabase *psiSearchIndex;
@property (nonatomic, readonly) bool requestSceneAncestryInformation;
@property (nonatomic, readonly) id /* block */ resultsHandler;
@property (nonatomic, retain) PXSearchQueryExecutor *searchQueryExecutor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_openQueryConnectionToPSISearchIndex;
- (void)_performSearch:(id)arg1 retry:(bool)arg2;
- (id)currentSearchQuery;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1 requestSceneAncestryInformation:(bool)arg2 resultsHandler:(id /* block */)arg3;
- (void)performSearch:(id)arg1;
- (id)photoLibrary;
- (id)psiSearchIndex;
- (bool)requestSceneAncestryInformation;
- (id /* block */)resultsHandler;
- (id)searchQueryExecutor;
- (void)setCurrentSearchQuery:(id)arg1;
- (void)setPsiSearchIndex:(id)arg1;
- (void)setSearchQueryExecutor:(id)arg1;

@end
