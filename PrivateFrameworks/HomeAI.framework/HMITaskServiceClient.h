
@interface HMITaskServiceClient : HMITaskService {
    VCPHomeKitAnalysisService * _remote;
}

@property (readonly) VCPHomeKitAnalysisService *remote;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)cancelTask:(int)arg1;
- (id)init;
- (id)remote;
- (int)submitTaskWithOptions:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

@end
