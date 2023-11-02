
@interface PUOneUpAssetTransitionContext : NSObject {
    id /* block */  _animationBlock;
    UIView * _containerView;
    PXAction * _executedAction;
    UIView * _fromView;
    PUAssetTransitionInfo * _leadingAssetTransitionInfo;
    bool  _shouldHideBackground;
    UIView * _snapshotView;
    PUAssetTransitionInfo * _trailingAssetTransitionInfo;
    PUAssetTransitionInfo * _transitionInfo;
}

@property (setter=_setAnimationBlock:, nonatomic, copy) id /* block */ animationBlock;
@property (setter=_setContainerView:, nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) PXAction *executedAction;
@property (setter=_setFromView:, nonatomic, retain) UIView *fromView;
@property (setter=_setLeadingAssetTransitionInfo:, nonatomic, retain) PUAssetTransitionInfo *leadingAssetTransitionInfo;
@property (setter=_setShouldHideBackground:, nonatomic) bool shouldHideBackground;
@property (setter=_setSnapshotView:, nonatomic, retain) UIView *snapshotView;
@property (setter=_setTrailingAssetTransitionInfo:, nonatomic, retain) PUAssetTransitionInfo *trailingAssetTransitionInfo;
@property (setter=_setTransitionInfo:, nonatomic, retain) PUAssetTransitionInfo *transitionInfo;

+ (id)oneUpAssetTransitionContextWithContainerView:(id)arg1 fromView:(id)arg2 snapshotView:(id)arg3 transitionInfo:(id)arg4;
+ (id)oneUpAssetTransitionContextWithContainerView:(id)arg1 fromView:(id)arg2 snapshotView:(id)arg3 transitionInfo:(id)arg4 trailingAssetTransitionInfo:(id)arg5 leadingAssetTransitionInfo:(id)arg6;

- (void).cxx_destruct;
- (void)_setAnimationBlock:(id /* block */)arg1;
- (void)_setContainerView:(id)arg1;
- (void)_setFromView:(id)arg1;
- (void)_setLeadingAssetTransitionInfo:(id)arg1;
- (void)_setShouldHideBackground:(bool)arg1;
- (void)_setSnapshotView:(id)arg1;
- (void)_setTrailingAssetTransitionInfo:(id)arg1;
- (void)_setTransitionInfo:(id)arg1;
- (id /* block */)animationBlock;
- (id)containerView;
- (id)executedAction;
- (id)fromView;
- (id)leadingAssetTransitionInfo;
- (id)oneUpTransitionContextWithAnimationBlock:(id /* block */)arg1;
- (id)oneUpTransitionContextWithContextShouldHideBackground:(bool)arg1;
- (id)oneUpTransitionContextWithContextWithContainerView:(id)arg1;
- (void)setExecutedAction:(id)arg1;
- (bool)shouldHideBackground;
- (id)snapshotView;
- (id)trailingAssetTransitionInfo;
- (id)transitionInfo;

@end
