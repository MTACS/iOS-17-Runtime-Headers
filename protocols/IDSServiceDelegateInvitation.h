
@protocol IDSServiceDelegateInvitation <IDSServiceDelegate>

@required

- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingInvitation:(IDSReceivedInvitation *)arg3 withContext:(IDSMessageContext *)arg4;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingInvitationUpdate:(IDSSentInvitation *)arg3 withContext:(IDSMessageContext *)arg4;

@end
