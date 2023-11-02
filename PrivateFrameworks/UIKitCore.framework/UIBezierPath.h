
@interface UIBezierPath : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _cornerMask;
    double  _cornerRadius;
    double  _flatness;
    bool  _hasContinuousCorners;
    struct CGPath { } * _immutablePath;
    bool  _immutablePathIsValid;
    bool  _isRoundedRect;
    int  _lineCapStyle;
    double * _lineDashPattern;
    unsigned long long  _lineDashPatternCount;
    double  _lineDashPhase;
    int  _lineJoinStyle;
    double  _lineWidth;
    double  _miterLimit;
    struct CGPath { } * _path;
    bool  _usesEvenOddFillRule;
}

@property (nonatomic) struct CGPath { }*CGPath;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } currentPoint;
@property (getter=isEmpty, readonly) bool empty;
@property (nonatomic) double flatness;
@property (nonatomic) int lineCapStyle;
@property (nonatomic) int lineJoinStyle;
@property (nonatomic) double lineWidth;
@property (nonatomic) double miterLimit;
@property (nonatomic) bool usesEvenOddFillRule;
@property (nonatomic, readonly) struct CGPath { }*vk_CGPath;
@property (nonatomic, readonly) NSMutableArray *vk_allPoints;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } vk_centroid;
@property (nonatomic, readonly) double vk_lengthIgnoringCurves;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_bezierPathWithArcRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;
+ (id)_bezierPathWithPillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;
+ (id)_bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadius:(double)arg3;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadii:(id)arg3 segments:(int)arg4 smoothPillShapes:(bool)arg5;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(struct CGSize { double x1; double x2; })arg3 segments:(int)arg4;
+ (id)_roundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 segments:(int)arg4;
+ (id)_roundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 segments:(int)arg4 legacyCorners:(bool)arg5;
+ (id)bezierPath;
+ (id)bezierPathWithArcCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(bool)arg5;
+ (id)bezierPathWithCGPath:(struct CGPath { }*)arg1;
+ (id)bezierPathWithOvalInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadii:(struct CGSize { double x1; double x2; })arg3;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(unsigned long long)arg2 withCornerRadii:(id)arg3;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(unsigned long long)arg2 withCornerRadius:(double)arg3;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedEdges:(unsigned long long)arg2;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTopCornerRadius:(double)arg2 withBottomCornerRadius:(double)arg3;
+ (id)shadowBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedEdges:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (struct CGPath { }*)CGPath;
- (void)_addRoundedCornerWithTrueCorner:(struct CGPoint { double x1; double x2; })arg1 radius:(struct CGSize { double x1; double x2; })arg2 corner:(unsigned long long)arg3 clockwise:(bool)arg4;
- (void)_addRoundedCornerWithTrueCorner:(struct CGPoint { double x1; double x2; })arg1 radius:(struct CGSize { double x1; double x2; })arg2 corner:(unsigned long long)arg3 clockwise:(bool)arg4 leadInIsContinuous:(bool)arg5 leadOutIsContinuous:(bool)arg6;
- (id)_bezierPathConvertedFromCoordinateSpace:(id)arg1 toCoordinateSpace:(id)arg2;
- (unsigned long long)_cornerMask;
- (double)_cornerRadius;
- (struct CGPath { }*)_createMutablePathByDecodingData:(id)arg1;
- (bool)_hasContinuousCorners;
- (id)_initWithCGMutablePath:(struct CGPath { }*)arg1;
- (void)_invalidatePathMetadata;
- (void)_invalidatePathMetadataIncludingCornerRadius:(bool)arg1;
- (bool)_isRoundedRect;
- (struct CGPath { }*)_mutablePath;
- (id)_objcCodeDescription;
- (struct CGPath { }*)_pathRef;
- (void)addArcWithCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(bool)arg5;
- (void)addClip;
- (void)addCurveToPoint:(struct CGPoint { double x1; double x2; })arg1 controlPoint1:(struct CGPoint { double x1; double x2; })arg2 controlPoint2:(struct CGPoint { double x1; double x2; })arg3;
- (void)addLineToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)addQuadCurveToPoint:(struct CGPoint { double x1; double x2; })arg1 controlPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)appendBezierPath:(id)arg1;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(bool)arg5;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)appendBezierPathWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)appendPath:(id)arg1;
- (void)applyTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)bezierPathByReversingPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)clip;
- (void)closePath;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })currentPoint;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)fill;
- (void)fillWithBlendMode:(int)arg1 alpha:(double)arg2;
- (double)flatness;
- (void)getLineDash:(double*)arg1 count:(long long*)arg2 phase:(double*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (int)lineCapStyle;
- (int)lineJoinStyle;
- (void)lineToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)lineWidth;
- (double)miterLimit;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)removeAllPoints;
- (void)setCGPath:(struct CGPath { }*)arg1;
- (void)setFlatness:(double)arg1;
- (void)setLineCapStyle:(int)arg1;
- (void)setLineDash:(const double*)arg1 count:(long long)arg2 phase:(double)arg3;
- (void)setLineJoinStyle:(int)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setUsesEvenOddFillRule:(bool)arg1;
- (void)stroke;
- (void)strokeWithBlendMode:(int)arg1 alpha:(double)arg2;
- (bool)usesEvenOddFillRule;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

