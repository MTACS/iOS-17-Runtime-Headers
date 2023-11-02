
@protocol COMessageSessionProducerDelegate <NSObject>

@optional

- (void)channel:(COMessageChannel *)arg1 didAddProducer:(COMessageSessionProducer *)arg2;
- (void)channel:(COMessageChannel *)arg1 didFailToAddProducerWithSubTopic:(NSString *)arg2 error:(NSError *)arg3;
- (void)producer:(COMessageSessionProducer *)arg1 didFailToStartSessionWithMember:(COClusterMemberRoleSnapshot *)arg2 error:(NSError *)arg3;
- (void)producer:(COMessageSessionProducer *)arg1 didStartSession:(COMessageSession *)arg2 member:(COClusterMemberRoleSnapshot *)arg3 response:(COMessageSessionResponse *)arg4;
- (void)producer:(COMessageSessionProducer *)arg1 didStopSession:(COMessageSession *)arg2 initiator:(COClusterMemberRoleSnapshot *)arg3 notice:(COMessageSessionNotice *)arg4 error:(NSError *)arg5;
- (void)producer:(void *)arg1 shouldStartSessionWithMember:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: COMessageSessionProducer *, COClusterMemberRoleSnapshot *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, COMessageSessionRequest *, void*

@end
