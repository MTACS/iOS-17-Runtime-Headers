
@interface PIParallaxAsset : NSObject <PFParallaxAsset> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _acceptableRect;
    NSURL * _cacheURL;
    NSArray * _faceRegions;
    NSURL * _fileURL;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _gazeAreaRect;
    bool  _isInCloud;
    float  _motionScore;
    NSArray * _petRegions;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _preferredRect;
    NSURL * _videoComplementURL;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } acceptableCropRect;
@property (nonatomic, retain) NSURL *cacheURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *faceRegions;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } gazeAreaRect;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInCloud;
@property (nonatomic, readonly, copy) NSString *localIdentifier;
@property (nonatomic, readonly) NSArray *petRegions;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } preferredCropRect;
@property (nonatomic, readonly) NSURL *segmentationResourceURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsSegmentationResourceCaching;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })acceptableCropRect;
- (id)cacheURL;
- (void)cancelMotionScoreRequest:(int)arg1;
- (void)cancelParallaxResourceRequest:(int)arg1;
- (void)cancelPetsRegionsRequest:(int)arg1;
- (bool)clearSegmentationResourceCacheWithError:(id*)arg1;
- (id)description;
- (id)faceRegions;
- (id)fileURL;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })gazeAreaRect;
- (id)initWithFileURL:(id)arg1;
- (bool)isInCloud;
- (int)loadMotionScore:(id /* block */)arg1;
- (int)loadParallaxResource:(long long)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)loadPetsRegions:(id /* block */)arg1;
- (id)localIdentifier;
- (id)petRegions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredCropRect;
- (id)segmentationResourceURL;
- (void)setCacheURL:(id)arg1;
- (void)setIsInCloud:(bool)arg1;
- (bool)supportsSegmentationResourceCaching;
- (void)updateSegmentationResource:(id /* block */)arg1;

@end
