
@interface PXMapOptionsView : UIView {
    void compassButton;
    void delegate;
    void enableUserTrackingButton;
    void mapSettingsButton;
    void mapStyle;
    void perspective2dButton;
    void perspective3dButton;
    void perspectiveButtonContainerView;
    void perspectiveButtonPlatterView;
    void perspectiveButtonState;
    void platterContainerView;
    void platterSeparatorView;
    void topPlatterView;
    void userLocationButton;
    void userLocationContainerView;
}

@property (nonatomic) <PXMapOptionsViewDelegate> *delegate;
@property (nonatomic) bool enableUserTrackingButton;
@property (nonatomic) unsigned long long mapStyle;

- (void).cxx_destruct;
- (id)delegate;
- (void)didTapMapModeSettingsButton;
- (void)didTapPerspective2DButtonWithSender:(id)arg1;
- (void)didTapPerspective3DButtonWithSender:(id)arg1;
- (bool)enableUserTrackingButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMapView:(id)arg1;
- (unsigned long long)mapStyle;
- (void)setDelegate:(id)arg1;
- (void)setEnableUserTrackingButton:(bool)arg1;
- (void)setMapStyle:(unsigned long long)arg1;
- (void)setPerspectiveButtonState:(unsigned long long)arg1 animated:(bool)arg2;

@end
