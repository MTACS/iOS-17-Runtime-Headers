
@protocol CNKConversationHUDDetailsViewControllerDelegate

@required

- (void)wantsDismissal;

@optional

- (void)conversationHUDDetailsViewControllerDidLayoutWithContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)conversationHUDRequestedAddParticipant;
- (bool)isCaptioningEnabled;

@end
