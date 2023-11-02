
@protocol CPConversationManagerDataSourceObserver <NSObject>

@required

- (void)conversationManager:(id <CPConversationManagerDataSource>)arg1 activityAuthorizationChangedForBundleIdentifier:(NSString *)arg2;
- (void)conversationManager:(id <CPConversationManagerDataSource>)arg1 conversationChanged:(TUConversation *)arg2;

@optional

- (void)conversationManager:(void *)arg1 requestedEndpointWithIdentifier:(void *)arg2 activitySession:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <CPConversationManagerDataSource> *, NSString *, TUConversationActivitySession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, void*
- (void)conversationManager:(id <CPConversationManagerDataSource>)arg1 screenSharingAllowedChanged:(bool)arg2;
- (void)conversationManager:(id <CPConversationManagerDataSource>)arg1 sharePlayAllowedChanged:(bool)arg2;

@end
