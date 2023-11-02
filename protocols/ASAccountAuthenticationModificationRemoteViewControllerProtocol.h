
@protocol ASAccountAuthenticationModificationRemoteViewControllerProtocol

@required

- (void)dismissAccountModificationRemoteViewController;
- (void)presentAccountModificationRemoteViewController;
- (void)requestDidFailWithError:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)requestDidFinishWithCredential:(void *)arg1 userInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: ASPasswordCredential *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)requestToUpgradeToSignInWithAppleDidFinishWithUserInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
