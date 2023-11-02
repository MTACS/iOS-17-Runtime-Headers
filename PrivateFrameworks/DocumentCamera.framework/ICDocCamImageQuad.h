
@interface ICDocCamImageQuad : NSObject <ICDocCamImageQuad, NSSecureCoding> {
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
    struct CGPoint { 
        double x; 
        double y; 
    }  _topLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topRight;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } bottomLeft;
@property (nonatomic) struct CGPoint { double x1; double x2; } bottomRight;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) bool containsAngleOutOfValidThreshold;
@property (nonatomic, readonly) bool containsIntersectingLines;
@property (nonatomic, readonly) bool containsPointOutsideOfExtendedImageBounds;
@property (nonatomic, readonly) bool containsPointsLessThanDistanceThreshold;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isConvex;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) double mininumAllowedDistanceBetweenPoints;
@property (readonly) Class superclass;
@property (nonatomic) struct CGPoint { double x1; double x2; } topLeft;
@property (nonatomic) struct CGPoint { double x1; double x2; } topRight;

+ (id)quadFromCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)quadFromVNRectangle:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)addPointToQuadPoints:(struct CGPoint { double x1; double x2; })arg1;
- (void)applyOrientation:(long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)clampQuadToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)containsAngleOutOfValidThreshold;
- (bool)containsIntersectingLines;
- (bool)containsPointOutsideOfExtendedImageBounds;
- (bool)containsPointsLessThanDistanceThreshold;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)flipPointsWithSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)flippedQuadFromSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageQuadByScalingBy:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithBottomLeft:(struct CGPoint { double x1; double x2; })arg1 bottomRight:(struct CGPoint { double x1; double x2; })arg2 topLeft:(struct CGPoint { double x1; double x2; })arg3 topRight:(struct CGPoint { double x1; double x2; })arg4;
- (id)initWithCoder:(id)arg1;
- (id)intersectionOfLineFrom:(struct CGPoint { double x1; double x2; })arg1 to:(struct CGPoint { double x1; double x2; })arg2 withLineFrom:(struct CGPoint { double x1; double x2; })arg3 to:(struct CGPoint { double x1; double x2; })arg4;
- (bool)isConvex;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (double)mininumAllowedDistanceBetweenPoints;
- (id)normalizedQuadByConvertingFromView:(id)arg1 toView:(id)arg2 toViewSize:(struct CGSize { double x1; double x2; })arg3;
- (void)orientIfNecessary;
- (struct CGSize { double x1; double x2; })perspectiveCorrectedSize;
- (struct CGPoint { double x1; double x2; })pointRotatedClockwiseAroundOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (id)quadByConvertingFromView:(id)arg1 toView:(id)arg2 isNormalized:(bool)arg3;
- (void)removeOrientation:(long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)rotatePointsByOrientation:(long long)arg1;
- (void)rotatePointsClockwise;
- (void)rotatePointsRemovingOrientation:(long long)arg1;
- (void)setBottomLeft:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBottomRight:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTopLeft:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTopRight:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;

@end
