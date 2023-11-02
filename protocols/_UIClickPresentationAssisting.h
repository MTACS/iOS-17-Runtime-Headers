
@protocol _UIClickPresentationAssisting <NSObject>

@required

- (void)dismissWithReason:(void *)arg1 alongsideActions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (id)initWithClickPresentation:(_UIClickPresentation *)arg1;
- (id /* block */)lifecycleCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (void)presentFromSourcePreview:(void *)arg1 lifecycleCompletion:(void *)arg2; // needs 2 arg types, found 7: UITargetedPreview *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (_UIClickPresentation *)presentation;
- (void)setLifecycleCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setPresentation:(_UIClickPresentation *)arg1;

@end
