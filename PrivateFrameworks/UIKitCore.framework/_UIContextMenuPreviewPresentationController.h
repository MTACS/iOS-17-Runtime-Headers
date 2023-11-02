
@interface _UIContextMenuPreviewPresentationController : UIPresentationController {
    _UIContextMenuStyle * _menuStyle;
    struct CGSize { 
        double width; 
        double height; 
    }  _platterContentSize;
    bool  _platterContentSizeDidChange;
    UIView * _viewForRemoteTextEffectsWindowMatchAnimation;
}

@property (nonatomic) <_UIContextMenuPreviewPresentationControllerDelegate> *delegate;
@property (nonatomic, retain) _UIContextMenuStyle *menuStyle;
@property (nonatomic) struct CGSize { double x1; double x2; } platterContentSize;
@property (nonatomic) bool platterContentSizeDidChange;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_baseContentInsetsWithLeftMargin:(double*)arg1 rightMargin:(double*)arg2;
- (bool)_shouldDisableInteractionDuringTransitions;
- (bool)_shouldKeepCurrentFirstResponder;
- (bool)_shouldOccludeDuringPresentation;
- (bool)_shouldPreserveFirstResponder;
- (bool)_shouldRestoreFirstResponder;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_updatePlatterContentSizeWithPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_viewForRemoteTextEffectsWindowMatchAnimation;
- (bool)_wantsAutomaticFirstResponderWhenPresentingRemoteViewController;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (void)menuDidPresentWithContentPlatterView:(id)arg1;
- (void)menuLayoutDidProducePreviewSize:(struct CGSize { double x1; double x2; })arg1;
- (id)menuStyle;
- (struct CGSize { double x1; double x2; })platterContentSize;
- (bool)platterContentSizeDidChange;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredFocusEnvironments;
- (long long)presentationStyle;
- (void)presentationTransitionWillBegin;
- (void)setMenuStyle:(id)arg1;
- (void)setPlatterContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlatterContentSizeDidChange:(bool)arg1;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;

@end
