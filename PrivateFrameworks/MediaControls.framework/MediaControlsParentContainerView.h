
@interface MediaControlsParentContainerView : UIView {
    MediaControlsSeparatorView * _bottomDividerView;
    MediaControlsContainerView * _containerView;
    UIView * _mediaControlsRoutingPickerView;
    long long  _routingViewControllerAnimationCount;
    long long  _selectedMode;
    long long  _style;
    MediaControlsSeparatorView * _topDividerView;
}

@property (nonatomic, retain) MediaControlsSeparatorView *bottomDividerView;
@property (nonatomic, retain) MediaControlsContainerView *containerView;
@property (nonatomic, retain) UIView *mediaControlsRoutingPickerView;
@property (nonatomic, retain) UIView *routingView;
@property (nonatomic) long long routingViewControllerAnimationCount;
@property (nonatomic) long long selectedMode;
@property (nonatomic) long long style;
@property (nonatomic, retain) MediaControlsTimeControl *timeControl;
@property (nonatomic, retain) MediaControlsSeparatorView *topDividerView;
@property (nonatomic, retain) MediaControlsTransportStackView *transportStackView;

- (void).cxx_destruct;
- (void)_setInitialFrameForRoutingView:(id)arg1;
- (void)_toggleRoutingPickerAnimated:(bool)arg1;
- (void)_updateRoutingPickerVisibilityAnimated:(bool)arg1;
- (void)_updateTimeControlVisibility:(id)arg1;
- (id)bottomDividerView;
- (id)containerView;
- (void)didMoveToWindow;
- (void)handleHoverGestureRecognizer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mediaControlsRoutingPickerView;
- (id)routingView;
- (long long)routingViewControllerAnimationCount;
- (long long)selectedMode;
- (void)setBottomDividerView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setMediaControlsRoutingPickerView:(id)arg1;
- (void)setRoutingView:(id)arg1;
- (void)setRoutingViewControllerAnimationCount:(long long)arg1;
- (void)setSelectedMode:(long long)arg1;
- (void)setSelectedMode:(long long)arg1 animated:(bool)arg2;
- (void)setStyle:(long long)arg1;
- (void)setTimeControl:(id)arg1;
- (void)setTopDividerView:(id)arg1;
- (void)setTransportStackView:(id)arg1;
- (long long)style;
- (id)timeControl;
- (id)topDividerView;
- (id)transportStackView;

@end
