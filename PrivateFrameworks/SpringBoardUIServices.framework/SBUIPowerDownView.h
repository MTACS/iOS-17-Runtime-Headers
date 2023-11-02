
@interface SBUIPowerDownView : UIView <SBUIPowerDownViewInterface, _UIActionSliderDelegate> {
    _UIActionSlider * _actionSlider;
    NSTimer * _autoDismissTimer;
    UIView * _backdropView;
    SPBeaconManager * _beaconManager;
    UIButton * _cancelButton;
    UILabel * _cancelLabel;
    UIView * _darkeningOverlayView;
    SBUIShapeView * _darkeningUnderlayView;
    <SBUIPowerDownViewDelegate> * _delegate;
    bool  _deviceSupportsFindMy;
    UIButton * _findMyButton;
    bool  _shouldPowerDownViewShowFindMyAlert;
    _UIVibrantSettings * _vibrantSettings;
}

@property (nonatomic, retain) SPBeaconManager *beaconManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBUIPowerDownViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool deviceSupportsFindMy;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldPowerDownViewShowFindMyAlert;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animatePowerDown;
- (void)_cancelAutoDismissTimer;
- (void)_cancelButtonTapped;
- (id)_createActionSlider;
- (void)_createFindMyUI;
- (void)_didTapFindMy;
- (void)_idleTimerFired;
- (bool)_isLandscapeAspectRatio;
- (void)_notifyDelegateCancelled;
- (void)_notifyDelegatePowerDown;
- (void)_powerDownSliderDidBeginSlide;
- (void)_powerDownSliderDidCancelSlide;
- (void)_powerDownSliderDidCompleteSlide;
- (void)_powerDownSliderDidUpdateSlideWithValue:(double)arg1;
- (void)_prepareViewsForAlert;
- (void)_readIODeviceSupportsFindMy;
- (void)_readShouldPowerDownViewShowFindMyAlert;
- (void)_resetAutoDismissTimer;
- (void)_updateSliderExclusionPath;
- (void)_willAnimateIn;
- (void)_willAnimateOut;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidBeginSlide:(id)arg1;
- (void)actionSliderDidCancelSlide:(id)arg1;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (id)beaconManager;
- (id)createDimmingBackdropViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (bool)deviceSupportsFindMy;
- (void)didAcknowledgeFindMyInfo;
- (void)didSuppressFindMy;
- (void)hideAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 vibrantSettings:(id)arg2;
- (void)layoutSubviews;
- (void)setBeaconManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceSupportsFindMy:(bool)arg1;
- (void)setShouldPowerDownViewShowFindMyAlert:(bool)arg1;
- (bool)shouldPowerDownViewShowFindMyAlert;
- (void)showAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (double)showHideAnimationDuration;

@end
