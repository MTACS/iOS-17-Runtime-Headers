
@interface MediaPlaybackCore.JumpToTimeState : MediaPlaybackCore.State {
    void deferredPlayerEvent;
    void initialLoadingShouldPlay;
    void jumpToTimeInfo;
    void metadata;
    void playbackDidStall;
    void suppressed;
    void targetTime;
}

@end
