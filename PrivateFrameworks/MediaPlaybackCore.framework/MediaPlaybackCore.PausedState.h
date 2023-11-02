
@interface MediaPlaybackCore.PausedState : MediaPlaybackCore.TransportableState {
    void fadeOut;
    void metadata;
    void playbackDidStartEvent;
    void playbackDidStopWasProcessed;
    void prepareForPlaybackEvent;
    void reason;
    void signalOnEnter;
    void suppressed;
}

@end
