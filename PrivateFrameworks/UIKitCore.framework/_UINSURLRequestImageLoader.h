
@interface _UINSURLRequestImageLoader : _UIImageLoader {
    NSURLRequest * _request;
    NSURLSession * _session;
    NSURLSessionTask * _task;
}

- (void).cxx_destruct;
- (id)_error;
- (bool)_really_cancel;
- (void)_really_loadImage:(id /* block */)arg1;
- (id)initWithURLRequest:(id)arg1 session:(id)arg2;

@end
