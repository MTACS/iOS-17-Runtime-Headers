
@interface PIParallaxColorAnalysisRequest : NURenderRequest {
    bool  _analyzeBackground;
    double  _chromaThreshold;
    double  _dominanceThreshold;
    long long  _maxDominantColors;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedClipRect;
    <NUImageBuffer> * _segmentationMatte;
}

@property (nonatomic) bool analyzeBackground;
@property (nonatomic) double chromaThreshold;
@property (nonatomic) double dominanceThreshold;
@property (nonatomic) long long maxDominantColors;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedClipRect;
@property (nonatomic, retain) <NUImageBuffer> *segmentationMatte;

- (void).cxx_destruct;
- (bool)analyzeBackground;
- (double)chromaThreshold;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dominanceThreshold;
- (id)initWithComposition:(id)arg1;
- (long long)maxDominantColors;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedClipRect;
- (id)segmentationMatte;
- (void)setAnalyzeBackground:(bool)arg1;
- (void)setChromaThreshold:(double)arg1;
- (void)setDominanceThreshold:(double)arg1;
- (void)setMaxDominantColors:(long long)arg1;
- (void)setNormalizedClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSegmentationMatte:(id)arg1;
- (void)submit:(id /* block */)arg1;

@end
