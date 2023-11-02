
@interface BWCoreImageFilterRendererParameters : NSObject <BWFilterRendererParameters> {
    NSArray * _filters;
    CIFilter * _originalOutputFilter;
    bool  _requiresDepthMap;
    bool  _requiresFaceLandmarks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float interpolationFractionComplete;
@property (nonatomic, retain) CIFilter *originalOutputFilter;
@property (nonatomic, readonly) bool requiresDepthMap;
@property (nonatomic, readonly) bool requiresFaceLandmarks;
@property (readonly) Class superclass;
@property (nonatomic, readonly) short type;

+ (bool)containsFilterRequiringFaceLandmarks:(id)arg1;
+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)depthTypeForFilter:(id)arg1;
- (id)filters;
- (id)initWithFilters:(id)arg1 originalOutputFilter:(id)arg2;
- (float)interpolationFractionComplete;
- (id)originalOutputFilter;
- (int)prepareForRenderingWithInputVideoFormat:(id)arg1;
- (bool)requiresDepthMap;
- (bool)requiresFaceLandmarks;
- (void)setFilters:(id)arg1;
- (void)setOriginalOutputFilter:(id)arg1;
- (short)type;
- (void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3;

@end
