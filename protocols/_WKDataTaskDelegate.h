
@protocol _WKDataTaskDelegate <NSObject>

@optional

- (void)dataTask:(_WKDataTask *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)dataTask:(void *)arg1 didReceiveAuthenticationChallenge:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: _WKDataTask *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)dataTask:(_WKDataTask *)arg1 didReceiveData:(NSData *)arg2;
- (void)dataTask:(void *)arg1 didReceiveResponse:(void *)arg2 decisionHandler:(void *)arg3; // needs 3 arg types, found 8: _WKDataTask *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)dataTask:(void *)arg1 willPerformHTTPRedirection:(void *)arg2 newRequest:(void *)arg3 decisionHandler:(void *)arg4; // needs 4 arg types, found 9: _WKDataTask *, NSHTTPURLResponse *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@end
