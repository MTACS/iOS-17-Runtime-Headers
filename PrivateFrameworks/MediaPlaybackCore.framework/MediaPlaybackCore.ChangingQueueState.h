
@interface MediaPlaybackCore.ChangingQueueState : MediaPlaybackCore.State {
    void delayedActionWhenReady;
    void initialLoadFailure;
    void initialLoadShouldPlay;
}

@end
