
@interface _UIViewServiceFencingControlProxy : _UIQueueingProxy

+ (id)proxyWithTarget:(id)arg1 exportedProtocol:(id)arg2;

- (void)__finishParticipatingInSystemAnimationFence:(id)arg1;
- (void)__participateInSystemAnimationFence:(id)arg1;
- (void)__participateInSystemAnimationFence:(id)arg1 timing:(struct _UIUpdateTiming { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
