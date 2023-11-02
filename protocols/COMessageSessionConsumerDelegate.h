
@protocol COMessageSessionConsumerDelegate <NSObject>

@optional

- (void)channel:(COMessageChannel *)arg1 didAddConsumer:(COMessageSessionConsumer *)arg2;
- (void)channel:(COMessageChannel *)arg1 didFailToAddConsumerWithSubTopic:(NSString *)arg2 error:(NSError *)arg3;
- (void)consumer:(COMessageSessionConsumer *)arg1 didFailToStartSessionWithMember:(COClusterMemberRoleSnapshot *)arg2 error:(NSError *)arg3;
- (void)consumer:(COMessageSessionConsumer *)arg1 didStartSession:(COMessageSession *)arg2;
- (void)consumer:(COMessageSessionConsumer *)arg1 didStopSession:(COMessageSession *)arg2 initiator:(COClusterMemberRoleSnapshot *)arg3 notice:(COMessageSessionNotice *)arg4 error:(NSError *)arg5;
- (void)consumer:(void *)arg1 shouldStartSessionWithMember:(void *)arg2 request:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: COMessageSessionConsumer *, COClusterMemberRoleSnapshot *, COMessageSessionRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, COMessageSessionResponse *, void*

@end
