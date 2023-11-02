
@interface PIParallaxLayerStackRequest : NURenderRequest {
    NSCache * _cache;
    bool  _headroomBlurEnabled;
    long long  _layerStackMode;
    PFPosterOrientedLayout * _layout;
    <PISegmentationItem> * _segmentationItem;
    bool  _settlingEffectEnabled;
    PIParallaxStyle * _style;
}

@property (nonatomic, retain) NSCache *cache;
@property (nonatomic) bool headroomBlurEnabled;
@property (nonatomic) long long layerStackMode;
@property (nonatomic, retain) PFPosterOrientedLayout *layout;
@property (nonatomic, readonly) <PISegmentationItem> *segmentationItem;
@property (getter=isSettlingEffectEnabled, nonatomic) bool settlingEffectEnabled;
@property (nonatomic, readonly) bool shouldUseVideoFrame;
@property (nonatomic, retain) PIParallaxStyle *style;

- (void).cxx_destruct;
- (id)cache;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)headroomBlurEnabled;
- (id)initWithComposition:(id)arg1;
- (id)initWithSegmentationItem:(id)arg1;
- (bool)isSettlingEffectEnabled;
- (long long)layerStackMode;
- (id)layout;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)segmentationItem;
- (void)setCache:(id)arg1;
- (void)setHeadroomBlurEnabled:(bool)arg1;
- (void)setLayerStackMode:(long long)arg1;
- (void)setLayout:(id)arg1;
- (void)setSettlingEffectEnabled:(bool)arg1;
- (void)setStyle:(id)arg1;
- (bool)shouldUseVideoFrame;
- (id)style;
- (void)submit:(id /* block */)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
