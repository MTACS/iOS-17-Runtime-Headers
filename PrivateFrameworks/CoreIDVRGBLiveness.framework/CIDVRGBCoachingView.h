
@interface CIDVRGBCoachingView : UIView {
    id /* block */  _completion;
    bool  _loop;
    AVQueuePlayer * _player;
    AVPlayerViewController * _playerViewController;
    float  playrate;
}

- (void).cxx_destruct;
- (id)_maskingCompositionForAsset:(id)arg1;
- (void)_notifyStyleFinished;
- (void)_setup:(id)arg1;
- (void)_videoPlaybackDidFinish:(id)arg1;
- (id)_videoURLForStyle:(long long)arg1;
- (id)initWithDuration:(id)arg1;
- (void)playWithCompletion:(id /* block */)arg1;
- (void)setStyle:(long long)arg1;
- (void)setStyle:(long long)arg1 loop:(bool)arg2 completion:(id /* block */)arg3;
- (void)stopWithoutCompletion;

@end
