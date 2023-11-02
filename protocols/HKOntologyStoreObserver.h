
@protocol HKOntologyStoreObserver

@required

- (void)ontologyStore:(HKOntologyStore *)arg1 didImportEntry:(HKOntologyShardRegistryEntry *)arg2;
- (void)ontologyStore:(HKOntologyStore *)arg1 didStageEntry:(HKOntologyShardRegistryEntry *)arg2;
- (void)ontologyStoreDidReconnect:(HKOntologyStore *)arg1;

@end
