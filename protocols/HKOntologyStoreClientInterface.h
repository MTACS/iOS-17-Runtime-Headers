
@protocol HKOntologyStoreClientInterface <NSObject>

@required

- (void)client_didImportEntry:(HKOntologyShardRegistryEntry *)arg1;
- (void)client_didStageEntry:(HKOntologyShardRegistryEntry *)arg1;

@end
