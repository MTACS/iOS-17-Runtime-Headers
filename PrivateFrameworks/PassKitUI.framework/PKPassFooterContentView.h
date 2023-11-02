
@interface PKPassFooterContentView : UIView {
    PKLinkedAppIconView * _appIconView;
    UIView * _bottomRule;
    long long  _coachingState;
    <PKPassFooterContentViewDelegate> * _delegate;
    UIButton * _infoButton;
    bool  _invalidated;
    PKPass * _pass;
    bool  _physicalButtonRequired;
    bool  _requestPileSuppression;
    PKSecureElementPass * _secureElementPass;
    long long  _style;
}

@property (nonatomic, readonly) PKLinkedAppIconView *appIconView;
@property (nonatomic, readonly) UIView *bottomRule;
@property (nonatomic, readonly) long long coachingState;
@property (nonatomic) <PKPassFooterContentViewDelegate> *delegate;
@property (nonatomic) double infoButtonAlpha;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } infoButtonFrame;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) PKPass *pass;
@property (getter=isPassAuthorized, nonatomic, readonly) bool passAuthorized;
@property (nonatomic, readonly) PKPaymentPass *paymentPass;
@property (getter=isPhysicalButtonRequired, nonatomic, readonly) bool physicalButtonRequired;
@property (nonatomic, readonly) bool requestPileSuppression;
@property (nonatomic, readonly) PKSecureElementPass *secureElementPass;
@property (nonatomic, readonly) long long style;

- (void).cxx_destruct;
- (id)_buttonWithTitle:(id)arg1 action:(id)arg2;
- (void)_didInvalidate;
- (void)_infoButtonPressed:(id)arg1;
- (void)_setCoachingState:(long long)arg1;
- (void)_setPhysicalButtonRequired:(bool)arg1;
- (void)_setRequestPileSuppression:(bool)arg1;
- (id)appIconView;
- (id)bottomRule;
- (long long)coachingState;
- (void)coachingStateDidChange;
- (void)dealloc;
- (id)delegate;
- (void)didBecomeHiddenAnimated:(bool)arg1;
- (void)didBecomeVisibleAnimated:(bool)arg1;
- (double)infoButtonAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })infoButtonFrame;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithPass:(id)arg1;
- (void)invalidate;
- (bool)isInvalidated;
- (bool)isPassAuthorized;
- (bool)isPhysicalButtonRequired;
- (void)layoutSubviews;
- (id)pass;
- (id)paymentPass;
- (bool)requestPileSuppression;
- (id)secureElementPass;
- (void)setDelegate:(id)arg1;
- (void)setInfoButtonAlpha:(double)arg1;
- (void)showFullScreenBarcode;
- (long long)style;
- (void)willBecomeHiddenAnimated:(bool)arg1;
- (void)willBecomeVisibleAnimated:(bool)arg1;

@end
