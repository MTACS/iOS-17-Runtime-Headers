
@protocol HLPURLSessionCustomAuthHandling <NSObject>

@required

+ (bool)canAuthenticateWithURLResponse:(NSURLResponse *)arg1;

- (void)authenticateWithCompletion:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSDictionary *, NSError *, void*

@optional

- (NSDictionary *)customHeaderFields;

@end
