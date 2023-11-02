
@interface MediaPlaybackCore.PlayingState : MediaPlaybackCore.TransportableState {
    void isStalled;
    void lastPlayingItemID;
    void playbackStopReason;
    void playbackStopRecoveryDelay;
    void playbackStopRecoveryTimer;
    void resumeOnEnter;
}

@end
