
@protocol TPSURLSessionCustomAuthHandling <NSObject>

@required

+ (bool)canAuthenticateWithURLResponse:(NSURLResponse *)arg1;

- (void)authenticateForURLResponse:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSDictionary *, NSError *, void*

@optional

- (NSDictionary *)customHeaderFields;

@end
