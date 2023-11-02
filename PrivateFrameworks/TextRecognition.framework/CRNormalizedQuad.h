
@interface CRNormalizedQuad : NSObject <CRCodable, CRQuad> {
    CRImageSpaceQuad * _denormalizedQuad;
    struct CGSize { 
        double width; 
        double height; 
    }  _normalizationSize;
}

@property (nonatomic, readonly) double area;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) double baselineAngle;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomRight;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) CRImageSpaceQuad *denormalizedQuad;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } midPoint;
@property (readonly) struct CGSize { double x1; double x2; } normalizationSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topRight;
@property (nonatomic, readonly) VKQuad *vkQuad;

// Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)area;
- (double)aspectRatio;
- (double)baselineAngle;
- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (double)boundingBoxClippedIOUWithQuad:(id)arg1;
- (double)boundingBoxIOUWithQuad:(id)arg1;
- (bool)containsDenormalizedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)containsNormalizedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crCodableDataRepresentation;
- (id)denormalizedQuad;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCRCodableDataRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDenormalizedQuad:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithNormalizedTopLeft:(struct CGPoint { double x1; double x2; })arg1 topRight:(struct CGPoint { double x1; double x2; })arg2 bottomRight:(struct CGPoint { double x1; double x2; })arg3 bottomLeft:(struct CGPoint { double x1; double x2; })arg4 size:(struct CGSize { double x1; double x2; })arg5;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })midPoint;
- (struct CGSize { double x1; double x2; })normalizationSize;
- (bool)overlapsDenormalizedQuad:(id)arg1;
- (bool)overlapsNormalizedQuad:(id)arg1;
- (id)rotated180;
- (id)rotatedAroundDenormalizedPoint:(struct CGPoint { double x1; double x2; })arg1 angle:(float)arg2;
- (id)rotatedAroundNormalizedPoint:(struct CGPoint { double x1; double x2; })arg1 angle:(float)arg2;
- (id)scaledBy:(struct CGPoint { double x1; double x2; })arg1 normalizedOffset:(struct CGPoint { double x1; double x2; })arg2;
- (double)shortestDistanceFromDenormalizedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)shortestDistanceFromNormalizedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;
- (id)unionWithNormalizedQuad:(id)arg1 baselineAngle:(float)arg2;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (id)summaryDescription;
- (id)vkQuad;

@end
