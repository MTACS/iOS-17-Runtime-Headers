
@interface PGEarlyMomentsWithPeopleMemoryGenerator : PGMemoryGenerator {
    NSDate * _localDate;
    bool  _shouldGenerateAllMemories;
}

@property (nonatomic, retain) NSDate *localDate;
@property (nonatomic) bool shouldGenerateAllMemories;

+ (id)earlyMomentNodesByPersonNodeWithPersonNodes:(id)arg1;
+ (unsigned long long)numberOfPotentialMemoriesForGraph:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateEarlyMomentsWithPeopleForLocalDate:(id)arg1 withGraph:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumeratePotentialMemoriesWithGraph:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg1 inGraph:(id)arg2;
- (id)localDate;
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(bool)arg3 progressReporter:(id)arg4;
- (void)setLocalDate:(id)arg1;
- (void)setShouldGenerateAllMemories:(bool)arg1;
- (bool)shouldGenerateAllMemories;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;

@end
