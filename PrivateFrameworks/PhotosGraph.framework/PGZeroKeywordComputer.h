
@interface PGZeroKeywordComputer : NSObject {
    CLSCurationContext * _curationContext;
    PGCurationManager * _curationManager;
    PGGraphMomentNodeCollection * _momentNodesWhereMeIsPresent;
    PHPhotoLibrary * _photoLibrary;
    CLSSceneTaxonomyHierarchy * _sceneTaxonomy;
    PGSearchComputationCache * _searchComputationCache;
    bool  _shouldFilterMomentNodesWithPresence;
}

@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodesWhereMeIsPresent;
@property (nonatomic, readonly) PGSearchComputationCache *searchComputationCache;
@property (nonatomic, readonly) bool shouldFilterMomentNodesWithPresence;

+ (id)contextualHolidayZeroKeywordsWithGraph:(id)arg1 options:(id)arg2 progressBlock:(id /* block */)arg3;
+ (id)zeroKeywordLog;

- (void).cxx_destruct;
- (id)_tripZeroKeywordWithGraph:(id)arg1 curationContext:(id)arg2 score:(out double*)arg3;
- (id)_zeroKeywordDisplayMeaningNodeForMeaningNode:(id)arg1;
- (id)_zeroKeywordsWithGraph:(id)arg1 curationContext:(id)arg2 options:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)contextualDateZeroKeywordsWithGraph:(id)arg1 options:(id)arg2;
- (id)contextualMeaningAndTripZeroKeywordsWithGraph:(id)arg1 curationContext:(id)arg2 options:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)contextualPersonZeroKeywordsWithGraph:(id)arg1 options:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)contextualSceneZeroKeywordsWithGraph:(id)arg1 options:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)contextualSeasonZeroKeywordsWithGraph:(id)arg1 curationContext:(id)arg2 options:(id)arg3;
- (id)contextualSocialGroupZeroKeywordsWithGraph:(id)arg1 options:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)eventZeroKeywordsWithGraph:(id)arg1 curationContext:(id)arg2 options:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)initWithPhotoLibrary:(id)arg1 curationManager:(id)arg2 searchComputationCache:(id)arg3;
- (id)meaningNodeZeroKeywordForDisplayMeaningNode:(id)arg1 collectionUUIDsToAvoid:(id)arg2 curationContext:(id)arg3;
- (id)momentNodesOverlappingLocalDateInterval:(id)arg1 inGraph:(id)arg2;
- (id)momentNodesWhereMeIsPresent;
- (id)peopleZeroKeywordsWithGraph:(id)arg1 curationContext:(id)arg2 options:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)placeZeroKeywordsWithGraph:(id)arg1 options:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)sceneZeroKeywordsWithGraph:(id)arg1 options:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)searchComputationCache;
- (bool)shouldFilterMomentNodesWithPresence;
- (id)socialGroupKeyAssetLocalIdentifierWithPersonLocalIdentifiers:(id)arg1;
- (id)socialGroupKeywordsWithGraph:(id)arg1 curationContext:(id)arg2 options:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)tripRankedKeywordWithGraph:(id)arg1 curationContext:(id)arg2;
- (id)tripZeroKeywordWithGraph:(id)arg1 curationContext:(id)arg2;
- (id)zeroKeywordsWithGraph:(id)arg1 curationContext:(id)arg2 options:(id)arg3 progressBlock:(id /* block */)arg4;

@end
