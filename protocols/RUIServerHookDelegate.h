
@protocol RUIServerHookDelegate <NSObject>

@required

- (void)dismissObjectModelsAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIViewController *)presentationContextForHook:(id <RUIServerHook>)arg1;

@end