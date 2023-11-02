
@interface AVPlaybackContentZoomingView : UIScrollView <AVPlaybackContentContainer, UIScrollViewDelegate, _UIViewBoundingPathChangeObserver> {
    AVPlaybackContentContainerView * _activeContentView;
    AVCacheLargestInscribedRectInBoundingPath * _cacheLargestInscribedRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentAspectRatio;
    bool  _fullScreen;
    UIWindow * _lastKnownWindow;
    bool  _playingOnSecondScreen;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousBounds;
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
    bool  _zoomingEnabled;
}

@property (nonatomic, readonly) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic, retain) AVCacheLargestInscribedRectInBoundingPath *cacheLargestInscribedRect;
@property (nonatomic) bool canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (nonatomic) struct CGSize { double x1; double x2; } contentAspectRatio;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFullScreen, nonatomic) bool fullScreen;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIWindow *lastKnownWindow;
@property (getter=isPlayingOnSecondScreen, nonatomic) bool playingOnSecondScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousBounds;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoContentFrame;
@property (getter=isZoomingEnabled, nonatomic) bool zoomingEnabled;

- (void).cxx_destruct;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectForScale:(double)arg1;
- (struct CGSize { double x1; double x2; })_contentSizeForScale:(double)arg1;
- (void)_updateMinMaxZoomScales;
- (void)_updateMinMaxZoomScales:(bool)arg1;
- (id)activeContentView;
- (id)cacheLargestInscribedRect;
- (bool)canShowStatusBarBackgroundGradientWhenStatusBarVisible;
- (struct CGSize { double x1; double x2; })contentAspectRatio;
- (void)didMoveToWindow;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 activeContentView:(id)arg2;
- (bool)isFullScreen;
- (bool)isPlayingOnSecondScreen;
- (bool)isZoomingEnabled;
- (id)lastKnownWindow;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousBounds;
- (struct CGSize { double x1; double x2; })scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(struct CGSize { double x1; double x2; })arg3;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setCacheLargestInscribedRect:(id)arg1;
- (void)setCanShowStatusBarBackgroundGradientWhenStatusBarVisible:(bool)arg1;
- (void)setContentAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFullScreen:(bool)arg1;
- (void)setLastKnownWindow:(id)arg1;
- (void)setPlayingOnSecondScreen:(bool)arg1;
- (void)setPreviousBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVideoContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVideoGravity:(long long)arg1 removingAllSublayerTransformAnimations:(bool)arg2;
- (void)setZoomingEnabled:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoContentFrame;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)zoomToPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
