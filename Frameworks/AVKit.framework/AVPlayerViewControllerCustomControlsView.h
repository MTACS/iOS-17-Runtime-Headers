
@interface AVPlayerViewControllerCustomControlsView : UIView {
    UILayoutGuide * _animatedUnobscuredCenterAreaLayoutGuide;
    UIView * _animatedUnobscuredCenterAreaLayoutGuideProvidingView;
    bool  _areTransportControlsVisible;
    bool  _areVolumeControlsVisible;
    UILayoutGuide * _displayModeControlsAreaLayoutGuide;
    UIView * _displayModeControlsAreaLayoutGuideProvidingView;
    bool  _needsInitialConstraints;
    UILayoutGuide * _transportControlsAreaLayoutGuide;
    UIView * _transportControlsAreaLayoutGuideProvidingView;
    NSLayoutConstraint * _transportControlsHiddenConstraint;
    NSLayoutConstraint * _transportControlsVisibleConstraint;
    UILayoutGuide * _unobscuredCenterAreaLayoutGuide;
    UIView * _unobscuredCenterAreaLayoutGuideProvidingView;
    UILayoutGuide * _unobscuredTopAreaLayoutGuide;
    UIView * _unobscuredTopAreaLayoutGuideProvidingView;
    UILayoutGuide * _volumeControlsAreaLayoutGuide;
    UIView * _volumeControlsAreaLayoutGuideProvidingView;
    NSLayoutConstraint * _volumeControlsHiddenConstraint;
    NSLayoutConstraint * _volumeControlsVisibleConstraint;
}

@property (nonatomic, readonly) UILayoutGuide *animatedUnobscuredCenterAreaLayoutGuide;
@property (nonatomic, readonly) UIView *animatedUnobscuredCenterAreaLayoutGuideProvidingView;
@property (nonatomic) bool areTransportControlsVisible;
@property (nonatomic) bool areVolumeControlsVisible;
@property (nonatomic, readonly) UILayoutGuide *displayModeControlsAreaLayoutGuide;
@property (nonatomic, readonly) UIView *displayModeControlsAreaLayoutGuideProvidingView;
@property (nonatomic, readonly) UILayoutGuide *transportControlsAreaLayoutGuide;
@property (nonatomic, readonly) UIView *transportControlsAreaLayoutGuideProvidingView;
@property (nonatomic, readonly) UILayoutGuide *unobscuredCenterAreaLayoutGuide;
@property (nonatomic, readonly) UIView *unobscuredCenterAreaLayoutGuideProvidingView;
@property (nonatomic, readonly) UILayoutGuide *unobscuredTopAreaLayoutGuide;
@property (nonatomic, readonly) UIView *unobscuredTopAreaLayoutGuideProvidingView;
@property (nonatomic, readonly) UILayoutGuide *volumeControlsAreaLayoutGuide;
@property (nonatomic, readonly) UIView *volumeControlsAreaLayoutGuideProvidingView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)animatedUnobscuredCenterAreaLayoutGuide;
- (id)animatedUnobscuredCenterAreaLayoutGuideProvidingView;
- (bool)areTransportControlsVisible;
- (bool)areVolumeControlsVisible;
- (id)displayModeControlsAreaLayoutGuide;
- (id)displayModeControlsAreaLayoutGuideProvidingView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAreTransportControlsVisible:(bool)arg1;
- (void)setAreVolumeControlsVisible:(bool)arg1;
- (id)transportControlsAreaLayoutGuide;
- (id)transportControlsAreaLayoutGuideProvidingView;
- (id)unobscuredCenterAreaLayoutGuide;
- (id)unobscuredCenterAreaLayoutGuideProvidingView;
- (id)unobscuredTopAreaLayoutGuide;
- (id)unobscuredTopAreaLayoutGuideProvidingView;
- (void)updateConstraints;
- (id)volumeControlsAreaLayoutGuide;
- (id)volumeControlsAreaLayoutGuideProvidingView;

@end
