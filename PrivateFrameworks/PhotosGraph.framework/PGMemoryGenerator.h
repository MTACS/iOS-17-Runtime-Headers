
@interface PGMemoryGenerator : NSObject <PGMemoryEnrichmentProtocol, PGMemoryGeneratorProtocol> {
    PGMemoryController * _controller;
    bool  _isDebug;
    PGGraphLocationHelper * _locationHelper;
    NSObject<OS_os_log> * _loggingConnection;
    PGMemoryCurationSession * _memoryCurationSession;
    PGMemoryGenerationContext * _memoryGenerationContext;
    PGMemoryMomentNodesWithBlockedFeatureCache * _momentNodesWithBlockedFeatureCache;
    PGMemoryProcessedScenesAndFacesCache * _processedScenesAndFacesCache;
}

@property (readonly) PGMemoryController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isDebug;
@property (nonatomic, readonly) PGGraphLocationHelper *locationHelper;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, readonly) PGMemoryCurationSession *memoryCurationSession;
@property (nonatomic, readonly) PGMemoryGenerationContext *memoryGenerationContext;
@property (nonatomic, readonly) PGMemoryMomentNodesWithBlockedFeatureCache *momentNodesWithBlockedFeatureCache;
@property (nonatomic, readonly) PGMemoryProcessedScenesAndFacesCache *processedScenesAndFacesCache;
@property (readonly) Class superclass;

+ (long long)titleDateMatchingTypeForMemoryCategory:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_additionalInfoKeywordsForPotentialMemory:(id)arg1;
- (void)_enumerateBestScoringPotentialMemoriesInPotentialMemories:(id)arg1 withGraph:(id)arg2 attemptUpgradesBeforeSorting:(bool)arg3 usingBlock:(id /* block */)arg4;
- (void)_enumeratePotentialMemoriesWithGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)addLocalIdentifiersFromAssets:(id)arg1 to:(id)arg2;
- (id)baseCurationOptionsWithRequiredAssetUUIDs:(id)arg1 eligibleAssetUUIDs:(id)arg2;
- (id)chapterTitleGeneratorForTriggeredMemory:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5;
- (id)controller;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 eligibleAssetUUIDs:(id)arg2 triggeredMemory:(id)arg3;
- (id)defaultTitleGeneratorWithMomentNodes:(id)arg1 keyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 category:(unsigned long long)arg5 creationDate:(id)arg6 titleGenerationContext:(id)arg7;
- (unsigned long long)durationForCuration;
- (unsigned long long)durationForExtendedCuration;
- (id)extendedCurationOptionsWithRequiredAssetUUIDs:(id)arg1 triggeredMemory:(id)arg2;
- (id)generateAllPotentialMemoriesWithGraph:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)initWithController:(id)arg1;
- (id)initWithMemoryCurationSession:(id)arg1 loggingConnection:(id)arg2;
- (id)initWithMemoryGenerationContext:(id)arg1;
- (bool)isDebug;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg1 inGraph:(id)arg2;
- (id)localIdentifiersFromAssets:(id)arg1;
- (id)locationHelper;
- (id)loggingConnection;
- (id)memoryCurationSession;
- (id)memoryGenerationContext;
- (id)momentNodesWithBlockedFeatureCache;
- (id)processedScenesAndFacesCache;
- (id)relevantCurationFeederForTriggeredMemory:(id)arg1 relevantFeeder:(id)arg2 inGraph:(id)arg3 allowGuestAsset:(bool)arg4 progressReporter:(id)arg5;
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(bool)arg3 progressReporter:(id)arg4;
- (id)relevantKeyCurationFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(bool)arg3 progressReporter:(id)arg4;
- (bool)semanticalDedupingEnabledForCuration;
- (bool)semanticalDedupingEnabledForExtendedCuration;
- (void)setIsDebug:(bool)arg1;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;
- (id)uuidsOfRequiredAssetsWithKeyAsset:(id)arg1 triggeredMemory:(id)arg2 inGraph:(id)arg3 progressReporter:(id)arg4;

@end
