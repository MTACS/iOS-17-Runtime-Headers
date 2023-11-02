
@interface AVRoutePickerView : UIView {
    UIColor * _activeTintColor;
    bool  _airPlayActive;
    UIViewPropertyAnimator * _buttonHighlightAnimator;
    UIButton * _customButton;
    AVCustomRoutingController * _customRoutingController;
    <AVRoutePickerViewDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _getAirPlayStatusQueue;
    AVObservationController * _observationController;
    struct CGSize { 
        double width; 
        double height; 
    }  _oldSize;
    AVOutputContext * _outputContext;
    AVPlayer * _player;
    bool  _prioritizesVideoDevices;
    UIButton * _routePickerButton;
    bool  _routePickerButtonBordered;
    AVMicaPackage * _routePickerButtonMicaPackage;
    long long  _routePickerButtonStyle;
    MPMediaControls * _routePickingControls;
    AVRoutingConfiguration * _routingConfiguration;
}

@property (nonatomic, retain) UIColor *activeTintColor;
@property (nonatomic, retain) AVCustomRoutingController *customRoutingController;
@property (nonatomic) <AVRoutePickerViewDelegate> *delegate;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic) bool prioritizesVideoDevices;
@property (getter=isRoutePickerButtonBordered, nonatomic) bool routePickerButtonBordered;
@property (nonatomic) long long routePickerButtonStyle;

- (void).cxx_destruct;
- (void)_addCustomRoutingItemsToRoutePickingControls;
- (void)_createOrUpdateRoutePickerButton;
- (void)_customRoutingItemsDidChange;
- (id)_defaultActiveTintColor;
- (bool)_isAirPlayOrCustomRouteActive;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_normalizedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (void)_registerNotifications;
- (void)_routePickerButtonTapped:(id)arg1;
- (void)_routePickerButtonTouchDown:(id)arg1;
- (void)_routePickerButtonTouchDragEnter:(id)arg1;
- (void)_routePickerButtonTouchUp:(id)arg1;
- (void)_setRoutePickerButtonAlpha:(double)arg1 animated:(bool)arg2;
- (void)_setupOutputContext;
- (void)_updateAirPlayActive;
- (id)activeTintColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)customButton;
- (id)customRoutingController;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAirPlayActive;
- (bool)isRoutePickerButtonBordered;
- (void)layoutSubviews;
- (id)player;
- (void)presentRoutePicker:(id)arg1;
- (bool)prioritizesVideoDevices;
- (long long)routePickerButtonStyle;
- (id)routingConfiguration;
- (void)setActiveTintColor:(id)arg1;
- (void)setAirPlayActive:(bool)arg1;
- (void)setCustomButton:(id)arg1;
- (void)setCustomRoutingController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPrioritizesVideoDevices:(bool)arg1;
- (void)setRoutePickerButtonBordered:(bool)arg1;
- (void)setRoutePickerButtonStyle:(long long)arg1;
- (void)setRoutingConfiguration:(id)arg1;
- (void)tintColorDidChange;
- (id)topViewControllerForPresentingAlert;
- (void)updateButtonAppearance;

@end
