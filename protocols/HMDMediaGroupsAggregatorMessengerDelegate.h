
@protocol HMDMediaGroupsAggregatorMessengerDelegate <NSObject>

@required

- (void)didReceiveUpdateAssociatedGroupRequestMessage:(HMFMessage *)arg1 withGroupIdentifier:(NSUUID *)arg2 associatedGroupIdentifier:(NSUUID *)arg3 messenger:(HMDMediaGroupsAggregatorMessenger *)arg4;

@end
