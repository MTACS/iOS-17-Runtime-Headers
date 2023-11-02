
@interface VCPPreAnalyzer : NSObject {
    VCPPreAnalysisImageLoader * _imageLoader;
    VCPObjectPool * _ivsPool;
    VCPPoolBasedPixelBufferCreator * _monochromeBufferCreator;
    NSObject<OS_dispatch_group> * _processingGroup;
    NSObject<OS_dispatch_queue> * _processingQueue;
    VCPPoolBasedPixelBufferCreator * _rotationBufferCreator;
    VCPMAMLModel * _rotationModel;
    VCPObjectPool * _sessionPool;
}

+ (bool)_allowANE;
+ (bool)_enableSceneAssetConcurrency;
+ (unsigned long long)_getSHRevision;
+ (bool)_includeCN;
+ (bool)_includeDMF;
+ (bool)_includeDO;
+ (bool)_includeDocument;
+ (bool)_includeIVS;
+ (bool)_includeLM;
+ (bool)_includeMeme;
+ (bool)_includeNSFW;
+ (bool)_includePA;
+ (bool)_includeRotation;
+ (bool)_includeSDG;
+ (bool)_includeSE;
+ (bool)_includeSO;
+ (bool)_includeWP;
+ (bool)_isMovieWithMediaType:(long long)arg1;
+ (bool)_isPanoWithMediaType:(long long)arg1 andMediaSubtypes:(unsigned long long)arg2;
+ (bool)_isSDOFWithMediaType:(long long)arg1 andMediaSubtypes:(unsigned long long)arg2;
+ (id)_nonPanoPreWarmDimensions;
+ (bool)_useR14J9;

- (void).cxx_destruct;
- (int)_collectSceneAnalysisResults:(id*)arg1 fromRequests:(id)arg2 wpResults:(id)arg3 ivsResults:(id)arg4 abnormalDimension:(unsigned long long)arg5;
- (void)_configureRequest:(id)arg1;
- (void)_configureRequest:(id)arg1 withRevision:(unsigned long long)arg2;
- (int)_createRequests:(id)arg1 withMediaType:(long long)arg2;
- (id)_extractAndSortBoundingBoxFromDetectedObjects:(id)arg1;
- (void)_generateSceneClassifications:(id)arg1 fromRequests:(id)arg2;
- (void)_insertBoundingBox:(id)arg1 toSortedBoundingBoxes:(id)arg2;
- (void)_parseClassificationObservations:(id)arg1 toClassificationResults:(id)arg2;
- (void)_parseClassificationObservations:(id)arg1 withPrefix:(id)arg2 toClassificationResults:(id)arg3;
- (void)_parsePhotosTaxonomyClassificationObservations:(id)arg1 toClassificationResults:(id)arg2 andDetectorSceneClassIds:(id)arg3 isEntityNet:(bool)arg4;
- (int)_performAnalysis:(id*)arg1 mediaType:(long long)arg2 mediaSubtypes:(unsigned long long)arg3 abnormalDimension:(unsigned long long)arg4 colorPixelBuffer:(struct __CVBuffer { }*)arg5 andLumaPixelBuffer:(struct __CVBuffer { }*)arg6 image:(id)arg7;
- (int)_performBlurAnalysis:(id*)arg1 withLumaPixelBuffer:(struct __CVBuffer { }*)arg2 abnormalDimension:(unsigned long long)arg3 isSDOF:(bool)arg4;
- (int)_performBlurAnalysis:(id*)arg1 withPixelBuffer:(struct __CVBuffer { }*)arg2 usingAnalyzer:(id)arg3;
- (int)_performExposureAnalysis:(id*)arg1 withLumaPixelBuffer:(struct __CVBuffer { }*)arg2;
- (int)_performRotationAnalysis:(id*)arg1 withColorPixelBuffer:(struct __CVBuffer { }*)arg2;
- (int)_performSceneAnalysis:(id*)arg1 image:(id)arg2 mediaType:(long long)arg3 mediaSubtypes:(unsigned long long)arg4 abnormalDimension:(unsigned long long)arg5;
- (int)_performWallpaperAnalysis:(id*)arg1 withSceneprint:(id)arg2;
- (id)_processBoundingBoxFromDetectedObjects:(id)arg1 forSceneClassID:(id)arg2;
- (void)analyzeWithImageURL:(id)arg1 mediaType:(long long)arg2 mediaSubtypes:(unsigned long long)arg3 abnormalDimension:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)dealloc;
- (id)init;

@end
