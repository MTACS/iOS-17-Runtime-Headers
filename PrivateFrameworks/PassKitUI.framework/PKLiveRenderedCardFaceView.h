
@interface PKLiveRenderedCardFaceView : UIView <PKForegroundActiveArbiterObserver> {
    PKTexturedCardView * _cardView;
    bool  _foregroundActive;
    bool  _invalidated;
    UIImageView * _logoImageView;
    PKPass * _pass;
    PKPayLaterCardView * _payLaterCardView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_showArmedState:(bool)arg1 animated:(bool)arg2;
- (void)dealloc;
- (void)didAuthenticate;
- (void)didDismiss;
- (void)didPresent;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(struct { bool x1; bool x2; })arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pass:(id)arg2;
- (void)invalidate;
- (void)layoutSubviews;
- (void)setMotionEnabled:(bool)arg1;

@end
