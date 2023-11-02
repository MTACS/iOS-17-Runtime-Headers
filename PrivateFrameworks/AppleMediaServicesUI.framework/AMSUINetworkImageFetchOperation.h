
@interface AMSUINetworkImageFetchOperation : AMSUIAssetFetchOperation {
    NSURLSession * _URLSession;
    NSURLSessionTask * _sessionTask;
    NSURL * _url;
}

@property (nonatomic, retain) NSURLSession *URLSession;
@property (nonatomic, retain) NSURLSessionTask *sessionTask;
@property (nonatomic, retain) NSURL *url;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;

- (void).cxx_destruct;
- (id)URLSession;
- (void)_didCompleteTaskWithData:(id)arg1 error:(id)arg2;
- (id)_eagerlyDecompressImage:(id)arg1;
- (float)_sessionTaskPriorityForQueuePriority:(long long)arg1;
- (void)cancel;
- (id)initWithURL:(id)arg1 URLSession:(id)arg2;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (id)sessionTask;
- (void)setQueuePriority:(long long)arg1;
- (void)setSessionTask:(id)arg1;
- (void)setURLSession:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)start;
- (id)url;

@end
