
@protocol SOAuthorizationCoreDelegate <NSObject>

@optional

- (void)authorization:(SOAuthorizationCore *)arg1 didCompleteWithAuthorizationResult:(SOAuthorizationResultCore *)arg2;
- (void)authorization:(SOAuthorizationCore *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)authorization:(SOAuthorizationCore *)arg1 didCompleteWithHTTPAuthorizationHeaders:(NSDictionary *)arg2;
- (void)authorization:(SOAuthorizationCore *)arg1 didCompleteWithHTTPResponse:(NSHTTPURLResponse *)arg2 httpBody:(NSData *)arg3;
- (void)authorizationDidCancel:(SOAuthorizationCore *)arg1;
- (void)authorizationDidComplete:(SOAuthorizationCore *)arg1;
- (void)authorizationDidNotHandle:(SOAuthorizationCore *)arg1;

@end
