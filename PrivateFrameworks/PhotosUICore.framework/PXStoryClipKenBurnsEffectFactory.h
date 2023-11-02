
@interface PXStoryClipKenBurnsEffectFactory : NSObject {
    long long  _assetCapacity;
    struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; } * _assetContentInfos;
    long long * _assetPlaybackStyles;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    long long * _clipAssetIndexes;
    struct CGSize { double x1; double x2; } * _clipAssetSizes;
    long long  _clipCapacity;
    <PXStoryClipComposition> * _clipComposition;
    long long  _clipCount;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _clipFrames;
    struct UIEdgeInsets { double x1; double x2; double x3; double x4; } * _clipSafeAreaInsets;
    struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } * _clipSourceTransforms;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _clipSuggestedCrops;
    struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } * _clipTargetTransforms;
    <PXStoryDisplayAssetCroppingContext> * _croppingContext;
    unsigned long long  _croppingOptions;
    <PXDisplayAssetFetchResult> * _displayAssets;
    long long  _numberOfParameters;
    bool  _shouldFitSourceAndTargetIndependently;
    <PXStoryTimelineSpec> * _spec;
}

@property (nonatomic, readonly) <PXStoryClipComposition> *clipComposition;
@property (nonatomic, readonly) <PXStoryDisplayAssetCroppingContext> *croppingContext;
@property (nonatomic, readonly) unsigned long long croppingOptions;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *displayAssets;
@property (nonatomic, readonly) long long numberOfParameters;
@property (nonatomic, readonly) <PXStoryTimelineSpec> *spec;

+ (void)factoryForSpec:(id)arg1 clipComposition:(id)arg2 displayAssets:(id)arg3 croppingContext:(id)arg4 croppingOptions:(unsigned long long)arg5 assetContentInfos:(const struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)arg6 playbackStyles:(const long long*)arg7 separatorEffectParameters:(const struct { unsigned int x1; double x2; double x3; }*)arg8 handler:(id /* block */)arg9;
+ (void)genericFactoryForSpec:(id)arg1 assetContentSize:(struct CGSize { double x1; double x2; })arg2 handler:(id /* block */)arg3;
+ (void)releaseCachedResources;
+ (id)reusableInstances;

- (void).cxx_destruct;
- (void)_configureClipAtIndex:(long long)arg1 forPanWithCameraMovingTowardsEdge:(unsigned int)arg2 distance:(double)arg3;
- (void)_configureWithSpec:(id)arg1 clipComposition:(id)arg2 displayAssets:(id)arg3 croppingContext:(id)arg4 croppingOptions:(unsigned long long)arg5 assetContentInfos:(const struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)arg6 playbackStyles:(const long long*)arg7 separatorEffectParameters:(const struct { unsigned int x1; double x2; double x3; }*)arg8;
- (void)_getParameters:(out struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg1 forConfiguration:(id /* block */)arg2;
- (id)_init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })assetRectForClipIndex:(long long)arg1;
- (id)clipComposition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipFrameForClipIndex:(long long)arg1;
- (id)croppingContext;
- (unsigned long long)croppingOptions;
- (void)dealloc;
- (id)displayAssets;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg1 forOppositePansWithDistance:(double)arg2;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg1 forPanWithCameraMovingTowardsEdge:(unsigned int)arg2 distance:(double)arg3;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg1 forParallelPansWithDistance:(double)arg2;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg1 forRotationWithAngle:(double)arg2 scale:(double)arg3;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg1 forRotationWithAngle:(double)arg2 scale:(double)arg3 relativeTransformOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg1 forSplitAssetOppositePansWithDistance:(double)arg2;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg1 forVerticallyPanningPreferredRectMovingTowardsVerticalEdge:(unsigned int)arg2;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg1 forZoomWithScale:(double)arg2;
- (void)getParameters:(out struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg1 forZoomWithScale:(double)arg2 relativeTransformOrigin:(struct CGPoint { double x1; double x2; })arg3;
- (void)getParametersForNoEffect:(out struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; }*)arg1;
- (id)init;
- (long long)numberOfParameters;
- (id)spec;

@end
