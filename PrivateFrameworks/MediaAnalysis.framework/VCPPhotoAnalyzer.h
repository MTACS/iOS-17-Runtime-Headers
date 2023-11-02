
@interface VCPPhotoAnalyzer : NSObject {
    bool  _allowStreaming;
    NSMutableDictionary * _analysis;
    VCPAsset * _asset;
    bool  _faceDominated;
    float  _imageBlurTextureScore;
    NSURL * _imageCaptionModel;
    unsigned long long  _irisAnalyses;
    PHAsset * _phAsset;
    unsigned long long  _phFaceFlags;
    NSDictionary * _phFaceResults;
    float  _preAnalysisSharpnessScore;
    unsigned long long  _requestedAnalyses;
    bool  _requirePHFaceAnalysis;
    struct Scaler { 
        struct CF<__CVPixelBufferPool *> { 
            struct __CVPixelBufferPool {} *value_; 
        } pool_; 
        int width_; 
        int height_; 
        unsigned int format_; 
        struct CF<OpaqueVTPixelTransferSession *> { 
            struct OpaqueVTPixelTransferSession {} *value_; 
        } transfer_session_; 
    }  _scaler;
    long long  _status;
}

@property (nonatomic) bool allowStreaming;
@property (readonly) long long status;

+ (id)analyzerWithVCPAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;
+ (bool)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2;
+ (bool)isLivePhotoKeyFrameEnabled;
+ (id)resourceForAsset:(id)arg1 withResources:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_reportPetsAnalysisWithResults:(id)arg1;
- (bool)allowStreaming;
- (id)analyzeAsset:(id /* block */)arg1 withOptions:(id)arg2;
- (int)analyzeImage:(unsigned long long*)arg1 performedAnalyses:(unsigned long long*)arg2 cancel:(id /* block */)arg3;
- (int)checkFaceDominant;
- (int)downscaleImage:(struct __CVBuffer { }*)arg1 scaledImage:(struct __CVBuffer {}**)arg2 majorDimension:(int)arg3;
- (id)existingAnalysisForMovieAnalyzer;
- (id)initWithPHAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;
- (id)initWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;
- (void)processExistingAnalyses:(id)arg1;
- (void)setAllowStreaming:(bool)arg1;
- (long long)status;
- (void)updateDegradedFlagForMajorDimension:(unsigned long long)arg1;

@end
