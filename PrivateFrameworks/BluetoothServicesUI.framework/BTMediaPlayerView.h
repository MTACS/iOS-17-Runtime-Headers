
@interface BTMediaPlayerView : UIView {
    AVPlayerLooper * _avLooper;
    AVQueuePlayer * _avPlayer;
}

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)startMovieLoopWithPath:(id)arg1;
- (void)startMovieLoopWithPath:(id)arg1 assetType:(int)arg2 adjustmentsURL:(id)arg3;
- (void)stop;

@end
