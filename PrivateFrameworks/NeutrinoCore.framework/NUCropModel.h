
@interface NUCropModel : NSObject <NSCopying> {
    struct { 
        long long width; 
        long long height; 
    }  _aspectRatio;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    double  _fovRadians;
    unsigned long long  _hitVertexID;
    void _imageCenter;
    bool  _isAutoCrop;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _masterImageRect;
    double  _pitchRadians;
    double  _rollRadians;
    double  _yawRadians;
}

@property (nonatomic) struct { long long x1; long long x2; } aspectRatio;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, readonly) double fovRadians;
@property (readonly) bool hasCrop;
@property (readonly) unsigned long long hitVertexID;
@property (nonatomic) bool isAutoCrop;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } masterImageRect;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } masterImageSize;
@property (nonatomic, readonly) double pitchDegreeUI;
@property (nonatomic) double pitchRadians;
@property (nonatomic, readonly) double rollDegreeUI;
@property (nonatomic) double rollRadians;
@property (nonatomic, readonly) double yawDegreeUI;
@property (nonatomic) double yawRadians;

+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_imageTransformFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 imageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inputExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 geometryTransform:(id)arg3;
+ (double)defaultFocalLength;
+ (struct { long long x1; long long x2; })freeFormAspectRatio;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_anchorAlignedRectFromCandidate:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAnchor:(struct CGPoint { double x1; double x2; })arg2;
- (double)_currentAspectAsDouble:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { long long x1; long long x2; })_currentAspectRatio:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_debugPrintHitMask;
- (void)_debugPrintHitMask:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultCropRect;
- (void)_defaultImageCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_expandedCropRectForZoom:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 candidateRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct Quad2d { })_getBoundingQuad;
- (struct Quad2d { })_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3;
- (struct Quad2d { })_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 imageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 withExpansionTol:(double)arg4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 withExpansionTol:(double)arg4 imageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (bool)_hasDefaultValues;
- (unsigned long long)_hitMaskFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)_hitMaskFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTol:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_integralCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 straightenAngle:(double)arg2 anchorPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)_setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 anchor:(struct CGPoint { double x1; double x2; })arg2;
- (void)_setCropRectWithConstantSize:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setToDefaultValues;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_widestCropRect;
- (struct { long long x1; long long x2; })aspectRatio;
- (bool)aspectRatioIsFreeForm;
- (bool)aspectRatioIsOriginal;
- (bool)canGrowCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 constrainWithAnchorPoint:(struct CGPoint { double x1; double x2; })arg2 strict:(bool)arg3 withTol:(double)arg4;
- (unsigned long long)constrainedMoveCropRectBy:(struct CGVector { double x1; double x2; })arg1;
- (unsigned long long)constrainedMoveCropRectBy:(struct CGVector { double x1; double x2; })arg1 strict:(bool)arg2;
- (unsigned long long)constrainedMoveCropRectBy:(struct CGVector { double x1; double x2; })arg1 strict:(bool)arg2 startRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)copyWithMasterImageSize:(struct CGSize { double x1; double x2; })arg1 fovRadians:(double)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)description;
- (double)fovRadians;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 newCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 pitch:(double)arg3 yaw:(double)arg4 roll:(double)arg5 constrainWithAnchorPoint:(struct CGPoint { double x1; double x2; })arg6 strict:(bool)arg7 aspectRatioIsFreeForm:(bool)arg8 hitVertexId:(unsigned long long*)arg9;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getCropRectThatCompletelyContainsMasterImageForPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3;
- (bool)hasCrop;
- (unsigned long long)hash;
- (unsigned long long)hitVertexID;
- (bool)imageContainsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTol:(double)arg2;
- (id)init;
- (id)initWithMasterImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMasterImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 stitchedImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithMasterImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithMasterImageSize:(struct CGSize { double x1; double x2; })arg1 fovRadians:(double)arg2;
- (id)initWithMasterImageSize:(struct CGSize { double x1; double x2; })arg1 stitchedImageSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })integralCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAutoCrop;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCropModel:(id)arg1;
- (void)makeCurrentAspectRatioFreeForm;
- (void)makeCurrentFreeFormAspectFixed;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })masterImageRect;
- (struct CGSize { double x1; double x2; })masterImageSize;
- (struct { long long x1; long long x2; })originalAspectRatio;
- (double)pitchDegreeUI;
- (double)pitchRadians;
- (void)reset;
- (double)rollDegreeUI;
- (double)rollRadians;
- (void)setAspectRatio:(struct { long long x1; long long x2; })arg1;
- (unsigned long long)setAspectRatio:(struct { long long x1; long long x2; })arg1 constrainCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withTargetArea:(double)arg3;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 constrainWithAnchorPoint:(struct CGPoint { double x1; double x2; })arg2;
- (unsigned long long)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 newCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 constrainWithAnchorPoint:(struct CGPoint { double x1; double x2; })arg3;
- (unsigned long long)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 newCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 constrainWithAnchorPoint:(struct CGPoint { double x1; double x2; })arg3 strict:(bool)arg4;
- (unsigned long long)setForZoomCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 newCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setIsAutoCrop:(bool)arg1;
- (unsigned long long)setPitchAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2;
- (unsigned long long)setPitchAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 startAngle:(double)arg4;
- (void)setPitchRadians:(double)arg1;
- (unsigned long long)setRollAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2;
- (unsigned long long)setRollAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 startAngle:(double)arg4;
- (void)setRollRadians:(double)arg1;
- (unsigned long long)setYawAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2;
- (unsigned long long)setYawAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 startAngle:(double)arg4;
- (void)setYawRadians:(double)arg1;
- (double)yawDegreeUI;
- (double)yawRadians;

@end
