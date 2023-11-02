
@interface MADServiceVideoProcessingTask : VCPMABaseTask {
    MADServiceVideoAsset * _asset;
    id /* block */  _completionHandler;
    id /* block */  _progressHandler;
    NSArray * _requests;
    id /* block */  _resultHandler;
    NSString * _signpostPayload;
}

@property (nonatomic, copy) NSString *signpostPayload;

+ (id)taskWithRequests:(id)arg1 forAsset:(id)arg2 cancelBlock:(id /* block */)arg3 progressHandler:(id /* block */)arg4 resultHandler:(id /* block */)arg5 andCompletionHandler:(id /* block */)arg6;

- (void).cxx_destruct;
- (bool)cachesResources;
- (id)initWithRequests:(id)arg1 forAsset:(id)arg2 cancelBlock:(id /* block */)arg3 progressHandler:(id /* block */)arg4 resultHandler:(id /* block */)arg5 andCompletionHandler:(id /* block */)arg6;
- (bool)run:(id*)arg1;
- (void)setSignpostPayload:(id)arg1;
- (id)signpostPayload;

@end
