
@interface PXVisualIntelligenceManager : NSObject {
    bool  _analysisSuspended;
    _PXVisualIntelligenceRequest * _currentRequest;
    int  _nextRequestID;
    NSMutableArray * _requests;
    VKCImageAnalyzer * _vkAnalyzer;
    NSObject<OS_dispatch_queue> * _workingQueue;
}

@property (nonatomic) bool analysisSuspended;
@property (nonatomic, retain) _PXVisualIntelligenceRequest *currentRequest;
@property (nonatomic) int nextRequestID;
@property (nonatomic, retain) NSMutableArray *requests;
@property (nonatomic, retain) VKCImageAnalyzer *vkAnalyzer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workingQueue;

+ (struct CGSize { double x1; double x2; })_sizeToPreheatResourcesForSubjectExtractionOfAsset:(id)arg1;
+ (bool)canRequestVKImageAnalysisForAsset:(id)arg1;
+ (bool)isAppClipSupported;
+ (bool)isImageSegmentationSupported;
+ (bool)isLiveTextSupported;
+ (bool)isMRCSupported;
+ (bool)isVisualSearchSupported;
+ (int)preheatResourcesForSubjectExtractionOfAsset:(id)arg1;
+ (id)sharedManager;
+ (unsigned long long)supportedAnalysisTypes;

- (void).cxx_destruct;
- (void)_cancelRequestByAsset_sync:(id)arg1;
- (void)_dispatchNextRequest;
- (void)_logAnalysis:(id)arg1 request:(id)arg2 duration:(double)arg3 error:(id)arg4;
- (void)_processAnalysis:(id)arg1 withRequest:(id)arg2 error:(id)arg3;
- (void)_resetCurrentRequestAndDispatchNextRequest;
- (bool)analysisSuspended;
- (void)cancelRequestByAsset:(id)arg1;
- (void)cancelRequestByID:(int)arg1;
- (id)currentRequest;
- (id)init;
- (int)nextRequestID;
- (int)requestVKImageAnalysisForAsset:(id)arg1 cgImage:(struct CGImage { }*)arg2 orientation:(long long)arg3 resultHandler:(id /* block */)arg4;
- (int)requestVKImageAnalysisForAsset:(id)arg1 image:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestVKImageAnalysisForAsset:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 orientation:(long long)arg3 resultHandler:(id /* block */)arg4;
- (int)requestVKImageAnalysisForAsset:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)requests;
- (void)setAnalysisSuspended:(bool)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setNextRequestID:(int)arg1;
- (void)setRequests:(id)arg1;
- (void)setVkAnalyzer:(id)arg1;
- (id)vkAnalyzer;
- (id)workingQueue;

@end
