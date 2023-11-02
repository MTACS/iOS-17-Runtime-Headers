
@interface CRImageSpaceQuad : NSObject <CRCodable, CRQuad> {
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

@property (nonatomic, readonly) double area;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) double baselineAngle;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomRight;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } midPoint;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topRight;

+ (bool)supportsSecureCoding;

- (id)applyHomographyTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 downscaleRate:(float)arg2;
- (double)area;
- (double)aspectRatio;
- (double)baselineAngle;
- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (double)boundingBoxIOUWithQuad:(id)arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cornerAngles;
- (id)crCodableDataRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)entirelyContainsQuad:(id)arg1;
- (bool)hasIntersectingEdges;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })homographyFromSelfToQuad:(id)arg1;
- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCRCodableDataRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopLeft:(struct CGPoint { double x1; double x2; })arg1 topRight:(struct CGPoint { double x1; double x2; })arg2 bottomRight:(struct CGPoint { double x1; double x2; })arg3 bottomLeft:(struct CGPoint { double x1; double x2; })arg4;
- (bool)intersectsImageMargin:(double)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)intersectsQuad:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })midPoint;
- (id)normalizedQuadForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (double)orthogonalityScore;
- (bool)overlapsQuad:(id)arg1;
- (id)rotated180;
- (id)rotatedAroundPoint:(struct CGPoint { double x1; double x2; })arg1 angle:(float)arg2;
- (id)scaledBy:(struct CGPoint { double x1; double x2; })arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (double)shortestDistanceFromCornersOfQuad:(id)arg1;
- (double)shortestDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (double)squaredDistanceFromCorrespondingCornersOfQuad:(id)arg1;
- (double)squaredDistanceMaxRatioFromCorrespondingCornersOfQuad:(id)arg1;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;
- (id)unionWithQuad:(id)arg1 baselineAngle:(float)arg2;

@end
