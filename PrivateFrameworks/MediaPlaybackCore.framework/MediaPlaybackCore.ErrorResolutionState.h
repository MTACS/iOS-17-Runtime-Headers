
@interface MediaPlaybackCore.ErrorResolutionState : MediaPlaybackCore.State {
    void initialLoadFailure;
    void initialLoadShouldPlay;
    void playerItem;
    void steps;
    void triggerEvent;
}

@end
