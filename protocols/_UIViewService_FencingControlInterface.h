
@protocol _UIViewService_FencingControlInterface

@optional

- (void)__finishParticipatingInSystemAnimationFence:(BKSAnimationFenceHandle *)arg1;
- (void)__participateInSystemAnimationFence:(BKSAnimationFenceHandle *)arg1;
- (void)__participateInSystemAnimationFence:(BKSAnimationFenceHandle *)arg1 timing:(struct _UIUpdateTiming { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;

@end
