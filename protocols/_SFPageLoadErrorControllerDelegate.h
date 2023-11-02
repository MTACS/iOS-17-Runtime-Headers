
@protocol _SFPageLoadErrorControllerDelegate <NSObject>

@required

- (void)pageLoadErrorController:(_SFPageLoadErrorController *)arg1 allowLegacyTLSConnectionForURL:(NSURL *)arg2 navigateToURL:(NSURL *)arg3;
- (void)pageLoadErrorController:(_SFPageLoadErrorController *)arg1 loadFailedRequestAfterError:(NSURLRequest *)arg2;
- (void)pageLoadErrorController:(_SFPageLoadErrorController *)arg1 presentViewController:(UIViewController *)arg2;
- (void)pageLoadErrorControllerClosePage:(_SFPageLoadErrorController *)arg1;
- (_SFSecIdentityPreferencesController *)pageLoadErrorControllerGetSecIdentityPreferencesController:(_SFPageLoadErrorController *)arg1;
- (bool)pageLoadErrorControllerIsInPreviewMode:(_SFPageLoadErrorController *)arg1;
- (void)pageLoadErrorControllerReloadWithoutPrivateRelay:(_SFPageLoadErrorController *)arg1;
- (bool)pageLoadErrorControllerShouldHandleCertificateError:(_SFPageLoadErrorController *)arg1;
- (bool)pageLoadErrorControllerShouldPermanentlyAcceptCertificate:(_SFPageLoadErrorController *)arg1;
- (bool)pageLoadErrorControllerShouldReloadAfterError:(_SFPageLoadErrorController *)arg1;

@optional

- (void)pageLoadErrorControllerDidAddAlert:(_SFPageLoadErrorController *)arg1;

@end
