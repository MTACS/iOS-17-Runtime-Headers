
@interface SnippetUI.RFComponentShown : VRXTurnBasedInstrumentationEvent {
    void componentIndex;
    void componentName;
    void componentType;
    void instrumentationClient;
}

- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)arg1;
- (id)init;

@end
