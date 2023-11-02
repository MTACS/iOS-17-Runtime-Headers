
@interface PGSemanticalDeduper : PGDeduper {
    bool  _usesAdaptiveSimilarStacking;
}

@property (nonatomic) bool usesAdaptiveSimilarStacking;

- (id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)itemsNeedingSceneprintInTimeClusters:(id)arg1;
- (id)sceneprintByItemIdentifierWithItems:(id)arg1;
- (void)setUsesAdaptiveSimilarStacking:(bool)arg1;
- (bool)usesAdaptiveSimilarStacking;

@end
