
@interface QLGeneratorFetcher : QLItemFetcher {
    NSString * _contentType;
    bool  _fetchCompleted;
    NSURL * _url;
}

@property (retain) NSString *contentType;
@property bool fetchCompleted;
@property (copy) NSURL *url;

- (void).cxx_destruct;
- (void)_callCompletionBlockIfNecessary:(id /* block */)arg1 withReply:(id)arg2 error:(id)arg3;
- (id)contentType;
- (bool)fetchCompleted;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (id)initWithURL:(id)arg1 contentType:(id)arg2;
- (void)setContentType:(id)arg1;
- (void)setFetchCompleted:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
