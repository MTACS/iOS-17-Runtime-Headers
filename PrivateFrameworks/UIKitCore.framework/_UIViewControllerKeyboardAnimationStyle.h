
@interface _UIViewControllerKeyboardAnimationStyle : UIInputViewAnimationStyleDirectional {
    bool  _allowCustomTransition;
    _UIViewControllerTransitionContext * _context;
    bool  _disableAlongsideView;
    _UIViewControllerKeyboardAnimationStyleInfo * _info;
}

@property (nonatomic) bool allowCustomTransition;
@property (nonatomic, retain) _UIViewControllerTransitionContext *context;
@property (nonatomic) bool disableAlongsideView;
@property (nonatomic, readonly) _UIViewControllerKeyboardAnimationStyleInfo *info;

+ (id)animationStyleWithContext:(id)arg1 useCustomTransition:(bool)arg2;

- (void).cxx_destruct;
- (void)_launchAnimation:(id /* block */)arg1 afterStarted:(id /* block */)arg2 completion:(id /* block */)arg3 forHost:(id)arg4 fromCurrentPosition:(bool)arg5;
- (bool)allowCustomTransition;
- (bool)canDismissWithScrollView;
- (bool)canTakeSnapshot;
- (id)context;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disableAlongsideView;
- (id)info;
- (id)initWithContext:(id)arg1;
- (bool)isAnimationCompleted;
- (bool)isEqual:(id)arg1;
- (void)launchAnimation:(id /* block */)arg1 afterStarted:(id /* block */)arg2 completion:(id /* block */)arg3 forHost:(id)arg4 fromCurrentPosition:(bool)arg5;
- (void)setAllowCustomTransition:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDisableAlongsideView:(bool)arg1;

@end
