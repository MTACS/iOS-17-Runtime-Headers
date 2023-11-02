
@protocol NSURLSessionDelegate_Internal <NSURLSessionDelegate>

@optional

- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didReceiveInformationalResponse:(NSHTTPURLResponse *)arg3;
- (void)URLSession:(void *)arg1 task:(void *)arg2 needNewBodyStreamFromOffset:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURLSession *, NSURLSessionTask *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSInputStream *, void*
- (void)_URLSession:(void *)arg1 openFileAtPath:(void *)arg2 mode:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURLSession *, NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)_URLSession:(void *)arg1 task:(void *)arg2 getAuthHeadersForResponse:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: NSURLSession *, NSURLSessionTask *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSURLRequest *, void*

@end
