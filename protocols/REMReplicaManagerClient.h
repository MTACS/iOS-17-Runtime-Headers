
@protocol REMReplicaManagerClient <REMReplicaClockProviding>

@required

- (NSString *)crdtID;
- (NSUUID *)replicaUUID;

@end
