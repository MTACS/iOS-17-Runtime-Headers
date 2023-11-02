
@protocol TUConversationReactionsControllerDataSourceDelegate <NSObject>

@required

- (void)conversation:(TUConversation *)arg1 participant:(TUConversationParticipant *)arg2 didReact:(NSString *)arg3;
- (void)conversation:(TUConversation *)arg1 participantDidStopReacting:(TUConversationParticipant *)arg2;

@end
