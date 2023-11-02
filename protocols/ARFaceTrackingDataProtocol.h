
@protocol ARFaceTrackingDataProtocol <NSObject, NSSecureCoding, NSCopying>

@required

- (const float*)blendShapeCoefficients;
- (unsigned long long)blendShapeCoefficientsCount;
- (id)gazePoint;
- (NSUUID *)identifier;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)imageVertices;
- (bool)isValid;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })leftEyeTransform;
- (unsigned long long)normalCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)normals;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rightEyeTransform;
- (NSDictionary *)trackingData;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (unsigned long long)vertexCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)vertices;

@end
