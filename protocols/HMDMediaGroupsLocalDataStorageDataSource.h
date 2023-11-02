
@protocol HMDMediaGroupsLocalDataStorageDataSource <NSObject>

@required

- (HMDMediaGroupsAggregatorBackupReceiver *)receiverForParticipantAccessoryUUID:(NSUUID *)arg1 mediaGroupsLocalDataStorage:(HMDMediaGroupsLocalDataStorage *)arg2;
- (<HMDMessageRouter> *)routerForParticipantAccessoryUUID:(NSUUID *)arg1 mediaGroupsLocalDataStorage:(HMDMediaGroupsLocalDataStorage *)arg2;

@end
