
@protocol _ASAuthenticationPresentationProvider <NSObject>

@required

- (void)authenticationProvider:(id <_ASAuthenticationProvider>)arg1 hideViewController:(UIViewController *)arg2;
- (void)authenticationProvider:(void *)arg1 presentAlert:(void *)arg2 primaryAction:(void *)arg3 alternateAction:(void *)arg4; // needs 4 arg types, found 12: <_ASAuthenticationProvider> *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (void)authenticationProvider:(id <_ASAuthenticationProvider>)arg1 showViewController:(UIViewController *)arg2;
- (UIWindow *)presentationAnchor;

@end
