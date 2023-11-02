
@protocol CKImpactEffectAnimationProvider

@required

- (void)beginAnimationWithSendAnimationContext:(id <CKSendAnimationContext>)arg1;
- (void)beginQuickReplyAnimationWithSendAnimationContext:(id <CKSendAnimationContext>)arg1;
- (void)stopAnimationWithSendAnimationContext:(id <CKSendAnimationContext>)arg1;

@end
