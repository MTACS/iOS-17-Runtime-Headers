
@interface PGLastMonthAtHomeMemoryGenerator : PGMemoryGenerator

+ (id)lastMonthAtHomeMemoriesForMonth:(long long)arg1 year:(long long)arg2 inGraph:(id)arg3 momentNodesWithBlockedFeatureCache:(id)arg4 photoLibrary:(id)arg5 loggingConnection:(id)arg6 progressReporter:(id)arg7;

- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;

@end
