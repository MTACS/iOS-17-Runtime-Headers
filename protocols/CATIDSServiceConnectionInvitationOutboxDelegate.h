
@protocol CATIDSServiceConnectionInvitationOutboxDelegate

@required

- (void)connectionInvitationOutbox:(CATIDSServiceConnectionInvitationOutbox *)arg1 foundConnection:(NSUUID *)arg2 destinationAppleID:(NSString *)arg3 destinationAddress:(NSString *)arg4 assertion:(id <CATCancelable>)arg5 messagingVersion:(unsigned long long)arg6 userInfo:(NSDictionary *)arg7;
- (void)connectionInvitationOutbox:(CATIDSServiceConnectionInvitationOutbox *)arg1 receivedARejectionFrom:(NSString *)arg2 connectionIdentifier:(NSUUID *)arg3 userInfo:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)connectionInvitationOutbox:(CATIDSServiceConnectionInvitationOutbox *)arg1 wantsToAcknowledgeInvitation:(NSUUID *)arg2 connectionIdentifier:(NSUUID *)arg3 destinationAddress:(NSString *)arg4;
- (void)connectionInvitationOutbox:(CATIDSServiceConnectionInvitationOutbox *)arg1 wantsToSendInvitation:(NSUUID *)arg2 destinationAppleID:(NSString *)arg3 userInfo:(NSDictionary *)arg4;

@end
