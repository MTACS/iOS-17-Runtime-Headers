
@interface PIVideoReframeNode : NURenderNode {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameDuration;
    <NUVideoProperties> * _inputVideoProperties;
    PIReframeKeyframeSequence * _keyframeSequence;
    bool  _shouldApplyWatermark;
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _stabCropRect;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } frameDuration;
@property (nonatomic, retain) <NUVideoProperties> *inputVideoProperties;
@property (nonatomic, retain) PIReframeKeyframeSequence *keyframeSequence;
@property (nonatomic) bool shouldApplyWatermark;
@property (nonatomic) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } stabCropRect;

- (void).cxx_destruct;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_evaluateVideoProperties:(out id*)arg1;
- (id)_stabilizeImage:(id)arg1 cleanRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg4 geometry:(id)arg5;
- (bool)canPropagateOriginalLivePhotoMetadataTrack;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (id)initWithKeyframes:(id)arg1 stabCropRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 input:(id)arg3;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)inputVideoProperties;
- (id)keyframeSequence;
- (bool)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (void)setFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setInputVideoProperties:(id)arg1;
- (void)setKeyframeSequence:(id)arg1;
- (void)setShouldApplyWatermark:(bool)arg1;
- (void)setStabCropRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (bool)shouldApplyWatermark;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })stabCropRect;

@end
