
@interface LiveSpeechUI.LiveSpeechCallManager : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _currentCallEvent;
    void callCenter;
    void callQueue;
    void currentCallCount;
    void currentVideoCallCount;
}

- (void).cxx_destruct;
- (void)handleCallStatusChanged:(id)arg1;
- (id)init;

@end
