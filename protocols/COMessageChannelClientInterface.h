
@protocol COMessageChannelClientInterface <NSObject>

@required

- (void)failedToSendRequestWithID:(unsigned int)arg1 withError:(NSError *)arg2;
- (void)receivedRecipientListForRequestID:(unsigned int)arg1 recipients:(NSArray *)arg2;
- (void)receivedRequestWithPayload:(void *)arg1 payloadType:(void *)arg2 requestID:(void *)arg3 fromMember:(void *)arg4 withCallback:(void *)arg5; // needs 5 arg types, found 12: NSData *, NSString *, unsigned int, COClusterMemberRoleSnapshot *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSString *, NSError *, void*
- (void)receivedResponseForRequestID:(unsigned int)arg1 responsePayload:(NSData *)arg2 responseType:(NSString *)arg3 responseError:(NSError *)arg4 fromMember:(COClusterMemberRoleSnapshot *)arg5;

@end
