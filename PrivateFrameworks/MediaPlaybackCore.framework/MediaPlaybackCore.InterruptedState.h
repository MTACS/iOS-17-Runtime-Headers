
@interface MediaPlaybackCore.InterruptedState : MediaPlaybackCore.PausedState {
    void interruptedState;
    void interruptionEvent;
    void signalOnEnter;
}

@end
