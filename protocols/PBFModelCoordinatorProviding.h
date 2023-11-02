
@protocol PBFModelCoordinatorProviding <PBFPosterSnapshotCoordinatorProviding, PBFExtensionProviding>

@required

- (PBFPosterExtensionStoreCoordinator *)pbf_posterExtensionStoreCoordinatorForProviderIdentifier:(NSString *)arg1 error:(out id*)arg2;
- (NSArray *)pbf_posterExtensionStoreCoordinatorsForRole:(NSString *)arg1;

@end
