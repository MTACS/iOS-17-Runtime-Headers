
@protocol CATIDSServiceConnectionInvitationInboxDelegate

@required

- (void)connectionInvitatioInbox:(CATIDSServiceConnectionInvitationInbox *)arg1 timeoutOutForInvitation:(NSUUID *)arg2 connectionIdentifier:(NSUUID *)arg3 senderAppleID:(NSString *)arg4 userInfo:(NSDictionary *)arg5;
- (void)connectionInvitationInbox:(CATIDSServiceConnectionInvitationInbox *)arg1 foundConection:(NSUUID *)arg2 senderAppleID:(NSString *)arg3 senderAddress:(NSString *)arg4 assertion:(id <CATCancelable>)arg5 messagingVersion:(unsigned long long)arg6 userInfo:(NSDictionary *)arg7;
- (void)connectionInvitationInbox:(CATIDSServiceConnectionInvitationInbox *)arg1 rejectedInvitation:(NSUUID *)arg2 connectionIdentifier:(NSUUID *)arg3 appleID:(NSString *)arg4 address:(NSString *)arg5 error:(NSError *)arg6;
- (void)connectionInvitationInbox:(void *)arg1 shouldConnectToAppleID:(void *)arg2 connectionIdentifier:(void *)arg3 userInfo:(void *)arg4 responseHandler:(void *)arg5; // needs 5 arg types, found 11: CATIDSServiceConnectionInvitationInbox *, NSString *, NSUUID *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)connectionInvitationInbox:(CATIDSServiceConnectionInvitationInbox *)arg1 wantsToAcceptInvitation:(NSUUID *)arg2 connectionIdentifier:(NSUUID *)arg3 destinationAddress:(NSString *)arg4;

@end
