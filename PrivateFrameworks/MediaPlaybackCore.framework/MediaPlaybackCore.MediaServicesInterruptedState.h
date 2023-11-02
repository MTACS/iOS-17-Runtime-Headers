
@interface MediaPlaybackCore.MediaServicesInterruptedState : MediaPlaybackCore.PausedState {
    void event;
    void interruptedItem;
    void interruptedState;
}

@end
