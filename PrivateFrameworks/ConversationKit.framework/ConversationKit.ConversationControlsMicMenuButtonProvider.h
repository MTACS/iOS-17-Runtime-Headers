
@interface ConversationKit.ConversationControlsMicMenuButtonProvider : ConversationKit.ConversationControlsMenuButtonProvider {
    void routeCallbackCancellable;
    void routeController;
}

- (void)toggleMicButtonTapped;

@end
