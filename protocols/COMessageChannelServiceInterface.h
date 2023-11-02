
@protocol COMessageChannelServiceInterface <NSObject>

@required

- (void)activateMessageChannelForTopic:(void *)arg1 cluster:(void *)arg2 handlers:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 11: NSString *, COCluster *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, unsigned long long, unsigned long long, void*
- (void)sendRequestWithPayload:(NSData *)arg1 payloadType:(NSString *)arg2 requestType:(long long)arg3 requestID:(unsigned int)arg4 members:(NSSet *)arg5 activityToken:(NSObject<OS_xpc_object> *)arg6;
- (void)sessionEndedForSubTopic:(NSString *)arg1;
- (void)sessionStartedForSubTopic:(NSString *)arg1 withMember:(COClusterMember *)arg2 produced:(bool)arg3;

@end
