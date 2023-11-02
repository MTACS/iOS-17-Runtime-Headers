
@protocol VKCaptureTextAnalysisRequestDelegate <NSObject>

@required

- (void)request:(VKCaptureTextAnalysisRequest *)arg1 didDetectTextWithResult:(VKCaptureTextDetectionResult *)arg2;
- (void)request:(VKCaptureTextAnalysisRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)request:(VKCaptureTextAnalysisRequest *)arg1 didRecgonizeTextWithAnalysis:(VKCImageAnalysis *)arg2;
- (void)requestDidCancel:(VKCaptureTextAnalysisRequest *)arg1;

@end
