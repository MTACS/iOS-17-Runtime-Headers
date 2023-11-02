
@interface SiriUIBridge.UIBridgeService : NSObject <AFBridgeConnectionListenerDelegate, AFUIBridgeService> {
    void messagePublisher;
    void queue;
    void serviceHelper;
    void uiBridgeListener;
    void uiSessionProcessor;
}

- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)init;
- (void)preheat;
- (void)siriDismissed;
- (void)siriPrompted;
- (void)siriWillPrompt;
- (void)startAttending;
- (void)stopAttendingWithReason:(unsigned long long)arg1;

@end
