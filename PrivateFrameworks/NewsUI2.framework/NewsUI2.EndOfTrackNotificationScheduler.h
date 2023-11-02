
@interface NewsUI2.EndOfTrackNotificationScheduler : NSObject <FCUserInfoObserving> {
    void currentlyPlaying;
    void currentlyPlayingObservableToken;
    void notificationService;
    void readingHistory;
    void schedulerState;
}

- (void).cxx_destruct;
- (id)init;
- (void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)arg1 fromCloud:(bool)arg2;

@end
