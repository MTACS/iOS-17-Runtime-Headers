
@protocol _UITextItemInteracting <UITextInput, _UITextContent>

@required

- (bool)_allowInteraction:(long long)arg1 forTextInteractableItem:(_UITextInteractableItem *)arg2;
- (_UITextInteractableItem *)_anyTextItemConstrainedToLineAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (UITextItemMenuConfiguration *)_menuConfigurationForTextInteractableItem:(_UITextInteractableItem *)arg1 defaultMenu:(UIMenu *)arg2;
- (bool)_mightHaveInteractableItems;
- (UIAction *)_primaryActionForTextInteractableItem:(_UITextInteractableItem *)arg1 defaultAction:(UIAction *)arg2;
- (UITargetedPreview *)_targetedPreviewForTextInteractableItem:(_UITextInteractableItem *)arg1 dismissing:(bool)arg2;
- (void)_textInteractableItem:(_UITextInteractableItem *)arg1 willDismissMenuWithAnimator:(id <UIContextMenuInteractionAnimating>)arg2;
- (void)_textInteractableItem:(_UITextInteractableItem *)arg1 willDisplayMenuWithAnimator:(id <UIContextMenuInteractionAnimating>)arg2;
- (_UITextInteractableItem *)_textInteractableItemAtPoint:(struct CGPoint { double x1; double x2; })arg1 precision:(unsigned long long)arg2;
- (_UITextInteractableItemCache *)_textInteractableItemCache;
- (void)set_textInteractableItemCache:(_UITextInteractableItemCache *)arg1;

@optional

- (bool)_allowHighlightForTextInteractableItem:(_UITextInteractableItem *)arg1;
- (bool)_delegatesAllowingTextItemInteractions;

@end
