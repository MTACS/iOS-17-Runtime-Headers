
@interface PKPeerPaymentMessageBalloonView : UIView {
    CKTranscriptPluginBalloonView * _balloonView;
    PKPeerPaymentBubbleView * _bubbleView;
    long long  _peerPaymentType;
}

@property (nonatomic, retain) CKTranscriptPluginBalloonView *balloonView;
@property (nonatomic, readonly) PKPeerPaymentBubbleView *bubbleView;
@property (nonatomic, readonly) long long peerPaymentType;

- (void).cxx_destruct;
- (void)_updateTailOrientation;
- (id)balloonView;
- (id)bubbleView;
- (id)initWithBubbleView:(id)arg1 peerPaymentType:(long long)arg2;
- (void)layoutSubviews;
- (long long)peerPaymentType;
- (void)setBalloonView:(id)arg1;

@end
