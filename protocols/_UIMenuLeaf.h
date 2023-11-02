
@protocol _UIMenuLeaf <UIMenuLeaf>

@required

- (bool)_isDefaultCommand;
- (NSArray *)_leafAlternates;
- (NSString *)_leafKeyInput;
- (long long)_leafKeyModifierFlags;
- (id)_resolvedTargetFromFirstTarget:(id)arg1 sender:(id)arg2;
- (<_UIMenuLeaf> *)_validatedLeafWithAlternate:(id <_UIMenuLeafAlternate>)arg1 target:(id)arg2 validation:(_UIMenuLeafValidation *)arg3;
- (NSAttributedString *)attributedTitle;
- (bool)keepsMenuPresented;
- (<UIPopoverPresentationControllerSourceItem> *)presentationSourceItem;
- (bool)requiresAuthenticatedInput;
- (UIImage *)selectedImage;
- (void)setAttributedTitle:(NSAttributedString *)arg1;
- (void)setSelectedImage:(UIImage *)arg1;

@end
