
@protocol HMDMediaGroupsAggregatorBackupSenderDataSource <NSObject>

@required

- (NSArray *)backupGroupsForParticipantAccessoryUUID:(NSUUID *)arg1 mediaGroupsAggregatorBackupSender:(HMDMediaGroupsAggregatorBackupSender *)arg2;
- (HMDMediaGroupsAggregatorBackupReceiver *)receiverForParticipantAccessoryUUID:(NSUUID *)arg1 mediaGroupsAggregatorBackupSender:(HMDMediaGroupsAggregatorBackupSender *)arg2;
- (<HMDMessageRouter> *)routerForParticipantAccessoryUUID:(NSUUID *)arg1 mediaGroupsAggregatorBackupSender:(HMDMediaGroupsAggregatorBackupSender *)arg2;

@end
