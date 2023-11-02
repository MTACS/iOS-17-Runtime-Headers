
@protocol PBUIPosterReplicaPortalProviding <NSObject>

@required

- (<PBUIReplicaPortalSource> *)portalSourceForReplicaView:(UIView<PBUIPosterReplicaView> *)arg1;
- (<BSInvalidatable> *)registerPortalSourceObserver:(id <PBUIPosterReplicaSourceObserver>)arg1;

@end
