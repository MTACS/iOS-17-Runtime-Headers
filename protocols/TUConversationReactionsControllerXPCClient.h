
@protocol TUConversationReactionsControllerXPCClient <NSObject>

@required

- (oneway void)conversation:(TUConversation *)arg1 participant:(TUConversationParticipant *)arg2 didReact:(NSString *)arg3;
- (oneway void)conversation:(TUConversation *)arg1 participantDidStopReacting:(TUConversationParticipant *)arg2;

@end
