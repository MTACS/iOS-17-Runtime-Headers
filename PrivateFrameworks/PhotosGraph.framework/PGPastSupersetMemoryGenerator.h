
@interface PGPastSupersetMemoryGenerator : PGFeaturedMemoryGenerator {
    NSDate * _localDate;
}

@property (nonatomic, retain) NSDate *localDate;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesWithGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)chapterTitleGeneratorForTriggeredMemory:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 eligibleAssetUUIDs:(id)arg2 triggeredMemory:(id)arg3;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg1 inGraph:(id)arg2;
- (id)localDate;
- (id)relevantCurationFeederForTriggeredMemory:(id)arg1 relevantFeeder:(id)arg2 inGraph:(id)arg3 allowGuestAsset:(bool)arg4 progressReporter:(id)arg5;
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(bool)arg3 progressReporter:(id)arg4;
- (void)setLocalDate:(id)arg1;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;

@end
