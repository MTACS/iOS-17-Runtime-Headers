
@interface PXSearchZeroKeywordDataSource : NSObject {
    <PXSearchZeroKeywordChangeDelegate> * _delegate;
    bool  _fetchInProgress;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    PLSearchIndexSceneTaxonomyProvider * _sceneTaxonomyProvider;
    NSArray * _sections;
}

@property (nonatomic) <PXSearchZeroKeywordChangeDelegate> *delegate;
@property (nonatomic) bool fetchInProgress;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *fetchQueue;
@property (nonatomic, readonly) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider;
@property (nonatomic, copy) NSArray *sections;

+ (id)_dateViewModelForKeywordDictionary:(id)arg1;
+ (id)_fetchAssetCollectionsForIdentifiers:(id)arg1;
+ (void)_fetchAssetsForAssetViewModels:(id)arg1;
+ (id)_fetchAssetsWithLocalIdentifiers:(id)arg1;
+ (id)_fetchFinalMergeTargetPersonForPersonLocalIdentifier:(id)arg1;
+ (id)_fetchKeyAssetForSceneIdentifier:(int)arg1 sceneTaxonomyProvider:(id)arg2;
+ (id)_fetchKeyAssetOfAssetCollection:(id)arg1 withOptions:(id)arg2;
+ (void)_fetchKeyAssetsForAssetCollectionViewModels:(id)arg1;
+ (id)_fetchOptionsForPersonFetching;
+ (id)_holidayViewModelForKeywordDictionary:(id)arg1;
+ (id)_homeViewModelForKeywordDictionary:(id)arg1;
+ (id)_meaningViewModelForKeywordDictionary:(id)arg1;
+ (id)_personViewModelForKeywordDictionary:(id)arg1 person:(id)arg2;
+ (id)_personsByLocalIdentifiers:(id)arg1 allUniqueLocalIdentifiers:(id)arg2;
+ (id)_personsForLocalIdentifiers:(id)arg1;
+ (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_regionFromDisplayInfo:(id)arg1;
+ (id)_sceneViewModelForKeywordDictionary:(id)arg1 sceneTaxonomyProvider:(id)arg2;
+ (id)_seasonViewModelForKeywordDictionary:(id)arg1;
+ (id)_sectionsForZeroKeywords:(id)arg1 personsByLocalIdentifier:(id)arg2 sceneTaxonomyProvider:(id)arg3;
+ (id)_socialGroupViewModelForKeywordDictionary:(id)arg1 peopleByKeyword:(id)arg2;
+ (id)_socialGroupsByKeywordwithPersonsByLocalIdentifier:(id)arg1 socialGroupZeroKeywords:(id)arg2;
+ (id)_uniquePersonLocalIdentifiersForZeroKeywords:(id)arg1;
+ (id)_zeroKeywordsFromDefaultKeywordStore;
+ (id)placeViewModelForKeywordDictionary:(id)arg1;
+ (id)zeroKeywordLog;

- (void).cxx_destruct;
- (bool)_shouldFetchItems;
- (id)_titleForPeopleSection:(unsigned long long)arg1;
- (id)_zeroKeywordsFromDefaultKeywordStore;
- (void)blockingFetchItems;
- (id)debugDictionary;
- (id)delegate;
- (id)description;
- (bool)fetchInProgress;
- (void)fetchItems;
- (void)fetchItems:(bool)arg1;
- (id)fetchQueue;
- (bool)hasZeroKeywords;
- (long long)indexForPlaceKey:(id)arg1;
- (id)init;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)arg1;
- (id)sceneTaxonomyProvider;
- (long long)sectionForSectionType:(long long)arg1;
- (long long)sectionTypeForSection:(unsigned long long)arg1;
- (id)sections;
- (void)setDelegate:(id)arg1;
- (void)setFetchInProgress:(bool)arg1;
- (void)setFetchQueue:(id)arg1;
- (void)setSections:(id)arg1;
- (id)tapToRadarAttachments;
- (id)titleForSection:(unsigned long long)arg1;
- (id)viewModelForIndexPath:(id)arg1;
- (id)viewModelsForSection:(long long)arg1;

@end
