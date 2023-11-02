
@interface PBUILivePhotoPlayerLivePhotoView : PBUILivePhotoPlayerView {
    ISLivePhotoUIView * _livePhotoView;
}

- (void).cxx_destruct;
- (id)_playerUIView;
- (void)_subclass_updateForForcingPlayback:(bool)arg1;
- (void)_subclass_updatePlayerItemForUse:(id)arg1;
- (id)gestureRecognizer;
- (id)init;
- (long long)playbackState;

@end
