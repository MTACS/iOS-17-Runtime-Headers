
@interface CPUINowPlayingView : UIView {
    NSArray * _activeConstraints;
    CPUIShadowImageView * _artworkViewBrick;
    UIFocusContainerGuide * _bottomRegionFocusContainerGuide;
    bool  _buttonShapesVisible;
    UIFocusContainerGuide * _controlsFocusContainerGuide;
    <CPUINowPlayingLayoutProtocol> * _nowPlayingLayout;
    CPUIPlayModeControlView * _playModeControlView;
    CPUIProgressView * _progressView;
    CPUISongDetailsView * _songDetailsView;
    NSLayoutConstraint * _songDetailsViewHeightConstraint;
    CPUITransportControlView * _transportControlView;
    NSArray * _verticalSpacerLayoutGuides;
}

@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic, readonly) CPUIShadowImageView *artworkViewBrick;
@property (nonatomic, retain) UIFocusContainerGuide *bottomRegionFocusContainerGuide;
@property (nonatomic) bool buttonShapesVisible;
@property (nonatomic, retain) UIFocusContainerGuide *controlsFocusContainerGuide;
@property (nonatomic, readonly) <CPUINowPlayingLayoutProtocol> *nowPlayingLayout;
@property (nonatomic, readonly) CPUIPlayModeControlView *playModeControlView;
@property (nonatomic, readonly) CPUIProgressView *progressView;
@property (nonatomic, readonly) CPUISongDetailsView *songDetailsView;
@property (nonatomic, retain) NSLayoutConstraint *songDetailsViewHeightConstraint;
@property (nonatomic, readonly) CPUITransportControlView *transportControlView;
@property (nonatomic, retain) NSArray *verticalSpacerLayoutGuides;

- (void).cxx_destruct;
- (id)_constraintsForNowPlayingLayout:(id)arg1;
- (id)_verticalSpacerLayoutGuidesForNowPlayingLayout:(id)arg1;
- (id)activeConstraints;
- (id)artworkViewBrick;
- (id)bottomRegionFocusContainerGuide;
- (bool)buttonShapesVisible;
- (id)controlsFocusContainerGuide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)nowPlayingLayout;
- (id)playModeControlView;
- (id)progressView;
- (void)recalculateLayout:(bool)arg1 allowsAlbumArt:(bool)arg2 hasDataSource:(bool)arg3 viewArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 safeArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 rightHandDrive:(bool)arg6;
- (void)setActiveConstraints:(id)arg1;
- (void)setBottomRegionFocusContainerGuide:(id)arg1;
- (void)setButtonShapesVisible:(bool)arg1;
- (void)setControlsFocusContainerGuide:(id)arg1;
- (void)setSongDetailsViewHeightConstraint:(id)arg1;
- (void)setVerticalSpacerLayoutGuides:(id)arg1;
- (id)songDetailsView;
- (id)songDetailsViewHeightConstraint;
- (id)transportControlView;
- (id)verticalSpacerLayoutGuides;

@end
