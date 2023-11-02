
@protocol ASIDSMessageCenterDelegate <NSObject>

@required

- (void)messageCenter:(void *)arg1 didReceiveFinalizeHandshake:(void *)arg2 fromSenderAddress:(void *)arg3 messageHandledCompletion:(void *)arg4; // needs 4 arg types, found 9: ASIDSMessageCenter *, ASCodableFinalizeHandshake *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)messageCenter:(void *)arg1 didReceiveInviteRequest:(void *)arg2 fromSenderAddress:(void *)arg3 messageHandledCompletion:(void *)arg4; // needs 4 arg types, found 9: ASIDSMessageCenter *, ASCodableInviteRequest *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)messageCenter:(void *)arg1 didReceiveInviteResponse:(void *)arg2 fromSenderAddress:(void *)arg3 messageHandledCompletion:(void *)arg4; // needs 4 arg types, found 9: ASIDSMessageCenter *, ASCodableInviteResponse *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)messageCenter:(void *)arg1 didReceiveWithdrawInviteRequest:(void *)arg2 fromSenderAddress:(void *)arg3 messageHandledCompletion:(void *)arg4; // needs 4 arg types, found 9: ASIDSMessageCenter *, ASCodableWithdrawInviteRequest *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@optional

- (void)messageCenter:(ASIDSMessageCenter *)arg1 errorSendingFinalizeHandshake:(ASCodableFinalizeHandshake *)arg2;
- (void)messageCenter:(ASIDSMessageCenter *)arg1 errorSendingInviteRequest:(ASCodableInviteRequest *)arg2;
- (void)messageCenter:(ASIDSMessageCenter *)arg1 errorSendingInviteResponse:(ASCodableInviteResponse *)arg2;
- (void)messageCenter:(ASIDSMessageCenter *)arg1 errorSendingWithdrawInviteRequest:(ASCodableWithdrawInviteRequest *)arg2;

@end
