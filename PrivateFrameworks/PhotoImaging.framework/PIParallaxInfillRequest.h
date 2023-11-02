
@interface PIParallaxInfillRequest : NURenderRequest {
    NUColorSpace * _colorSpace;
    NUPixelFormat * _pixelFormat;
    <NUScalePolicy> * _scalePolicy;
    <NUImageBuffer> * _segmentationMatte;
    bool  _shouldInfillForeground;
}

@property (nonatomic, retain) NUColorSpace *colorSpace;
@property (nonatomic, retain) NUPixelFormat *pixelFormat;
@property (nonatomic, retain) <NUScalePolicy> *scalePolicy;
@property (nonatomic, retain) <NUImageBuffer> *segmentationMatte;
@property (nonatomic) bool shouldInfillForeground;

- (void).cxx_destruct;
- (id)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)pixelFormat;
- (id)scalePolicy;
- (id)segmentationMatte;
- (void)setColorSpace:(id)arg1;
- (void)setPixelFormat:(id)arg1;
- (void)setScalePolicy:(id)arg1;
- (void)setSegmentationMatte:(id)arg1;
- (void)setShouldInfillForeground:(bool)arg1;
- (bool)shouldInfillForeground;
- (void)submit:(id /* block */)arg1;

@end
