
@interface PIPosterLayoutRequest : NURenderRequest {
    PFWallpaperCompoundDeviceConfiguration * _layoutConfiguration;
    <PFParallaxAssetRegions> * _layoutRegions;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedLayoutBounds;
    unsigned long long  _segmentationClassification;
    <NUImageBuffer> * _segmentationConfidenceMap;
    <NUImageBuffer> * _segmentationMatte;
    bool  _shouldComputeAllScores;
    bool  _shouldConsiderHeadroom;
    bool  _shouldConstrainLayoutToBounds;
}

@property (nonatomic, retain) PFWallpaperCompoundDeviceConfiguration *layoutConfiguration;
@property (nonatomic, retain) <PFParallaxAssetRegions> *layoutRegions;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedLayoutBounds;
@property (nonatomic) unsigned long long segmentationClassification;
@property (nonatomic, retain) <NUImageBuffer> *segmentationConfidenceMap;
@property (nonatomic, retain) <NUImageBuffer> *segmentationMatte;
@property (nonatomic) bool shouldComputeAllScores;
@property (nonatomic) bool shouldConsiderHeadroom;
@property (nonatomic) bool shouldConstrainLayoutToBounds;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithComposition:(id)arg1;
- (id)layoutConfiguration;
- (id)layoutRegions;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedLayoutBounds;
- (unsigned long long)segmentationClassification;
- (id)segmentationConfidenceMap;
- (id)segmentationMatte;
- (void)setLayoutConfiguration:(id)arg1;
- (void)setLayoutRegions:(id)arg1;
- (void)setNormalizedLayoutBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSegmentationClassification:(unsigned long long)arg1;
- (void)setSegmentationConfidenceMap:(id)arg1;
- (void)setSegmentationMatte:(id)arg1;
- (void)setShouldComputeAllScores:(bool)arg1;
- (void)setShouldConsiderHeadroom:(bool)arg1;
- (void)setShouldConstrainLayoutToBounds:(bool)arg1;
- (bool)shouldComputeAllScores;
- (bool)shouldConsiderHeadroom;
- (bool)shouldConstrainLayoutToBounds;
- (void)submit:(id /* block */)arg1;

@end
