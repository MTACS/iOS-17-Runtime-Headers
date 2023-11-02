
@protocol CKSendAnimationManager <NSObject>

@required

- (void)animateMessages:(NSArray *)arg1;
- (void)animationDidFinishWithContext:(id <CKSendAnimationContext>)arg1;
- (void)animationWillBeginWithContext:(id <CKSendAnimationContext>)arg1;
- (void)playSoundForPopAnimation;
- (void)popAnimationDidBegin;
- (<CKSendAnimationBalloonProvider> *)sendAnimationBalloonProvider;
- (<CKSendAnimationManagerDelegate> *)sendAnimationManagerDelegate;
- (void)setSendAnimationBalloonProvider:(id <CKSendAnimationBalloonProvider>)arg1;
- (void)setSendAnimationManagerDelegate:(id <CKSendAnimationManagerDelegate>)arg1;

@end
