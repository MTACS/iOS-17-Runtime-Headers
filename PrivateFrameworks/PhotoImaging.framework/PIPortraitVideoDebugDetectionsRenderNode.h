
@interface PIPortraitVideoDebugDetectionsRenderNode : NURenderNode {
    PTCinematographyScript * _cinematographyScript;
    NSCache * _labelImageCache;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _renderTime;
}

@property (nonatomic, retain) PTCinematographyScript *cinematographyScript;
@property (nonatomic, retain) NSCache *labelImageCache;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } renderTime;

- (void).cxx_destruct;
- (id)_evaluateImage:(out id*)arg1;
- (id)_imageByAddingDetection:(id)arg1 toImage:(id)arg2 isPrimary:(bool)arg3 canvasSize:(struct CGSize { double x1; double x2; })arg4 inverseOrientation:(long long)arg5;
- (id)cinematographyScript;
- (id)initWithInput:(id)arg1 assetURL:(id)arg2 cinematographyState:(id)arg3 monochrome:(bool)arg4;
- (id)labelImageCache;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })renderTime;
- (bool)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (void)setCinematographyScript:(id)arg1;
- (void)setLabelImageCache:(id)arg1;
- (void)setRenderTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
