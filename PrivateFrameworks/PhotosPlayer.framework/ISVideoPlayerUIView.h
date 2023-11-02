
@interface ISVideoPlayerUIView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsRect;
    ISAVPlayerUIView * _playerView;
    bool  _videoLayerReadyForDisplay;
    ISWrappedAVPlayer * _videoPlayer;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (nonatomic, readonly) bool videoLayerReadyForDisplay;
@property (nonatomic, copy) id /* block */ videoLayerReadyForDisplayChangeHandler;
@property (nonatomic, retain) ISWrappedAVPlayer *videoPlayer;

- (void).cxx_destruct;
- (void)_ISVideoPlayerUIView_commonInitialization;
- (void)_updateVideoGravity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)playerLayer;
- (void)setContentMode:(long long)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVideoLayerReadyForDisplayChangeHandler:(id /* block */)arg1;
- (void)setVideoPlayer:(id)arg1;
- (bool)videoLayerReadyForDisplay;
- (id /* block */)videoLayerReadyForDisplayChangeHandler;
- (id)videoPlayer;

@end
