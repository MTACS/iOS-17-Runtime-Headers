
@interface PNPChargingStatusView : UIView <PNPDeviceStateConfigurable> {
    NSLayoutConstraint * _alignDeviceNameToTopConstraint;
    bool  _alphaOutName;
    UIView * _batterySectionView;
    _UIBatteryView * _batteryView;
    NSLayoutConstraint * _centerDeviceNameConstraint;
    long long  _chargingState;
    UIView * _contentAreaView;
    <PNPChargingStatusViewDelegate> * _delegate;
    UILabel * _deviceNameLabel;
    PNPDeviceState * _deviceState;
    bool  _didStartBatteryAnimation;
    bool  _didStartBatteryTransition;
    bool  _isFadingOutDeviceName;
    bool  _isTransitioningToBatteryUI;
    double  _maxPillWidth;
    UILabel * _percentageLabel;
    bool  _showsCharging;
    UIActivityIndicatorView * _spinnerView;
    PNPConnectButton * _tapToConnectButton;
}

@property (nonatomic) bool alphaOutName;
@property (nonatomic) long long chargingState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PNPChargingStatusViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) PNPDeviceState *deviceState;
@property (nonatomic) bool didStartBatteryTransition;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTransitioningToBatteryUI;
@property (nonatomic) bool showsCharging;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_batteryPercentageTextColor;
- (void)_performAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_setAndAnimateChargingStateToConnecting;
- (bool)_showBatteryStatus;
- (bool)alphaOutName;
- (void)beginPairing;
- (long long)chargingState;
- (id)delegate;
- (id)deviceState;
- (bool)didStartBatteryTransition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isTransitioningToBatteryUI;
- (void)layoutSubviews;
- (void)setAlphaOutName:(bool)arg1;
- (void)setChargingState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceState:(id)arg1;
- (void)setDidStartBatteryTransition:(bool)arg1;
- (void)setIsTransitioningToBatteryUI:(bool)arg1;
- (void)setShowsCharging:(bool)arg1;
- (bool)showsCharging;
- (void)updateChargingState:(long long)arg1;
- (void)updateConstraints;

@end
