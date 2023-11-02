
@protocol SOAuthorizationDelegate <NSObject>

@optional

- (void)authorization:(SOAuthorization *)arg1 didCompleteWithAuthorizationResult:(SOAuthorizationResult *)arg2;
- (void)authorization:(SOAuthorization *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)authorization:(SOAuthorization *)arg1 didCompleteWithHTTPAuthorizationHeaders:(NSDictionary *)arg2;
- (void)authorization:(SOAuthorization *)arg1 didCompleteWithHTTPResponse:(NSHTTPURLResponse *)arg2 httpBody:(NSData *)arg3;
- (void)authorization:(void *)arg1 presentViewController:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: SOAuthorization *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)authorizationDidCancel:(SOAuthorization *)arg1;
- (void)authorizationDidComplete:(SOAuthorization *)arg1;
- (void)authorizationDidNotHandle:(SOAuthorization *)arg1;

@end
