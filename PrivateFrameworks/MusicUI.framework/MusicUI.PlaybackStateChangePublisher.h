
@interface MusicUI.PlaybackStateChangePublisher : _TtCs12_SwiftObject {
    void nowPlayingItemDescriptor;
    void onContentReloadTrigger;
    void playbackManager;
    void playbackState;
}

- (void)nowPlayingItemDidChange:(id)arg1;
- (void)playbackStateDidChange:(id)arg1;

@end
