
@interface VKQuad : NSObject <NSCopying, NSSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomRight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    unsigned long long  _layoutDirection;
    UIBezierPath * _path;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topRight;
}

@property (nonatomic, readonly) NSArray *allPoints;
@property (nonatomic, readonly) double area;
@property (nonatomic, readonly) double averagedAngleFromBottomAndTopEdges;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomRight;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) double boundingBoxArea;
@property (nonatomic, readonly) bool containsIntersectingLines;
@property (nonatomic) unsigned long long layoutDirection;
@property (nonatomic, readonly) double maxHeight;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } minimumBoundingRectWithoutRotation;
@property (nonatomic, readonly) UIBezierPath *path;
@property (nonatomic, readonly) VKQuad *quadByAdjustingOrientation;
@property (nonatomic, readonly) struct VKQuadSideLength { double x1; double x2; double x3; double x4; } sideLength;
@property (nonatomic, readonly) NSString *summaryDescription;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topRight;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } vertexCentroid;

+ (id)quadFromCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)quadFromUnionOfQuads:(id)arg1 baselineAngle:(double)arg2;
+ (bool)supportsSecureCoding;
+ (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transformToConvertLayer:(id)arg1 intoQuad:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
+ (struct CGPoint { double x1; double x2; })vertexCentroidFromQuads:(id)arg1;

- (void).cxx_destruct;
- (id)allPoints;
- (double)area;
- (double)averagedAngleFromBottomAndTopEdges;
- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (double)boundingBoxArea;
- (void)calcluateBoundingBox;
- (bool)containsIntersectingLines;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distanceFromLine:(struct CGPoint { double x1; double x2; }*)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBottomLeft:(struct CGPoint { double x1; double x2; })arg1 bottomRight:(struct CGPoint { double x1; double x2; })arg2 topLeft:(struct CGPoint { double x1; double x2; })arg3 topRight:(struct CGPoint { double x1; double x2; })arg4;
- (id)initWithCRNormalizedQuad:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPoints:(id)arg1;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTopLeft:(struct CGPoint { double x1; double x2; })arg1 topRight:(struct CGPoint { double x1; double x2; })arg2 bottomLeft:(struct CGPoint { double x1; double x2; })arg3 bottomRight:(struct CGPoint { double x1; double x2; })arg4;
- (id)initWithTopLeft:(struct CGPoint { double x1; double x2; })arg1 topRight:(struct CGPoint { double x1; double x2; })arg2 bottomRight:(struct CGPoint { double x1; double x2; })arg3 bottomLeft:(struct CGPoint { double x1; double x2; })arg4;
- (id)intersectionOfLineFrom:(struct CGPoint { double x1; double x2; })arg1 to:(struct CGPoint { double x1; double x2; })arg2 withLineFrom:(struct CGPoint { double x1; double x2; })arg3 to:(struct CGPoint { double x1; double x2; })arg4;
- (bool)intersectsQuad:(id)arg1;
- (bool)isCompletelyInsideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)layoutDirection;
- (double)maxHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minimumBoundingRectWithoutRotation;
- (double)mininumDistanceToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)normalizedQuadByConvertingFromView:(id)arg1 toView:(id)arg2 toViewSize:(struct CGSize { double x1; double x2; })arg3;
- (id)normalizedQuadFromView:(id)arg1;
- (id)path;
- (double)pointInsideValueForStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 testPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)quadByAdjustingOrientation;
- (id)quadByConvertingFromNormalizedRectToView:(id)arg1 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)quadByConvertingFromView:(id)arg1 toView:(id)arg2 isNormalized:(bool)arg3;
- (id)quadByFlippingPointsWithSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)quadFromAddingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)quadFromRotatingAroundCentroidWithAngle:(double)arg1;
- (id)quadFromRotatingAroundOriginWithAngle:(double)arg1;
- (id)quadFromSubtractingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)quadFromUnionWithQuad:(id)arg1;
- (id)quadMultipliedBySize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })rotationTransformAndBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (void)setLayoutDirection:(unsigned long long)arg1;
- (struct VKQuadSideLength { double x1; double x2; double x3; double x4; })sideLength;
- (id)subquadFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)summaryDescription;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;
- (struct CGPoint { double x1; double x2; })vertexCentroid;

@end
