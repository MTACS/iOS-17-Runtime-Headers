
@protocol CKSendAnimationManagerDelegate <NSObject>

@required

- (IMChat *)chatForSendAnimationManager:(id <CKSendAnimationManager>)arg1;
- (CKViewController<CKCoreTranscriptControllerProtocol> *)collectionViewControllerForImpactEffectManager:(id <CKSendAnimationManager>)arg1;
- (void)sendAnimationManagerDidStopAnimation:(id <CKSendAnimationManager>)arg1 context:(id <CKSendAnimationContext>)arg2;
- (void)sendAnimationManagerWillStartAnimation:(id <CKSendAnimationManager>)arg1 context:(id <CKSendAnimationContext>)arg2;

@end
