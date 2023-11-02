
@interface DCImageAnalyzerManager : NSObject {
    NSCache * _cachedAnalyses;
    VKCImageAnalyzer * _imageAnalyzer;
    NSObject<OS_dispatch_queue> * _operationQueue;
}

+ (bool)isImageAnalysisEnabled;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)analysisForImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cleanup;
- (id)init;

@end
