
@interface VKCaptureTextFeedbackAssetProvider : NSObject <VKFeedbackAssetsProvider> {
    VKCaptureTextDetectionResult * _detectionResult;
    VKCaptureTextAnalysisRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) VKCaptureTextDetectionResult *detectionResult;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VKCaptureTextAnalysisRequest *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)detectionResult;
- (id)initWithRequest:(id)arg1 detectionResult:(id)arg2;
- (id)request;
- (bool)saveAssetsToFeedbackAttachmentsFolder:(id)arg1 error:(id*)arg2;

@end
