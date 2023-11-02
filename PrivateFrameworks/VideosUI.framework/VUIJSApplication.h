
@interface VUIJSApplication : VUIJSObject <VUIJSApplication>

@property (nonatomic, readonly) NSDictionary *traitCollection;

- (void)dispatchErrorWithMessage:(id)arg1 sourceURL:(id)arg2 line:(id)arg3;
- (void)exitAppWithOptions:(id)arg1;
- (void)launchAppWithOptions:(id)arg1;
- (void)openURLWithOptions:(id)arg1;
- (void)reload:(id)arg1 :(id)arg2;
- (void)resumeAppWithOptions:(id)arg1;
- (void)suspendAppWithOptions:(id)arg1;
- (id)traitCollection;
- (void)updatedAppWithOptions:(id)arg1;

@end
