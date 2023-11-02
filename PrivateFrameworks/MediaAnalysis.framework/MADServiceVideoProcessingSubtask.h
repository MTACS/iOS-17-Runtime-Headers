
@interface MADServiceVideoProcessingSubtask : VCPMABaseTask <MADServiceVideoProcessingSubtaskProtocol> {
    NSString * _signpostPayload;
}

@property (nonatomic, copy) NSString *signpostPayload;

+ (Class)taskClassForRequest:(id)arg1;
+ (id)taskWithRequest:(id)arg1 forAsset:(id)arg2 cancelBlock:(id /* block */)arg3 progressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
+ (void)unimplementedExceptionForMethodName:(id)arg1;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 forAsset:(id)arg2 cancelBlock:(id /* block */)arg3 progressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (void)setSignpostPayload:(id)arg1;
- (id)signpostPayload;

@end
