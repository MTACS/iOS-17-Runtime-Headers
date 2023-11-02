
@protocol HMDCloudShareParticipantsManagerDataSource <NSObject>

@required

- (bool)manager:(HMDCloudShareParticipantsManager *)arg1 shouldShareWithUser:(HMDUser *)arg2;

@optional

- (bool)areShareModificationsEnabledForManager:(HMDCloudShareParticipantsManager *)arg1;
- (bool)canUseUntrustedAccountHandlesForParticipantManager:(HMDCloudShareParticipantsManager *)arg1;
- (bool)manager:(HMDCloudShareParticipantsManager *)arg1 shouldGrantWriteAccessToUser:(HMDUser *)arg2;

@end
