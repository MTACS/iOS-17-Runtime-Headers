
@protocol PGMemoryEnrichmentProtocol <NSObject>

@required

- (<PGChapterTitleGeneratorProtocol> *)chapterTitleGeneratorForTriggeredMemory:(id <PGTriggeredMemoryProtocol>)arg1 curatedAssets:(NSArray *)arg2 extendedCuratedAssets:(NSArray *)arg3 titleGenerationContext:(PGTitleGenerationContext *)arg4 inGraph:(PGGraph *)arg5;
- (PGCurationOptions *)curationOptionsWithRequiredAssetUUIDs:(NSSet *)arg1 eligibleAssetUUIDs:(NSSet *)arg2 triggeredMemory:(id <PGTriggeredMemoryProtocol>)arg3;
- (PGDejunkerDeduperOptions *)extendedCurationOptionsWithRequiredAssetUUIDs:(NSSet *)arg1 triggeredMemory:(id <PGTriggeredMemoryProtocol>)arg2;
- (PGKeyAssetCurationOptions *)keyAssetCurationOptionsWithTriggeredMemory:(id <PGTriggeredMemoryProtocol>)arg1 inGraph:(PGGraph *)arg2;
- (CLSInvestigationPhotoKitFeeder *)relevantCurationFeederForTriggeredMemory:(id <PGTriggeredMemoryProtocol>)arg1 relevantFeeder:(CLSInvestigationPhotoKitFeeder *)arg2 inGraph:(PGGraph *)arg3 allowGuestAsset:(bool)arg4 progressReporter:(MAProgressReporter *)arg5;
- (CLSInvestigationPhotoKitFeeder *)relevantFeederForTriggeredMemory:(id <PGTriggeredMemoryProtocol>)arg1 inGraph:(PGGraph *)arg2 allowGuestAsset:(bool)arg3 progressReporter:(MAProgressReporter *)arg4;
- (CLSInvestigationPhotoKitFeeder *)relevantKeyCurationFeederForTriggeredMemory:(id <PGTriggeredMemoryProtocol>)arg1 inGraph:(PGGraph *)arg2 allowGuestAsset:(bool)arg3 progressReporter:(MAProgressReporter *)arg4;
- (PGTitleGenerator *)titleGeneratorForTriggeredMemory:(id <PGTriggeredMemoryProtocol>)arg1 withKeyAsset:(PHAsset *)arg2 curatedAssets:(NSArray *)arg3 extendedCuratedAssets:(NSArray *)arg4 titleGenerationContext:(PGTitleGenerationContext *)arg5 inGraph:(PGGraph *)arg6;
- (NSSet *)uuidsOfRequiredAssetsWithKeyAsset:(PHAsset *)arg1 triggeredMemory:(id <PGTriggeredMemoryProtocol>)arg2 inGraph:(PGGraph *)arg3 progressReporter:(MAProgressReporter *)arg4;

@end
