
@interface PUWallpaperPosterLegacyAsset : NSObject <PFParallaxAsset> {
    struct CGImage { } * _proxyImage;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } acceptableCropRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *faceRegions;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } gazeAreaRect;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localIdentifier;
@property (nonatomic, readonly) NSArray *petRegions;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } preferredCropRect;
@property (nonatomic, readonly) struct CGImage { }*proxyImage;
@property (nonatomic, readonly) NSURL *segmentationResourceURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsSegmentationResourceCaching;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })acceptableCropRect;
- (void)cancelMotionScoreRequest:(int)arg1;
- (void)cancelParallaxResourceRequest:(int)arg1;
- (void)cancelPetsRegionsRequest:(int)arg1;
- (bool)clearSegmentationResourceCacheWithError:(id*)arg1;
- (id)faceRegions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })gazeAreaRect;
- (id)initWithProxyImage:(struct CGImage { }*)arg1;
- (int)loadMotionScore:(id /* block */)arg1;
- (int)loadParallaxResource:(long long)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)loadPetsRegions:(id /* block */)arg1;
- (id)localIdentifier;
- (id)petRegions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredCropRect;
- (struct CGImage { }*)proxyImage;
- (id)segmentationResourceURL;
- (bool)supportsSegmentationResourceCaching;
- (void)updateSegmentationResource:(id /* block */)arg1;

@end
