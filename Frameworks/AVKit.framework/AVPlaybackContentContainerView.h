
@interface AVPlaybackContentContainerView : UIView <AVPlaybackContentContainer> {
    bool  _canShowStatusBarBackgroundGradientWhenStatusBarVisible;
    UIView * _contentOverlayView;
    UIView * _contentOverlayViewSubview;
    bool  _observingStatusBarHidden;
    __AVPlayerLayerView * _playerLayerView;
    bool  _playingOnSecondScreen;
    AVStatusBarBackgroundGradientView * _statusBarBackgroundGradientView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _videoContentFrame;
    AVVisualAnalysisView * _visualAnalysisView;
}

@property (nonatomic, readonly) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic) bool canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (nonatomic, readonly) UIView *contentOverlayView;
@property (nonatomic, retain) UIView *contentOverlayViewSubview;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isObservingStatusBarHidden, nonatomic) bool observingStatusBarHidden;
@property (nonatomic, retain) __AVPlayerLayerView *playerLayerView;
@property (getter=isPlayingOnSecondScreen, nonatomic) bool playingOnSecondScreen;
@property (nonatomic, readonly) AVStatusBarBackgroundGradientView *statusBarBackgroundGradientView;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoContentFrame;
@property (nonatomic, retain) AVVisualAnalysisView *visualAnalysisView;

- (void).cxx_destruct;
- (void)_updateStatusBarBackgroundGradientViewAlpha;
- (id)activeContentView;
- (bool)canShowStatusBarBackgroundGradientWhenStatusBarVisible;
- (id)contentOverlayView;
- (id)contentOverlayViewSubview;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 activeContentView:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 playerLayerView:(id)arg2 contentOverlayView:(id)arg3;
- (bool)isObservingStatusBarHidden;
- (bool)isPlayingOnSecondScreen;
- (void)layoutSubviews;
- (id)playerLayerView;
- (void)removeAllSublayerTransformAnimations;
- (void)setCanShowStatusBarBackgroundGradientWhenStatusBarVisible:(bool)arg1;
- (void)setContentOverlayViewSubview:(id)arg1;
- (void)setObservingStatusBarHidden:(bool)arg1;
- (void)setPlayerLayerView:(id)arg1;
- (void)setPlayingOnSecondScreen:(bool)arg1;
- (void)setVideoContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVideoGravity:(long long)arg1 removingAllSublayerTransformAnimations:(bool)arg2;
- (void)setVisualAnalysisView:(id)arg1;
- (id)statusBarBackgroundGradientView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoContentFrame;
- (id)visualAnalysisView;

@end
