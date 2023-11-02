
@protocol AKAppleIDAuthenticationInAppContextDelegate <NSObject>

@optional

- (void)contextDidDismissLoginAlertController:(AKAppleIDAuthenticationInAppContext *)arg1;
- (void)contextDidEndPresentingSecondaryUI:(AKAppleIDAuthenticationInAppContext *)arg1;
- (void)contextDidPresentLoginAlertController:(AKAppleIDAuthenticationInAppContext *)arg1;
- (void)contextWillBeginPresentingSecondaryUI:(AKAppleIDAuthenticationInAppContext *)arg1;
- (void)contextWillBeginPresentingSecondaryUI:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: AKAppleIDAuthenticationInAppContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)contextWillDismissLoginAlertController:(AKAppleIDAuthenticationInAppContext *)arg1;
- (RUIStyle *)remoteUIStyle;
- (void)signAdditionalHeadersWithRequest:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSMutableURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSMutableURLRequest *, void*
- (void)willPresentModalNavigationController:(UINavigationController *)arg1;
- (void)willShowViewController:(UIViewController *)arg1;

@end
