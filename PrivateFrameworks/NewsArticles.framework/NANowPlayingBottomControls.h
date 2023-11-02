
@interface NANowPlayingBottomControls : UIView {
    <NANowPlayingBottomControlsDelegate> * _delegate;
    MPMediaControls * _mediaControls;
    NATouchInsetsButton * _playbackSpeedButton;
    MPRouteButton * _routeButton;
    NATouchInsetsButton * _sizingPlaybackSpeedButton;
}

@property (nonatomic) <NANowPlayingBottomControlsDelegate> *delegate;
@property (nonatomic, retain) MPMediaControls *mediaControls;
@property (nonatomic, retain) NATouchInsetsButton *playbackSpeedButton;
@property (nonatomic, retain) MPRouteButton *routeButton;
@property (nonatomic, retain) NATouchInsetsButton *sizingPlaybackSpeedButton;

+ (id)_accessibilityValueForRate:(double)arg1;
+ (id)_labelForRate:(double)arg1;

- (void).cxx_destruct;
- (id)buttonTitleFont;
- (void)dealloc;
- (id)delegate;
- (void)dismissAirplayPicker;
- (double)iconCenterY;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutPlaybackSpeedButton;
- (void)layoutRouteButton;
- (void)layoutSubviews;
- (id)mediaControls;
- (id)playbackSpeedButton;
- (void)playbackSpeedButtonTapped:(id)arg1;
- (id)routeButton;
- (void)routeButtonTapped:(id)arg1;
- (void)routeButtonTouchDown:(id)arg1;
- (void)routeButtonTouchUpOutside:(id)arg1;
- (void)routeDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMediaControls:(id)arg1;
- (void)setPlaybackSpeedButton:(id)arg1;
- (void)setRate:(double)arg1;
- (void)setRouteButton:(id)arg1;
- (void)setSizingPlaybackSpeedButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sizingPlaybackSpeedButton;
- (double)spacingBetweenButtonCenters;
- (void)startAirplayStatusUpdates;
- (void)updateRouteButtonWithRoute:(id)arg1;
- (double)widestPlaybackSpeedLabelWidth;

@end
