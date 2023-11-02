
@interface SCNTransaction : NSObject

+ (double)animationDuration;
+ (id)animationTimingFunction;
+ (void)begin;
+ (void)checkUncommittedTransactions;
+ (void)commit;
+ (void)commitImmediate;
+ (id /* block */)completionBlock;
+ (unsigned int)currentState;
+ (bool)disableActions;
+ (void)enqueueCommandForObject:(id)arg1 immediateTransactionBlock:(id /* block */)arg2;
+ (void)flush;
+ (bool)immediateMode;
+ (struct __C3DScene { }*)immediateModeRestrictedContext;
+ (void)lock;
+ (void)performPresentationInstanceQueriesInScene:(id)arg1 usingBlock:(id /* block */)arg2;
+ (void)postCommandWithContext:(struct __C3DScene { }*)arg1 object:(id)arg2 applyBlock:(id /* block */)arg3;
+ (void)postCommandWithContext:(struct __C3DScene { }*)arg1 object:(id)arg2 key:(id)arg3 applyBlock:(id /* block */)arg4;
+ (void)postCommandWithContext:(struct __C3DScene { }*)arg1 object:(id)arg2 key:(id)arg3 subscriptIndex:(unsigned long long)arg4 derivedKeyPath:(id)arg5 applyBlock:(id /* block */)arg6;
+ (void)postCommandWithContext:(struct __C3DScene { }*)arg1 object:(id)arg2 key:(id)arg3 subscriptKey:(id)arg4 derivedKeyPath:(id)arg5 applyBlock:(id /* block */)arg6;
+ (void)postCommandWithContext:(struct __C3DScene { }*)arg1 object:(id)arg2 keyPath:(id)arg3 applyBlock:(id /* block */)arg4;
+ (void)setAnimationDuration:(double)arg1;
+ (void)setAnimationTimingFunction:(id)arg1;
+ (void)setCompletionBlock:(id /* block */)arg1;
+ (void)setDisableActions:(bool)arg1;
+ (void)setImmediateMode:(bool)arg1;
+ (void)setImmediateModeRestrictedContext:(struct __C3DScene { }*)arg1;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (void)unlock;
+ (id)valueForKey:(id)arg1;

- (double)animationDuration;
- (id)animationTimingFunction;
- (void)begin;
- (void)commit;
- (bool)disableActions;
- (void)flush;
- (void)lock;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationTimingFunction:(id)arg1;
- (void)setDisableActions:(bool)arg1;
- (void)unlock;

@end
