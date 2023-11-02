
@protocol AKAuthorizationPaneViewControllerDelegate <NSObject, AKAuthorizationPaneAutomaticResizeDelegate>

@required

- (void)authorizationPaneViewController:(void *)arg1 didRequestAuthorizationWithUserProvidedInformation:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AKAuthorizationPaneViewController *, AKAuthorizationUserResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKAuthorization *, NSError *, void*
- (void)authorizationPaneViewController:(AKAuthorizationPaneViewController *)arg1 dismissWithAuthorization:(AKAuthorization *)arg2 error:(NSError *)arg3;

@optional

- (void)authorizationPaneViewController:(void *)arg1 didRequestIconWithCompletion:(void *)arg2; // needs 2 arg types, found 8: AKAuthorizationPaneViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKIconContext *, NSError *, void*
- (void)authorizationPaneViewController:(AKAuthorizationPaneViewController<AKAuthorizationEditableDataSources> *)arg1 pushEditScope:(NSString *)arg2 presentationContext:(AKAuthorizationPresentationContext *)arg3 options:(NSDictionary *)arg4;
- (void)performAppleIDAuthorizationForPaneViewController:(AKAuthorizationPaneViewController *)arg1;
- (void)performPasswordAuthenticationForPaneViewController:(AKAuthorizationPaneViewController<AKAuthorizationPasswordAuthenticationDelegate> *)arg1;

@end
