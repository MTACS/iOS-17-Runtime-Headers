
@protocol CPConversationManagerXPCHost <CPConversationMediaControllerXPCHost>

@required

- (void)addRemoteMembers:(NSSet *)arg1 toConversationWithUUID:(NSUUID *)arg2;
- (void)buzzMember:(TUConversationMember *)arg1 conversationUUID:(NSUUID *)arg2;
- (void)createActivitySessionWith:(void *)arg1 onConversationWithUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: TUConversationActivityCreateSessionRequest *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)includeMetricsReport:(NSDictionary *)arg1 onConversationWithUUID:(NSUUID *)arg2;
- (void)kickMember:(TUConversationMember *)arg1 conversationUUID:(NSUUID *)arg2;
- (void)prepareForGroupActivityWithOverrides:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CPAuthorizationRequestOverrides *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)registerIdentifierForCustomEndpoint:(NSString *)arg1;
- (void)requestConversationContainersByGroupUUIDWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)setActivityAuthorization:(bool)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)setDownlinkMuted:(bool)arg1 forRemoteParticipantsInConversationWithUUID:(NSUUID *)arg2;
- (void)unregisterIdentifierForCustomEndpoint:(NSString *)arg1;

@end
