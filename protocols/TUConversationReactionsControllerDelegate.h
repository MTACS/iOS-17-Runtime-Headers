
@protocol TUConversationReactionsControllerDelegate <NSObject>

@optional

- (void)reactionsController:(TUConversationReactionsController *)arg1 conversation:(TUConversation *)arg2 participant:(TUConversationParticipant *)arg3 didReact:(NSString *)arg4;
- (void)reactionsController:(TUConversationReactionsController *)arg1 conversation:(TUConversation *)arg2 participantDidStopReacting:(TUConversationParticipant *)arg3;

@end
