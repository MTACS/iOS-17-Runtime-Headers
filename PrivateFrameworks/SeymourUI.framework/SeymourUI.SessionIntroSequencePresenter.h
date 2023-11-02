
@interface SeymourUI.SessionIntroSequencePresenter : NSObject <AVAudioPlayerDelegate> {
    void audioPlayer;
    void audioSessionCategory;
    void audioSessionMode;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  catalogWorkout;
    void display;
    void onCountdownSequenceCompleted;
    void onCountdownSequenceStarted;
    void onStartCountdown;
    void platform;
    void sessionCountdownCoordinator;
    void sessionRouteCategory;
    void sessionRouteMonitor;
    void subscriptionToken;
    void timer;
    void timerProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  workoutDeviceConnection;
}

- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (id)init;

@end
