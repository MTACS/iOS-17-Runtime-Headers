
@interface NUCropNode : NUTransformNode {
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _cropRect;
    bool  _resetCleanAperture;
    NUImageTransformAffine * _transform;
}

@property struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } cropRect;
@property (readonly) bool resetCleanAperture;
@property (retain) NUImageTransformAffine *transform;

- (void).cxx_destruct;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_evaluateVideoProperties:(out id*)arg1;
- (id)_transformWithError:(out id*)arg1;
- (bool)canPropagateOriginalAuxiliaryData;
- (bool)canPropagateOriginalLivePhotoMetadataTrack;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })cropRect;
- (id)debugQuickLookObject;
- (id)initWithRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 input:(id)arg2;
- (id)initWithRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 input:(id)arg2 resetCleanAperture:(bool)arg3 settings:(id)arg4;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (bool)resetCleanAperture;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (struct CGPoint { double x1; double x2; })scaleCropOriginForOriginalVideoSize:(struct CGSize { double x1; double x2; })arg1 originalCleanAperture:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 renderScale:(double)arg3 inputExtent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg4;
- (bool)scaledCropOrigin:(struct CGPoint { double x1; double x2; }*)arg1 error:(out id*)arg2;
- (void)setCropRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)setTransform:(id)arg1;
- (id)transform;
- (id)transformAffine;

@end
