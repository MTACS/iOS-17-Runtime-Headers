
@interface KGMutableDirectedBinaryAdjacency : KGDirectedBinaryAdjacency

@property (readonly) _TtC17KnowledgeGraphKit39KGWrapperMutableDirectedBinaryAdjacency *mutableUnderlyingObject;

- (void)formUnionWith:(id)arg1;
- (id)init;
- (void)insertSource:(unsigned long long)arg1 target:(unsigned long long)arg2;
- (id)mutableUnderlyingObject;
- (void)removeSource:(unsigned long long)arg1 target:(unsigned long long)arg2;
- (void)removeTargetsForSource:(unsigned long long)arg1;
- (void)setTargets:(id)arg1 forSource:(unsigned long long)arg2;
- (void)subtract:(id)arg1;

@end
