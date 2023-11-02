
@protocol PBFPosterSnapshotCoordinatorProviding <NSObject>

@required

- (void)pbf_enumerateSnapshotCoordinators:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PBFPosterSnapshotCoordinator *, PRSServerPosterIdentity *, bool*, void*
- (PBFPosterSnapshotCoordinator *)pbf_posterSnapshotCoordinatorForIdentity:(PRSServerPosterIdentity *)arg1;

@end
