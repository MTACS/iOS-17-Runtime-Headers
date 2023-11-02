
@interface PGSingleMomentMemoryGenerator : PGMemoryGenerator

- (id)generateAllPotentialMemoriesWithGraph:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(bool)arg3 progressReporter:(id)arg4;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;

@end
