
@interface _UIContextMenuContainerView : UIView <_UIPassthroughScrollInteractionDelegate, _UIScrollToTopView> {
    UIView * _contentWrapperView;
    bool  _didDismiss;
    id /* block */  _dismissalHandler;
    bool  _inPassthroughViewHitTest;
    bool  _lastHitTestWasPassedThroughToInteraction;
    bool  _passesBackgroundViewTouchesThrough;
    _UIPassthroughScrollInteraction * _passthroughInteraction;
    id /* block */  _sizeChangeHandler;
    id /* block */  _subtreeTraitPropagationHandler;
}

@property (nonatomic) UIView *contentWrapperView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissalHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool passesBackgroundViewTouchesThrough;
@property (nonatomic, copy) id /* block */ sizeChangeHandler;
@property (nonatomic, copy) id /* block */ subtreeTraitPropagationHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_attemptDismiss:(bool)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { double x1; double x2; })arg1 resultHandler:(id /* block */)arg2;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x1; id x2; id x3; bool x4; struct _UITraitCollectionTraitChanges { bool x_5_1_1; bool x_5_1_2; } x5; }*)arg1;
- (id)contentWrapperView;
- (void)didMoveToWindow;
- (id /* block */)dismissalHandler;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 allowsBackgroundInteractionAcrossProccesses:(bool)arg2;
- (bool)isScrollEnabled;
- (bool)isTransparentFocusItem;
- (bool)passesBackgroundViewTouchesThrough;
- (bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint { double x1; double x2; })arg2 withEvent:(id)arg3;
- (bool)passthroughScrollInteractionDidRecognize:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentWrapperView:(id)arg1;
- (void)setDismissalHandler:(id /* block */)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPassesBackgroundViewTouchesThrough:(bool)arg1;
- (void)setSizeChangeHandler:(id /* block */)arg1;
- (void)setSubtreeTraitPropagationHandler:(id /* block */)arg1;
- (id /* block */)sizeChangeHandler;
- (id /* block */)subtreeTraitPropagationHandler;
- (void)willMoveToWindow:(id)arg1;

@end
