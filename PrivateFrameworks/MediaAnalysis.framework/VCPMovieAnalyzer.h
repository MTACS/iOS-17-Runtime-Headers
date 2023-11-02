
@interface VCPMovieAnalyzer : NSObject {
    bool  _allowStreaming;
    NSMutableDictionary * _analysis;
    VCPAsset * _asset;
    NSDictionary * _existingAnalysis;
    bool  _faceDominated;
    bool  _generateVideoCaption;
    float  _maxAnalysisLength;
    float  _maxHighlightDuration;
    NSDictionary * _options;
    PHAsset * _phAsset;
    bool  _prepareLivePhotoScenes;
    NSMutableDictionary * _privateResults;
    unsigned long long  _requestedAnalyses;
    long long  _status;
    bool  _supportConditionalAnalysis;
}

@property (nonatomic) bool allowStreaming;
@property (nonatomic) bool faceDominated;
@property (nonatomic) float maxAnalysisLength;
@property (nonatomic) float maxHighlightDuration;
@property (readonly) long long status;

+ (id)analyzerWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 withOptions:(id)arg4;
+ (bool)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2;
+ (bool)getEnableMovieHumanAction;
+ (id)getHumanActionClassiferType;
+ (float)getMaximumHighlightInSec;
+ (long long)getSceneEmbeddingsMode;
+ (bool)isHeuristicStickerScoreEnabled;

- (void).cxx_destruct;
- (bool)allowStreaming;
- (id)analyzeAsset:(id /* block */)arg1 streamed:(bool*)arg2;
- (int)analyzeVideoSegment:(id)arg1 timerange:(const struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2 forAnalysisTypes:(unsigned long long)arg3 cancel:(id /* block */)arg4;
- (int)analyzeVideoTrack:(id)arg1 start:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forAnalysisTypes:(unsigned long long)arg3 cancel:(id /* block */)arg4;
- (id)createDecoderForTrack:(id)arg1 timerange:(const struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2 forAnalysisTypes:(unsigned long long)arg3;
- (id)createVideoAnalyzer:(id)arg1 withFrameStats:(id)arg2 withEmbeddings:(id)arg3;
- (bool)faceDominated;
- (int)generateKeyFrameResource:(id)arg1;
- (id)initWithPHAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;
- (id)initWithPHAsset:(id)arg1 withPausedAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;
- (id)initWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 withOptions:(id)arg4;
- (void)loadPropertiesForAsset:(id)arg1;
- (float)maxAnalysisLength;
- (float)maxHighlightDuration;
- (int)performMetadataAnalysisOnAsset:(id)arg1 withCancelBlock:(id /* block */)arg2;
- (int)postProcessAutoPlayable:(id)arg1;
- (id)privateResults;
- (id)processExistingAnalysisForTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 analysisTypes:(unsigned long long*)arg2;
- (void)setAllowStreaming:(bool)arg1;
- (void)setFaceDominated:(bool)arg1;
- (void)setMaxAnalysisLength:(float)arg1;
- (void)setMaxHighlightDuration:(float)arg1;
- (long long)status;

@end
