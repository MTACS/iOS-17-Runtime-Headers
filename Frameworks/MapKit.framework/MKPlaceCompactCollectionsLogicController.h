
@interface MKPlaceCompactCollectionsLogicController : NSObject <MKCompactCollectionDataProvider, MKCompactCollectionDataUpdater, MKPlaceBatchConsumer> {
    MKPlaceBatchController * _batchController;
    NSArray * _batchableLocations;
    long long  _context;
    NSArray * _flattenedIdentifiersForBatching;
    <MKPlaceBatchConsumer> * _guideConsumer;
    unsigned long long  _initialDisplayCount;
    NSArray * _sections;
    GEOGuideLocation * _selectedGuideLocation;
    NSArray * _viewModels;
}

@property (nonatomic, retain) MKPlaceBatchController *batchController;
@property (nonatomic, retain) NSArray *batchableLocations;
@property (nonatomic) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *flattenedIdentifiersForBatching;
@property (nonatomic) <MKPlaceBatchConsumer> *guideConsumer;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long initialDisplayCount;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, retain) GEOGuideLocation *selectedGuideLocation;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *viewModels;

- (void).cxx_destruct;
- (id)batchController;
- (id)batchableLocations;
- (id)buildBatchingStructureForResult:(id)arg1;
- (id)buildViewModelsFromGuideLocations:(id)arg1;
- (id)compactCollectionAtIndex:(unsigned long long)arg1 sectionIndex:(unsigned long long)arg2;
- (id)compactCollectionsInSection:(unsigned long long)arg1;
- (long long)context;
- (void)createBatchControllerIfNeededUsingIdentifiers:(id)arg1 usingCollectionFetcher:(id)arg2 usingGuideConsumer:(id)arg3 batchSize:(unsigned long long)arg4;
- (void)dismissedCompactCollections;
- (id)flattenedIdentifiersForBatching;
- (id)guideConsumer;
- (id)initWithGuideLocations:(id)arg1 context:(long long)arg2;
- (id)initWithGuideLocationsResult:(id)arg1 context:(long long)arg2 usingCollectionFetcher:(id)arg3 usingGuideConsumer:(id)arg4 usingBatchSize:(unsigned long long)arg5 selectedGuideLocation:(id)arg6;
- (unsigned long long)initialDisplayCount;
- (unsigned long long)numberOfSections;
- (id)sections;
- (id)selectedGuideLocation;
- (void)setBatchController:(id)arg1;
- (void)setBatchableLocations:(id)arg1;
- (void)setContext:(long long)arg1;
- (void)setFlattenedIdentifiersForBatching:(id)arg1;
- (void)setGuideConsumer:(id)arg1;
- (void)setInitialDisplayCount:(unsigned long long)arg1;
- (void)setSections:(id)arg1;
- (void)setSelectedGuideLocation:(id)arg1;
- (void)setViewModels:(id)arg1;
- (void)shouldConsumeBatch:(bool)arg1 fetchedBatch:(id)arg2;
- (id)titleForSectionFromTitle:(id)arg1;
- (id)viewModels;
- (void)willDisplayCellAtIndexpath:(id)arg1;

@end
