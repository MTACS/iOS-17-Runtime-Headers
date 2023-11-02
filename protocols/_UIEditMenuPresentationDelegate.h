
@protocol _UIEditMenuPresentationDelegate <NSObject>

@required

- (void)_editMenuPresentation:(void *)arg1 didSelectMenuLeaf:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _UIEditMenuPresentation *, <_UIMenuLeaf> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_editMenuPresentation:(_UIEditMenuPresentation *)arg1 didTransitionMenuForConfiguration:(UIEditMenuConfiguration *)arg2;
- (void)_editMenuPresentation:(void *)arg1 preparedMenuForDisplay:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: _UIEditMenuPresentation *, UIMenu *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIMenu *, void*
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_editMenuPresentation:(_UIEditMenuPresentation *)arg1 targetRectForConfiguration:(UIEditMenuConfiguration *)arg2;
- (UIView *)_editMenuPresentation:(_UIEditMenuPresentation *)arg1 titleViewForMenu:(UIMenu *)arg2 configuration:(UIEditMenuConfiguration *)arg3;
- (void)_editMenuPresentation:(_UIEditMenuPresentation *)arg1 willDismissMenuForConfiguration:(UIEditMenuConfiguration *)arg2 animator:(id <UIEditMenuInteractionAnimating>)arg3;
- (void)_editMenuPresentation:(_UIEditMenuPresentation *)arg1 willPresentMenuForConfiguration:(UIEditMenuConfiguration *)arg2 animator:(id <UIEditMenuInteractionAnimating>)arg3;

@end
