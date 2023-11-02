
@interface VCPFaceAnalyzer : NSObject {
    VCPFaceMerger * _faceMerger;
    int  _processingVersion;
    VCPObjectPool * _sessionPool;
}

+ (bool)_downsampleBeforeFaceProcessing;
+ (bool)_faceprintFastMode;

- (void).cxx_destruct;
- (void)_checkAnalysisRequests:(id)arg1 forTooSmallFaceObservations:(id)arg2 withAnalysisResults:(id)arg3;
- (int)_createBlurRequests:(id*)arg1 andExposureRequests:(id*)arg2 forFaceObservations:(id)arg3;
- (id)_existingFacesFromAsset:(id)arg1;
- (int)_loadImageRequestHandler:(id*)arg1 orientation:(unsigned int*)arg2 bufferWidth:(int*)arg3 bufferHeight:(int*)arg4 withResource:(id)arg5 resourceURL:(id)arg6 andAsset:(id)arg7;
- (int)_performAnalysis:(id*)arg1 withRequestHandler:(id)arg2 quickMode:(bool)arg3 sourceWidth:(unsigned long long)arg4 sourceHeight:(unsigned long long)arg5;
- (int)analyzeAsset:(id)arg1 withResource:(id)arg2 resourceURL:(id)arg3 quickMode:(bool)arg4 results:(id*)arg5;
- (int)analyzeFaceQuality:(id*)arg1 withAsset:(id)arg2 andCancelBlock:(id /* block */)arg3;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (int)quickAnalyzeAsset:(id)arg1 results:(id*)arg2;
- (int)quickAnalyzeCVPixelBuffer:(struct __CVBuffer { }*)arg1 results:(id*)arg2;
- (int)refineAnalysis:(id*)arg1 requestHandler:(id)arg2 forAsset:(id)arg3 orientedWidth:(unsigned long long)arg4 orientedHeight:(unsigned long long)arg5;
- (int)updateMissingFaceprintForFaces:(id)arg1 withAsset:(id)arg2;

@end
