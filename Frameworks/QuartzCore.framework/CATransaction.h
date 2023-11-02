
@interface CATransaction : NSObject

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2;
+ (void)activate;
+ (void)activateBackground:(bool)arg1;
+ (bool)addCommitHandler:(id /* block */)arg1 forPhase:(int)arg2;
+ (bool)animatesFromModelValues;
+ (double)animationDuration;
+ (id)animationTimingFunction;
+ (id /* block */)animator;
+ (void)assertInactive;
+ (void)batch;
+ (void)begin;
+ (double)beginTime;
+ (bool)boolValueForKey:(unsigned int)arg1;
+ (void)commit;
+ (double)commitTime;
+ (id)committingContexts;
+ (id /* block */)completionBlock;
+ (int)currentPhase;
+ (unsigned int)currentState;
+ (bool)defaultDisableRunLoopObserverCommits;
+ (bool)disableActions;
+ (bool)disableImplicitTransactionMainThreadAssert;
+ (bool)disableRunLoopObserverCommits;
+ (bool)disableSignPosts;
+ (double)earliestAutomaticCommitTime;
+ (void)enableUpdateCycleSupport;
+ (void)finishFrameWithToken:(unsigned int)arg1;
+ (void)flush;
+ (void)flushAsRunLoopObserver;
+ (bool)frameStallSkipRequest;
+ (unsigned int)generateSeed;
+ (double)inputTime;
+ (void)lock;
+ (bool)lowLatency;
+ (void)popAnimator;
+ (void)pushAnimator:(id /* block */)arg1;
+ (unsigned int)registerBoolKey;
+ (void)setAnimatesFromModelValues:(bool)arg1;
+ (void)setAnimationDuration:(double)arg1;
+ (void)setAnimationTimingFunction:(id)arg1;
+ (void)setBeginTime:(double)arg1;
+ (void)setBoolValue:(bool)arg1 forKey:(unsigned int)arg2;
+ (void)setCommitHandler:(id /* block */)arg1;
+ (void)setCommitTime:(double)arg1;
+ (void)setCommittingContexts:(id)arg1;
+ (void)setCompletionBlock:(id /* block */)arg1;
+ (void)setDefaultDisableRunLoopObserverCommits:(bool)arg1;
+ (void)setDisableActions:(bool)arg1;
+ (void)setDisableImplicitTransactionMainThreadAssert:(bool)arg1;
+ (void)setDisableRunLoopObserverCommits:(bool)arg1;
+ (void)setDisableSignPosts:(bool)arg1;
+ (void)setEarliestAutomaticCommitTime:(double)arg1;
+ (void)setFrameInputTime:(double)arg1 withToken:(unsigned int)arg2;
+ (void)setFrameStallSkipRequest:(bool)arg1;
+ (void)setImplicitTransactionDidBeginHandler:(id /* block */)arg1;
+ (void)setInputTime:(double)arg1;
+ (void)setLowLatency:(bool)arg1;
+ (void)setPresentationHandler:(id /* block */)arg1 queue:(id)arg2;
+ (void)setUpdateDeadline:(double)arg1;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (unsigned int)startFrameWithReason:(int)arg1 beginTime:(double)arg2 commitDeadline:(double)arg3;
+ (void)synchronize;
+ (void)unlock;
+ (double)updateDeadline;
+ (id)valueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI

+ (void)bs_performAfterCommit:(id /* block */)arg1;
+ (void)bs_performAfterSynchronizedCommit:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial

+ (void)mt_addCompletionBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (void)hk_performWithoutAnimations:(id /* block */)arg1;

@end
