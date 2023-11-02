
@interface PGMemoryGenerationContext : NSObject {
    NSDictionary * _contentScoreByMomentNodeIdentifier;
    PGGraphLocationHelper * _locationHelper;
    NSObject<OS_os_log> * _loggingConnection;
    PGGraphMomentNodeCollection * _momentNodesAtSensitiveLocations;
    PGGraphMomentNodeCollection * _momentNodesInterestingForMemories;
    PGGraphMomentNodeCollection * _momentNodesInterestingWithAlternateJunking;
    PGMemoryMomentNodesWithBlockedFeatureCache * _momentNodesWithBlockedFeatureCache;
    NSDictionary * _numberOfAssetsInExtendedCurationByMomentNodeIdentifier;
    PGMemoryProcessedScenesAndFacesCache * _processedScenesAndFacesCache;
    NSDictionary * _yearByYearNodeIdentifier;
    PGGraphYearNodeCollection * _yearNodes;
    MABinaryAdjacency * _yearNodesByMomentNode;
}

@property (nonatomic, readonly) PGGraphLocationHelper *locationHelper;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, readonly) PGMemoryMomentNodesWithBlockedFeatureCache *momentNodesWithBlockedFeatureCache;
@property (nonatomic, readonly) PGMemoryProcessedScenesAndFacesCache *processedScenesAndFacesCache;

- (void).cxx_destruct;
- (id)_yearNodesInGraph:(id)arg1;
- (double)averageContentScoreForMomentNodes:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 userFeedbackCalculator:(id)arg2 graph:(id)arg3 loggingConnection:(id)arg4;
- (id)initWithProcessedScenesAndFacesCache:(id)arg1 momentNodesWithBlockedFeatureCache:(id)arg2 locationHelper:(id)arg3 loggingConnection:(id)arg4;
- (id)interestingForMemoriesSubsetFromMomentNodes:(id)arg1;
- (id)interestingWithAlternateJunkingSubsetFromMomentNodes:(id)arg1;
- (id)locationHelper;
- (id)loggingConnection;
- (id)momentNodesAtSensitiveLocationsInGraph:(id)arg1;
- (id)momentNodesWithBlockedFeatureCache;
- (unsigned long long)numberOfAssetsInExtendedCurationForMomentNodes:(id)arg1;
- (id)processedScenesAndFacesCache;
- (id)yearNodesByMomentNodeInGraph:(id)arg1;
- (id)yearNodesForMomentNodes:(id)arg1;
- (id)yearsForYearNodes:(id)arg1;

@end
