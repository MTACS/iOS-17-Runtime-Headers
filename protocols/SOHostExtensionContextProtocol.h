
@protocol SOHostExtensionContextProtocol <SOExtensionContextProtocol>

@required

- (void)authorization:(NSString *)arg1 didCompleteWithCredential:(SOAuthorizationCredential *)arg2 error:(NSError *)arg3;
- (void)canOpenURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)openURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)presentAuthorizationViewControllerWithHints:(void *)arg1 requestIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestReauthenticationWithRequestIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*

@end
