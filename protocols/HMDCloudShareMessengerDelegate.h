
@protocol HMDCloudShareMessengerDelegate <NSObject>

@required

- (void)messenger:(void *)arg1 didReceiveInvitationData:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HMDCloudShareMessenger *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)messenger:(HMDCloudShareMessenger *)arg1 didReceiveInvitationRequestFromUser:(HMDUser *)arg2 device:(HMDDevice *)arg3;
- (void)messengerDidReceiveShareAccessRevocation:(HMDCloudShareMessenger *)arg1;

@end
