
@interface SnippetUI.RFVisualResponseShown : VRXTurnBasedInstrumentationEvent {
    void instrumentationClient;
    void instrumentationPayload;
    void patternId;
    void preferences;
    void remoteAssetManager;
    void responseViewId;
}

- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)arg1;
- (id)init;
- (id)initWithCardData:(id)arg1 responseViewId:(id)arg2;

@end
