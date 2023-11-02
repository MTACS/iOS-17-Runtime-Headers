
@interface _UIViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {
    NSMutableArray * __alongsideAnimationViews;
    NSMutableArray * __alongsideAnimations;
    NSMutableArray * __alongsideCompletions;
    NSMutableArray * __interactiveChangeHandlers;
    _UIViewControllerTransitionContext * __mainContext;
    NSMutableArray * __systemAlongsideAnimations;
}

@property (setter=_setAlongsideAnimationViews:, nonatomic, retain) NSMutableArray *_alongsideAnimationViews;
@property (setter=_setAlongsideAnimations:, nonatomic, retain) NSMutableArray *_alongsideAnimations;
@property (setter=_setAlongsideCompletions:, nonatomic, retain) NSMutableArray *_alongsideCompletions;
@property (setter=_setInteractiveChangeHandlers:, nonatomic, retain) NSMutableArray *_interactiveChangeHandlers;
@property (setter=_setMainContext:, nonatomic) _UIViewControllerTransitionContext *_mainContext;
@property (setter=_setSystemAlongsideAnimations:, nonatomic, retain) NSMutableArray *_systemAlongsideAnimations;
@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionVelocity;
@property (nonatomic, readonly) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool initiallyInteractive;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (nonatomic, readonly) bool isInterruptible;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) long long presentationStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } targetTransform;
@property (nonatomic, readonly) double transitionDuration;

- (void).cxx_destruct;
- (id)_alongsideAnimationViews;
- (id)_alongsideAnimations;
- (id)_alongsideAnimations:(bool)arg1;
- (id)_alongsideCompletions;
- (id)_alongsideCompletions:(bool)arg1;
- (bool)_animateAlongsideTransitionInView:(id)arg1 systemAnimation:(bool)arg2 systemCompletion:(bool)arg3 animation:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(id /* block */)arg2;
- (id)_interactiveChangeHandlers;
- (id)_interactiveChangeHandlers:(bool)arg1;
- (id)_mainContext;
- (void)_setAlongsideAnimationViews:(id)arg1;
- (void)_setAlongsideAnimations:(id)arg1;
- (void)_setAlongsideCompletions:(id)arg1;
- (void)_setInteractiveChangeHandlers:(id)arg1;
- (void)_setMainContext:(id)arg1;
- (void)_setSystemAlongsideAnimations:(id)arg1;
- (id)_systemAlongsideAnimations;
- (id)_systemAlongsideAnimations:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransform;
- (bool)animateAlongsideTransition:(id /* block */)arg1 completion:(id /* block */)arg2;
- (bool)animateAlongsideTransitionInView:(id)arg1 animation:(id /* block */)arg2 completion:(id /* block */)arg3;
- (long long)completionCurve;
- (double)completionVelocity;
- (id)containerView;
- (id)initWithMainContext:(id)arg1;
- (bool)initiallyInteractive;
- (bool)isAnimated;
- (bool)isCancelled;
- (bool)isCompleting;
- (bool)isInteractive;
- (bool)isInterruptible;
- (bool)isRotating;
- (void)notifyWhenInteractionChangesUsingBlock:(id /* block */)arg1;
- (void)notifyWhenInteractionEndsUsingBlock:(id /* block */)arg1;
- (double)percentComplete;
- (long long)presentationStyle;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetTransform;
- (double)transitionDuration;
- (id)viewControllerForKey:(id)arg1;
- (id)viewForKey:(id)arg1;

@end