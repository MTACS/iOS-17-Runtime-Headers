
@protocol CKSendAnimationContext <NSObject>

@required

- (NSArray *)animatableTextViews;
- (NSArray *)animatableViews;
- (CABackdropLayer *)backdropLayer;
- (bool)beginAnimationFromTranscriptPresentedState;
- (UIView *)containerView;
- (NSArray *)framesOfAddedChatItems;
- (NSString *)impactIdentifier;
- (bool)isSender;
- (NSArray *)messages;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })quickReplySourceRect;
- (void)setAnimatableTextViews:(NSArray *)arg1;
- (void)setAnimatableViews:(NSArray *)arg1;
- (void)setBackdropLayer:(CABackdropLayer *)arg1;
- (void)setBeginAnimationFromTranscriptPresentedState:(bool)arg1;
- (void)setContainerView:(UIView *)arg1;
- (void)setFramesOfAddedChatItems:(NSArray *)arg1;
- (void)setImpactIdentifier:(NSString *)arg1;
- (void)setIsSender:(bool)arg1;
- (void)setMessages:(NSArray *)arg1;
- (void)setQuickReplySourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShouldRepeat:(bool)arg1;
- (void)setThrowBalloonViewAttributesCollection:(NSArray *)arg1;
- (void)setThrowBalloonViews:(NSArray *)arg1;
- (bool)shouldRepeat;
- (bool)shouldUseQuickReplySourceRect;
- (NSArray *)throwBalloonViewAttributesCollection;
- (NSArray *)throwBalloonViews;

@end
