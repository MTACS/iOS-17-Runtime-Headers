
@interface VNRectangleObservation : VNDetectedObjectObservation {
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomRight;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topRight;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomRight;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topRight;

// Image: /System/Library/Frameworks/Vision.framework/Vision

+ (bool)boundingBoxIsCalculatedProperty;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (id)observationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)rectangleObservationWithRequestRevision:(unsigned long long)arg1 topLeft:(struct CGPoint { double x1; double x2; })arg2 bottomLeft:(struct CGPoint { double x1; double x2; })arg3 bottomRight:(struct CGPoint { double x1; double x2; })arg4 topRight:(struct CGPoint { double x1; double x2; })arg5;
+ (id)rectangleObservationWithRequestRevision:(unsigned long long)arg1 topLeft:(struct CGPoint { double x1; double x2; })arg2 topRight:(struct CGPoint { double x1; double x2; })arg3 bottomRight:(struct CGPoint { double x1; double x2; })arg4 bottomLeft:(struct CGPoint { double x1; double x2; })arg5;
+ (bool)supportsSecureCoding;

- (void)_setQuadrilateralPointsFromBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (id)debugQuickLookObject;
- (void)encodeWithCoder:(id)arg1;
- (void)getTopLeftPoint:(struct CGPoint { double x1; double x2; }*)arg1 topRightPoint:(struct CGPoint { double x1; double x2; }*)arg2 bottomRightPoint:(struct CGPoint { double x1; double x2; }*)arg3 bottomLeftPoint:(struct CGPoint { double x1; double x2; }*)arg4 inTopLeftOrigin:(bool)arg5 orientation:(unsigned int)arg6;
- (unsigned long long)hash;
- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 topLeft:(struct CGPoint { double x1; double x2; })arg2 topRight:(struct CGPoint { double x1; double x2; })arg3 bottomRight:(struct CGPoint { double x1; double x2; })arg4 bottomLeft:(struct CGPoint { double x1; double x2; })arg5;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 topLeft:(struct CGPoint { double x1; double x2; })arg2 topRight:(struct CGPoint { double x1; double x2; })arg3 bottomRight:(struct CGPoint { double x1; double x2; })arg4 bottomLeft:(struct CGPoint { double x1; double x2; })arg5 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6;
- (id)initWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithRequestRevision:(unsigned long long)arg1 topLeft:(struct CGPoint { double x1; double x2; })arg2 bottomLeft:(struct CGPoint { double x1; double x2; })arg3 bottomRight:(struct CGPoint { double x1; double x2; })arg4 topRight:(struct CGPoint { double x1; double x2; })arg5;
- (id)initWithRequestRevision:(unsigned long long)arg1 topLeft:(struct CGPoint { double x1; double x2; })arg2 topRight:(struct CGPoint { double x1; double x2; })arg3 bottomRight:(struct CGPoint { double x1; double x2; })arg4 bottomLeft:(struct CGPoint { double x1; double x2; })arg5;
- (id)initWithTopLeft:(struct CGPoint { double x1; double x2; })arg1 bottomLeft:(struct CGPoint { double x1; double x2; })arg2 bottomRight:(struct CGPoint { double x1; double x2; })arg3 topRight:(struct CGPoint { double x1; double x2; })arg4;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;
- (id)vn_cloneObject;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (id)summaryDescription;
- (id)vkQuad;
- (id)vk_quadConvertedToView:(id)arg1 withContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
