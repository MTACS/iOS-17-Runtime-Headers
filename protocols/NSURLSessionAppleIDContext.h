
@protocol NSURLSessionAppleIDContext <NSObject, NSCopying, NSSecureCoding>

@required

- (void)URLSession:(void *)arg1 task:(void *)arg2 getAppleIDHeadersForResponse:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSURLSession *, NSURLSessionTask *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, void*
- (NSSet *)relevantHTTPStatusCodes;

@optional

- (void)URLSession:(void *)arg1 task:(void *)arg2 getAppleIDRequestOrHeadersForResponse:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: NSURLSession *, NSURLSessionTask *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSURLRequest *, void*

@end
