
@interface _PIParallaxColorAnalysisJob : NURenderJob {
    long long  _alphaCount;
    NSArray * _dominantColors;
    NSArray * _dominantGrays;
    NSArray * _dominantHues;
    CIImage * _hueChromaImage;
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _imageRect;
    double  _medianLuminance;
    NSMutableArray * _renderResources;
    NUPurgeableStoragePool * _storagePool;
}

@property (nonatomic) long long alphaCount;
@property (nonatomic, readonly) PIParallaxColorAnalysisRequest *colorAnalysisRequest;
@property (nonatomic, copy) NSArray *dominantColors;
@property (nonatomic, copy) NSArray *dominantGrays;
@property (nonatomic, copy) NSArray *dominantHues;
@property (nonatomic, retain) CIImage *hueChromaImage;
@property (nonatomic) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } imageRect;
@property (nonatomic) double medianLuminance;

- (void).cxx_destruct;
- (id)_beginRenderNormalizedHueChromaImage:(id)arg1 targetGray:(double)arg2 grayRange:(double)arg3 chromaMax:(double)arg4 error:(out id*)arg5;
- (id)_beginRenderNormalizedHueChromaImage:(id)arg1 targetHue:(double)arg2 hueRange:(double)arg3 chromaMin:(double)arg4 error:(out id*)arg5;
- (id)_beginRenderingImage:(id)arg1 colorSpace:(id)arg2 format:(id)arg3 error:(out id*)arg4;
- (bool)_computeAllHistograms:(out id*)arg1;
- (void)_purgeRenderResources;
- (bool)_waitForRenderResources:(out id*)arg1;
- (long long)alphaCount;
- (void)cleanUp;
- (id)colorAnalysisRequest;
- (bool)complete:(out id*)arg1;
- (id)dominantColors;
- (id)dominantGrays;
- (id)dominantHues;
- (id)hueChromaImage;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })imageRect;
- (id)initWithParallaxColorAnalysisRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (double)medianLuminance;
- (bool)prepare:(out id*)arg1;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (void)setAlphaCount:(long long)arg1;
- (void)setDominantColors:(id)arg1;
- (void)setDominantGrays:(id)arg1;
- (void)setDominantHues:(id)arg1;
- (void)setHueChromaImage:(id)arg1;
- (void)setImageRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)setMedianLuminance:(double)arg1;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;
- (bool)wantsRenderStage;

@end