- (struct CGPath { }*)PK_CGPath;

// Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI

- (id)initWithArcRoundedRectForSwiftUI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;

// Image: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction

+ (id)bezierPathForFingerShape:(unsigned long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 curveOnly:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (void)akAppendPath:(id)arg1;
- (struct CGPath { }*)newCGPathForPlatformBezierPath;

// Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI

- (void)bkui_bezierPathAddRoundedCorner:(unsigned long long)arg1 withRadius:(double)arg2 followingAngle:(double)arg3;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)hk_applyBlock:(id /* block */)arg1;
- (id)hk_firstPoint;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadii:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg2;
+ (id)px_bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2 continuousCorners:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

+ (id)sx_bezierPathWithNonContinuousRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadius:(double)arg3;
+ (id)sx_bezierPathWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 continuousCorners:(bool)arg4;

- (id)TSDBezierPath;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

+ (id)ts_bezierPathWithPillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;

// Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI

+ (id)_bezierPathRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 topLeftRadius:(double)arg2 topRightRadius:(double)arg3 bottomRightRadius:(double)arg4 bottomLeftRadius:(double)arg5;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

+ (struct CGPath { }*)_cgPathFromClipperPath:(void*)arg1;
+ (void)_processPointsForNarrowAngles:(id)arg1;
+ (void)_processPointsForRounding:(id)arg1 withRadius:(double)arg2;
+ (id)mapPaths:(id)arg1 toQuads:(id)arg2;
+ (double)radiusForQuads:(id)arg1 radiusRatio:(double)arg2;
+ (id)vk_allPointsFromCGPath:(struct CGPath { }*)arg1;
+ (struct CGPoint { double x1; double x2; })vk_calculateCenterForPoints:(struct CGPoint { double x1; double x2; })arg1 p2:(struct CGPoint { double x1; double x2; })arg2 p3:(struct CGPoint { double x1; double x2; })arg3 radius:(double)arg4;
+ (bool)vk_cgPathcontainsAnyCurveToPoints:(struct CGPath { }*)arg1;
+ (double)vk_clampedRadius:(double)arg1 p1:(struct CGPoint { double x1; double x2; })arg2 p2:(struct CGPoint { double x1; double x2; })arg3 p3:(struct CGPoint { double x1; double x2; })arg4;
+ (id)vk_groupAndRoundPaths:(id)arg1 radius:(double)arg2 offset:(double)arg3;
+ (struct CGPath { }*)vk_newRoundedPathWithRadius:(double)arg1 points:(id)arg2;
+ (id)vk_pathFromCGPath:(struct CGPath { }*)arg1;
+ (struct CGPoint { double x1; double x2; })vk_projectPoint:(struct CGPoint { double x1; double x2; })arg1 lineStart:(struct CGPoint { double x1; double x2; })arg2 lineEnd:(struct CGPoint { double x1; double x2; })arg3;
+ (id)vk_roundAndGroupNormalizedQuadsForHighlight:(id)arg1 aspectRatio:(double)arg2 expansionScale:(double)arg3 radiusToAvgHeightRatio:(double)arg4;
+ (id)vk_shiftLinePerpendicularlyFromPoint:(struct CGPoint { double x1; double x2; })arg1 to:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3;
+ (double)vk_signForRadiusWithVectorStart:(struct CGPoint { double x1; double x2; })arg1 end:(struct CGPoint { double x1; double x2; })arg2 otherPoint:(struct CGPoint { double x1; double x2; })arg3;
+ (id)vk_subpathArrayFromCGPath:(struct CGPath { }*)arg1;

- (id)_vk_flattenWithPath:(id)arg1 clipType:(int)arg2;
- (id)debugQuickLookObject;
- (struct CGPath { }*)vk_CGPath;
- (void)vk_addCurveToPoint:(struct CGPoint { double x1; double x2; })arg1 controlPoint1:(struct CGPoint { double x1; double x2; })arg2 controlPoint2:(struct CGPoint { double x1; double x2; })arg3;
- (void)vk_addLineToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)vk_allPoints;
- (void)vk_appendBezierPath:(id)arg1;
- (void)vk_appendRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)vk_applyTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGPoint { double x1; double x2; })vk_centroid;
- (id)vk_expandWithOffset:(double)arg1;
- (id)vk_intersectAndFlattenWithPath:(id)arg1;
- (double)vk_lengthIgnoringCurves;
- (id)vk_pathByFittingToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)vk_pathFromFlippingInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)vk_subpathArray;
- (id)vk_unionAndFlattenWithPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore

+ (id)wf_bezierPathWithCGPath:(struct CGPath { }*)arg1;
+ (id)wf_bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadii:(struct CGSize { double x1; double x2; })arg3;

@end
