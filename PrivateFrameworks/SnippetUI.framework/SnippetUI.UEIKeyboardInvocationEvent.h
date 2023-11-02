
@interface SnippetUI.UEIKeyboardInvocationEvent : VRXTurnBasedInstrumentationEvent {
    void instrumentationClient;
    void keyboardPrimaryLanguage;
}

@property (nonatomic, readonly) bool requiresNewTurn;

- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)arg1;
- (id)init;
- (bool)requiresNewTurn;

@end
