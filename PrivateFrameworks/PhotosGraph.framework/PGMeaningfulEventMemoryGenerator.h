
@interface PGMeaningfulEventMemoryGenerator : PGFeaturedMemoryGenerator {
    unsigned long long  _eventType;
    NSDate * _lowerBoundLocalDate;
    unsigned long long  _meaning;
    NSString * _meaningfulEventUUID;
    unsigned long long  _memoryCategory;
    bool  _skipsCollectionTitle;
}

@property (nonatomic) unsigned long long eventType;
@property (nonatomic, retain) NSDate *lowerBoundLocalDate;
@property (nonatomic) unsigned long long meaning;
@property (nonatomic, retain) NSString *meaningfulEventUUID;
@property (nonatomic) unsigned long long memoryCategory;
@property (nonatomic) bool skipsCollectionTitle;

+ (id)_invalidMeaningLabelsForMemories;

- (void).cxx_destruct;
- (unsigned long long)eventType;
- (id)generateAllPotentialMemoriesWithGraph:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg1 inGraph:(id)arg2;
- (id)lowerBoundLocalDate;
- (unsigned long long)meaning;
- (id)meaningfulEventUUID;
- (unsigned long long)memoryCategory;
- (void)setEventType:(unsigned long long)arg1;
- (void)setLowerBoundLocalDate:(id)arg1;
- (void)setMeaning:(unsigned long long)arg1;
- (void)setMeaningfulEventUUID:(id)arg1;
- (void)setMemoryCategory:(unsigned long long)arg1;
- (void)setSkipsCollectionTitle:(bool)arg1;
- (bool)skipsCollectionTitle;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;

@end
