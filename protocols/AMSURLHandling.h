
@protocol AMSURLHandling <NSObject>

@required

- (id)decodeData:(NSData *)arg1 task:(NSURLSessionTask *)arg2 error:(id*)arg3;
- (void)didCreateTask:(NSURLSessionTask *)arg1 fromRequest:(NSURLRequest *)arg2 error:(id*)arg3;
- (void)handleCompletionWithTask:(void *)arg1 metrics:(void *)arg2 decodedObject:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURLSessionTask *, NSURLSessionTaskMetrics *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSURLAction *, void*
- (void)handleResponse:(void *)arg1 task:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURLResponse *, NSURLSessionTask *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSURLAction *, void*
- (void)reconfigureNewRequest:(NSMutableURLRequest *)arg1 originalTask:(NSURLSessionTask *)arg2 redirect:(bool)arg3 error:(id*)arg4;
- (AMSURLSession *)session;
- (void)setSession:(AMSURLSession *)arg1;

@optional

- (id)decodeMutableData:(NSMutableData *)arg1 task:(NSURLSessionTask *)arg2 error:(id*)arg3;
- (AMSURLAction *)handleCompletionWithTask:(NSURLSessionTask *)arg1 metrics:(NSURLSessionTaskMetrics *)arg2 decodedObject:(id)arg3;
- (AMSURLAction *)handleResponse:(NSURLResponse *)arg1 task:(NSURLSessionTask *)arg2;

@end
