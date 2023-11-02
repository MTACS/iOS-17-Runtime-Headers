
@interface _UIViewAdditiveAnimationAction : NSObject <CAAction> {
    UIViewPropertyAnimator * _animationObject;
    CAAnimation * _pendingAnimation;
    UIView * _view;
}

@property (nonatomic, readonly, retain) UIViewPropertyAnimator *animationObject;
@property (nonatomic, readonly, retain) CAAnimation *pendingAnimation;
@property (nonatomic, readonly, retain) UIView *view;

- (void).cxx_destruct;
- (id)animationObject;
- (id)initWithPendingAnimation:(id)arg1 withAnimationObject:(id)arg2 forView:(id)arg3;
- (id)pendingAnimation;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (id)view;

@end
