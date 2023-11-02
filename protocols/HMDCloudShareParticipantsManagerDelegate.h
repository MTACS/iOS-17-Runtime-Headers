
@protocol HMDCloudShareParticipantsManagerDelegate <NSObject>

@required

- (void)manager:(HMDCloudShareParticipantsManager *)arg1 didRequestSendForInvitation:(HMBShareInvitation *)arg2 toDevice:(HMDDevice *)arg3;
- (void)manager:(HMDCloudShareParticipantsManager *)arg1 didRequestSendForInvitation:(HMBShareInvitation *)arg2 toUser:(HMDUser *)arg3;
- (void)manager:(HMDCloudShareParticipantsManager *)arg1 didRevokeShareAccessForUser:(HMDUser *)arg2;

@end
