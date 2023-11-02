
@protocol _UIEditMenuInteractionDelegateInternal <UIEditMenuInteractionDelegate>

@optional

- (void)_editMenuInteraction:(UIEditMenuInteraction *)arg1 didPerformMenuLeaf:(id <UIMenuLeaf>)arg2 target:(id)arg3;
- (void)_editMenuInteraction:(UIEditMenuInteraction *)arg1 didTransitionMenuForConfiguration:(UIEditMenuConfiguration *)arg2;
- (UIResponder *)_editMenuInteraction:(UIEditMenuInteraction *)arg1 firstResponderTargetForConfiguration:(UIEditMenuConfiguration *)arg2;
- (void)_editMenuInteraction:(void *)arg1 menuForConfiguration:(void *)arg2 suggestedActions:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: UIEditMenuInteraction *, UIEditMenuConfiguration *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIMenu *, void*
- (UIView *)_editMenuInteraction:(UIEditMenuInteraction *)arg1 titleViewForMenu:(UIMenu *)arg2 configuration:(UIEditMenuConfiguration *)arg3;

@end
