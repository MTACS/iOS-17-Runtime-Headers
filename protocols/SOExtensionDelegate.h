
@protocol SOExtensionDelegate <NSObject>

@required

- (void)authorization:(NSString *)arg1 didCompleteWithCredential:(SOAuthorizationCredential *)arg2 error:(NSError *)arg3;

@optional

- (void)presentAuthorizationViewControllerWithHints:(void *)arg1 requestIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestReauthenticationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*

@end
