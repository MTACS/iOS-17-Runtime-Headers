
@protocol CKInvisibleInkEffectHostView

@required

- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (UIImage *)imageForInvisibleInkEffectView;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasResumed;
- (void)invisibleInkEffectViewWasSuspended;
- (void)invisibleInkEffectViewWasUncovered;

@end
