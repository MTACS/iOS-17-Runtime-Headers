
@interface KGStoredGraph : KGMutableGraph

@property (nonatomic, readonly) <KGGraphStore> *store;

- (id)initGraphWithStore:(id)arg1 entityFactory:(id)arg2;
- (id)store;

@end
