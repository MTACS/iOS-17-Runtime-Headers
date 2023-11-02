
@interface SeymourUI.SessionCastingPresenter : NSObject {
    void countdownState;
    void display;
    void gymKitConnectionState;
    void onAirplayButtonTapped;
    void onExitButtonTapped;
    void onStartIntentExpressed;
    void remotePlaybackState;
    void sessionClient;
    void sessionToken;
    void subscriptionToken;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  workoutDeviceConnection;
}

- (void).cxx_destruct;
- (id)init;

@end
