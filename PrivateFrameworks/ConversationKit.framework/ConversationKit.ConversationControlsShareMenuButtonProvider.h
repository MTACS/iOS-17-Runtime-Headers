
@interface ConversationKit.ConversationControlsShareMenuButtonProvider : ConversationKit.ConversationControlsMenuButtonProvider {
    void additionalContentInsets;
    void featureFlags;
    void foregroundAppCancellable;
    void screenSharingActionIdentifier;
    void shareScreenCountdownView;
}

- (void)capturedDidChangeNotification:(id)arg1;
- (void)screenSharingButtonPressed;
- (void)setAutomaticShareState:(bool)arg1;

@end
