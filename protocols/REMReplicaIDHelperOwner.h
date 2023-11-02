
@protocol REMReplicaIDHelperOwner <NSObject>

@required

- (void)replicaIDHelperDidAcquireReplicaUUID:(REMReplicaIDHelper *)arg1;
- (<REMReplicaManagerProviding> *)replicaManagerProvider;
- (void)setReplicaManagerProvider:(id <REMReplicaManagerProviding>)arg1;

@end
