
@protocol __NSURLSessionTaskGroupForConfiguration <NSObject>

@required

- (NSURLSessionConfiguration *)_groupConfiguration;
- (NSURLSession *)_groupSession;
- (NSURLSessionDataTask *)dataTaskWithRequest:(NSURLRequest *)arg1;
- (NSURLSessionDataTask *)dataTaskWithRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSURLResponse *, NSError *, void*
- (NSURLSessionUploadTask *)uploadTaskWithStreamedRequest:(NSURLRequest *)arg1;

@end
