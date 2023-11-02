
@interface _PNPPencilMovieView : UIView {
    AVPlayer * _player;
    bool  _repeat;
}

+ (double)_playbackRate;
+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_applyFilterToLayer;
- (void)_playbackEnded;
- (id)_playerLayer;
- (void)completeRevolutionWithCompletionBlock:(id /* block */)arg1;
- (void)prepare;
- (void)teardown;

@end
