
@interface AVPlaybackContentTransitioningView : UIScrollView <AVPlaybackContentContainer, UIScrollViewDelegate> {
    AVPlaybackContentContainerView * _activeContentView;
    long long  _boundsOrContentSizeAdjustmentCount;
    <AVPlaybackContentTransitioningViewDelegate> * _contentTransitioningDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameForActiveContentView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameForTransitioningContentView;
    AVPlaybackContentContainerView * _incomingContentView;
    bool  _playingOnSecondScreen;
    NSString * _stateDescription;
    NSValue * _targetContentOffset;
    long long  _transitionDirection;
    bool  _transitionInteractive;
    double  _transitionProgress;
    long long  _transitionState;
}

@property (nonatomic, readonly) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic) long long boundsOrContentSizeAdjustmentCount;
@property (nonatomic) bool canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (nonatomic) <AVPlaybackContentTransitioningViewDelegate> *contentTransitioningDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameForActiveContentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameForTransitioningContentView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVPlaybackContentContainerView *incomingContentView;
@property (getter=isPlayingOnSecondScreen, nonatomic) bool playingOnSecondScreen;
@property (nonatomic, copy) NSString *stateDescription;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSValue *targetContentOffset;
@property (nonatomic, readonly) long long transitionDirection;
@property (getter=isTransitionInteractive, nonatomic) bool transitionInteractive;
@property (nonatomic, readonly) double transitionProgress;
@property (nonatomic, readonly) long long transitionState;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoContentFrame;

- (void).cxx_destruct;
- (bool)_canTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (id)_descriptionForState:(long long)arg1;
- (void)_ensureContentViews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameExcludingActiveContent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameExcludingTransitioningContent;
- (bool)_isAdjustingBoundsOrContentSize;
- (id)_makeStateDescription;
- (void)_performBoundsOrContentSizeAdjustment:(id /* block */)arg1;
- (void)_setTransitionState:(id)arg1 transitionDirection:(id)arg2 transitionProgress:(id)arg3;
- (void)_updateSizeAndContentFrame;
- (void)_updateTransitionStateIfPossible;
- (id)activeContentView;
- (long long)boundsOrContentSizeAdjustmentCount;
- (bool)canShowStatusBarBackgroundGradientWhenStatusBarVisible;
- (id)contentTransitioningDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForActiveContentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForTransitioningContentView;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)incomingContentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 activeContentView:(id)arg2;
- (bool)isPlayingOnSecondScreen;
- (bool)isTransitionInteractive;
- (void)performTransition:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setBoundsOrContentSizeAdjustmentCount:(long long)arg1;
- (void)setCanShowStatusBarBackgroundGradientWhenStatusBarVisible:(bool)arg1;
- (void)setContentTransitioningDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameForActiveContentView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameForTransitioningContentView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlayingOnSecondScreen:(bool)arg1;
- (void)setStateDescription:(id)arg1;
- (void)setTargetContentOffset:(id)arg1;
- (void)setTransitionInteractive:(bool)arg1;
- (void)setVideoContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVideoGravity:(long long)arg1 removingAllSublayerTransformAnimations:(bool)arg2;
- (id)stateDescription;
- (id)targetContentOffset;
- (long long)transitionDirection;
- (double)transitionProgress;
- (long long)transitionState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoContentFrame;

@end
