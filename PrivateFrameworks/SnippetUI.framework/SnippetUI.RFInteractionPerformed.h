
@interface SnippetUI.RFInteractionPerformed : VRXTurnBasedInstrumentationEvent {
    void actionName;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  command;
    void componentIndex;
    void componentName;
    void componentType;
    void instrumentationClient;
    void interactionType;
    void invocation;
}

@property (nonatomic, readonly) bool requiresNewTurn;

- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)arg1;
- (id)init;
- (bool)requiresNewTurn;

@end
