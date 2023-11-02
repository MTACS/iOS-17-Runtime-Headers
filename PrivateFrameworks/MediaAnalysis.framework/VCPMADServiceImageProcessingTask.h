
@interface VCPMADServiceImageProcessingTask : VCPMABaseTask {
    VCPMADServiceImageAsset * _asset;
    NSObject<OS_dispatch_queue> * _cancelQueue;
    NSArray * _requests;
    NSString * _signpostPayload;
    NSMutableArray * _subtasks;
}

@property (nonatomic, retain) NSString *signpostPayload;

+ (id)taskWithRequests:(id)arg1 forAsset:(id)arg2 cancelBlock:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (bool)cachesResources;
- (void)cancel;
- (id)initWithRequests:(id)arg1 forAsset:(id)arg2 cancelBlock:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;
- (bool)run:(id*)arg1;
- (void)setSignpostPayload:(id)arg1;
- (id)signpostPayload;

@end
