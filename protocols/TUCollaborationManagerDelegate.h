
@protocol TUCollaborationManagerDelegate <NSObject>

@required

- (void)addCollaboration:(SWCollaborationHighlight *)arg1 forConversation:(TUConversation *)arg2;
- (void)collaborationChanged:(SWCollaborationHighlight *)arg1 forConversation:(TUConversation *)arg2 collaborationState:(long long)arg3;
- (void)conversation:(TUConversation *)arg1 participant:(TUConversationParticipant *)arg2 addedCollaborationNotice:(TUCollaborationNotice *)arg3;
- (void)startTrackingCollaboration:(void *)arg1 forConversation:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: SWCollaborationHighlight *, TUConversation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*

@end
