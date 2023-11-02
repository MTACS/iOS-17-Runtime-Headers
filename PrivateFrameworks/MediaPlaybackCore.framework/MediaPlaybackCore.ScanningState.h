
@interface MediaPlaybackCore.ScanningState : MediaPlaybackCore.State {
    void direction;
    void isStalled;
    void metadata;
    void resumeRate;
}

@end
