
@interface KnowledgeGraphKit.KGWrapperMutableDirectedBinaryAdjacency : KnowledgeGraphKit.KGWrapperDirectedBinaryAdjacency

- (void)formUnionWith:(id)arg1;
- (id)init;
- (void)insertSource:(unsigned long long)arg1 target:(unsigned long long)arg2;
- (void)removeSource:(unsigned long long)arg1 target:(unsigned long long)arg2;
- (void)removeTargetsForSource:(unsigned long long)arg1;
- (void)setTargets:(id)arg1 forSource:(unsigned long long)arg2;
- (void)subtract:(id)arg1;

@end
