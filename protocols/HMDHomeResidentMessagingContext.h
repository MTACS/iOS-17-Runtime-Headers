
@protocol HMDHomeResidentMessagingContext <NSObject>

@required

- (NSArray *)enabledResidents;
- (NSUUID *)messageTargetUUID;
- (HMFMessageDispatcher *)msgDispatcher;
- (void)setMsgDispatcher:(HMFMessageDispatcher *)arg1;

@end
