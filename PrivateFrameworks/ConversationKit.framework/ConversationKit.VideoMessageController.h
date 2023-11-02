
@interface ConversationKit.VideoMessageController : NSObject <TUMomentsControllerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _latestVideoMessageURL;
    void _momentsController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _state;
    void callCenter;
    void countdownShown;
    void countdownSink;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentRecordingUUID;
    void currentVideoMessagePlayerViewModel;
    void hasActiveOrPendingRecordingSession;
    void ignoresStateUpdates;
    void isVideoMessagingEnabled;
    void isVideoSensitive;
    void mostRecentActiveConversation;
    void sendingInProgress;
    void subscriptions;
    void videoMessageSendSoundPlayer;
    void viewStateReadyForVideoMessageRecording;
    void warmedMomentsController;
}

- (void).cxx_destruct;
- (id)init;
- (void)momentsController:(id)arg1 didFinishProcessingRawVideoMessage:(id)arg2;

@end
