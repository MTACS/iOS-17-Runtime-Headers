
@interface VKCaptureTextAnalyzer : NSObject {
    VKCaptureTextAnalysisRequest * __pendingRequest;
    bool  __processing;
    NSObject<OS_dispatch_queue> * __processingQueue;
    VKCaptureTextAnalysisRequest * __processingRequest;
    bool  _shouldCreateFeedbackProviders;
}

@property (setter=_setPendingRequest:, nonatomic, retain) VKCaptureTextAnalysisRequest *_pendingRequest;
@property (getter=_isProcessing, setter=_setProcessing:, nonatomic) bool _processing;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_processingQueue;
@property (setter=_setProcessingRequest:, nonatomic, retain) VKCaptureTextAnalysisRequest *_processingRequest;
@property (nonatomic) bool shouldCreateFeedbackProviders;

- (void).cxx_destruct;
- (id)_blocksIntersectingQuad:(id)arg1 inDocument:(id)arg2;
- (void)_didProcessRequest:(id)arg1 withDetectionResult:(id)arg2 analysis:(id)arg3 error:(id)arg4;
- (id)_documentDetectionRequest;
- (id)_documentRecognitionRequestWithInputBlock:(id)arg1;
- (id)_documentRecognitionRequestWithInputBlocks:(id)arg1;
- (void)_enqueueProcessingForRequest:(id)arg1;
- (id)_imageAnalysisForDocument:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)_isCanceledRequest:(id)arg1;
- (bool)_isProcessing;
- (id)_pendingRequest;
- (id)_processingQueue;
- (id)_processingRequest;
- (void)_setPendingRequest:(id)arg1;
- (void)_setProcessing:(bool)arg1;
- (void)_setProcessingRequest:(id)arg1;
- (void)cancelAllRequests;
- (void)dealloc;
- (id)init;
- (void)processRequest:(id)arg1;
- (void)setShouldCreateFeedbackProviders:(bool)arg1;
- (bool)shouldCreateFeedbackProviders;

@end
