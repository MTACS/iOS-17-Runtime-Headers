
@protocol REMReplicaClockProviding <NSObject>

@required

- (REMClockElementList *)clockElementListForReplicaUUID:(NSUUID *)arg1;

@end
