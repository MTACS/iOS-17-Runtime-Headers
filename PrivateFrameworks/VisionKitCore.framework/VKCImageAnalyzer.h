
@interface VKCImageAnalyzer : NSObject {
    <VKAnalyzerAnalyticsDelegate> * __analyticsDelegate;
    bool  __isPublicAPI;
    VKAnalyticsProcessor * _analyticsProcessor;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _createFeedbackProviders;
    VKImageAnalyzerMadInterface * _mad;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (nonatomic) <VKAnalyzerAnalyticsDelegate> *_analyticsDelegate;
@property (nonatomic) bool _isPublicAPI;
@property (nonatomic, retain) VKAnalyticsProcessor *analyticsProcessor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) bool createFeedbackProviders;
@property (nonatomic, retain) VKImageAnalyzerMadInterface *mad;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *realCallbackQueue;

+ (bool)deviceSupportsImageAnalysis;
+ (unsigned long long)supportedAnalysisTypes;
+ (id)supportedRecognitionLanguages;

- (void).cxx_destruct;
- (id)_analyticsDelegate;
- (void)_forceInProcessAnalysis;
- (bool)_isPublicAPI;
- (int)_processRequest:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)analyticsProcessor;
- (id)callbackQueue;
- (void)cancelAllRequests;
- (void)cancelRequestID:(int)arg1;
- (bool)createFeedbackProviders;
- (void)dealloc;
- (id)init;
- (id)mad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)processRequest:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)processRequest:(id)arg1 updateHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)processingQueue;
- (id)realCallbackQueue;
- (void)setAnalyticsProcessor:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setCreateFeedbackProviders:(bool)arg1;
- (void)setMad:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)set_analyticsDelegate:(id)arg1;
- (void)set_isPublicAPI:(bool)arg1;
- (unsigned long long)statusForRequestID:(int)arg1;
- (void)updateForLiveTextSupport;

@end
