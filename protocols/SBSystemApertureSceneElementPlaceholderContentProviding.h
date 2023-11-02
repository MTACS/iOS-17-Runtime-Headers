
@protocol SBSystemApertureSceneElementPlaceholderContentProviding <SAElementIdentifying>

@required

- (long long)contentRole;
- (UIView *)leadingView;
- (UIView *)minimalView;
- (void)noteSceneClientWantsControlOfElementWithAssertionTransferBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SAInvalidatable> *, void*
- (unsigned long long)presentationBehaviors;
- (UIView *)trailingView;

@optional

- (UIColor *)keyColor;

@end
