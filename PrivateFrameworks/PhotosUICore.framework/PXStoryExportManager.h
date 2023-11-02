
@interface PXStoryExportManager : NSObject {
    NSOperationQueue * _operationQueue;
    long long  _qualityOfService;
}

@property (nonatomic) long long maxConcurrentExportCount;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic) long long qualityOfService;

+ (id)_appleIDCountry;
+ (id)_aspectDescriptionFromSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)_defaultPayloadForConfiguration:(id)arg1;
+ (void)_incrementShareCountForMemory:(id)arg1;
+ (id)collectAnalyticsForExportBeginWithConfiguration:(id)arg1;
+ (void)collectAnalyticsForExportEndWithConfiguration:(id)arg1 analyticsToken:(id)arg2 model:(id)arg3 withSuccess:(bool)arg4 error:(id)arg5;
+ (bool)collectAnalyticsForFixationWithAppleMusicAsset:(id)arg1 configuration:(id)arg2;
+ (void)collectDataContinuationAnalyticsForExportWithConfiguration:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;
+ (id)frequentSignpostLog;

- (void).cxx_destruct;
- (void)cancelAllExports;
- (id)init;
- (long long)maxConcurrentExportCount;
- (id)operationQueue;
- (long long)qualityOfService;
- (id)requestExportWithDestinationURL:(id)arg1 configuration:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)setMaxConcurrentExportCount:(long long)arg1;
- (void)setQualityOfService:(long long)arg1;

@end
