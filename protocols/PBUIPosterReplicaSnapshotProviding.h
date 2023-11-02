
@protocol PBUIPosterReplicaSnapshotProviding <NSObject>

@required

- (<BSInvalidatable> *)registerSnapshotSourceObserver:(id <PBUIPosterReplicaSourceObserver>)arg1;
- (<PBUIReplicaSnapshotSource> *)snapshotSourceForObserver:(id <PBUIPosterReplicaSourceObserver>)arg1;

@end
