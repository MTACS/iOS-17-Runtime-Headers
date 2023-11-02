
@interface PKPeerPaymentHeroBubbleView : UIImageView {
    UILabel * _bubbleAmountLabel;
    unsigned long long  _bubbleState;
    PKPeerPaymentBubbleView * _peerPaymentBubbleView;
    UIView * _pluginBalloonView;
}

@property (nonatomic, readonly) UILabel *bubbleAmountLabel;
@property (nonatomic, readonly) UIView *pluginBalloonView;

- (void).cxx_destruct;
- (id)_bubbleAmountLabelTextAttributes;
- (id)_bubbleAmountLabelTextWithAmount:(id)arg1;
- (unsigned long long)_bubbleStateForRegistrationState:(unsigned long long)arg1;
- (id)bubbleAmountLabel;
- (id)initWithCurrencyAmount:(id)arg1 regitrationFlowState:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)pluginBalloonView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
