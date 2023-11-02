
@protocol CPConversationManagerXPCClient

@required

- (void)requestEndpointWith:(void *)arg1 activitySessionUUID:(void *)arg2 activity:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSUUID *, TUConversationActivity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, void*
- (void)updateConversationContainersWithConversationContainersByGroupUUID:(NSDictionary *)arg1;

@end
