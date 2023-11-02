
@interface PKPeerPaymentSetupFlowHeroView : UIView {
    long long  _animationState;
    PKPeerPaymentHeroBubbleView * _bubbleView;
    PKPeerPaymentCredential * _credential;
    UIImageView * _passSnapshotView;
}

- (void).cxx_destruct;
- (bool)_bubbleIsOnLeftSide;
- (id)_defaultCurrencyAmount;
- (void)_dynamicUserInterfaceTraitDidChange;
- (bool)_shouldShowBubbleView;
- (void)_updateImageViewDynamicColors;
- (id)initWithPeerPaymentPassSnapShot:(id)arg1 peerPaymentCredential:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAnimation;
- (void)startAnimationWithCompletion:(id /* block */)arg1;

@end
