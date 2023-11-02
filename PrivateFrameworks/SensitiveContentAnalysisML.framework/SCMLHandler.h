
@interface SCMLHandler : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    SCMLImageAnalyzer * _imageAnalyzer;
    NSDictionary * _options;
    SCMLPerformance * _perfResults;
    SCMLTextAnalyzer * _textAnalyzer;
}

@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) SCMLImageAnalyzer *imageAnalyzer;
@property (readonly) NSDictionary *options;
@property (nonatomic, readonly) SCMLPerformance *perfResults;
@property (readonly) SCMLTextAnalyzer *textAnalyzer;

+ (id)currentModelVersion;
+ (bool)isImageSensitiveForLabel:(id)arg1 confidenceScore:(double)arg2 classificationMode:(unsigned long long)arg3;
+ (bool)isImageSensitiveForLabel:(id)arg1 confidenceScore:(double)arg2 classificationMode:(unsigned long long)arg3 modelVersion:(id)arg4 error:(id*)arg5;
+ (bool)supportsANE;
+ (bool)supportsCPU;

- (void).cxx_destruct;
- (id)analyzeImage:(struct CGImage { }*)arg1 error:(id*)arg2;
- (id)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (long long)classifyImage:(struct CGImage { }*)arg1 error:(id*)arg2;
- (long long)classifyPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (id)classifyPixelBuffer:(struct __CVBuffer { }*)arg1 stagedText:(id)arg2 inConversationWithIdentifier:(id)arg3 error:(id*)arg4;
- (id)classifyPixelBuffer:(struct __CVBuffer { }*)arg1 startDate:(id)arg2 endDate:(id)arg3 stagedText:(id)arg4 inConversationWithIdentifier:(id)arg5 error:(id*)arg6;
- (id)clientQueue;
- (id)getOperatingPointDataForClassName:(id)arg1 error:(id*)arg2;
- (id)imageAnalyzer;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)options;
- (id)perfResults;
- (id)performanceStatistics;
- (void)processConversationsWithStartDate:(id)arg1 endDate:(id)arg2 previousClassifications:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)processText:(id)arg1 inConversationWithIdentifier:(id)arg2 date:(id)arg3 error:(id*)arg4;
- (id)textAnalyzer;

@end
