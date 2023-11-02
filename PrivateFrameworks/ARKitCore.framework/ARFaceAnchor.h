
@interface ARFaceAnchor : ARAnchor <ARTrackable> {
    NSDictionary * _blendShapeCoefficientsDictionary;
    ARFaceGeometry * _geometry;
    bool  _isTracked;
    <ARFaceTrackingDataProtocol> * _trackingData;
    NSError * _trackingError;
}

@property (nonatomic, readonly) NSDictionary *blendShapes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ARFaceGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTracked;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } leftEyeTransform;
@property (nonatomic, readonly) void lookAtPoint;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } rightEyeTransform;
@property (readonly) Class superclass;
@property (nonatomic, retain) <ARFaceTrackingDataProtocol> *trackingData;
@property (nonatomic, retain) NSError *trackingError;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

+ (id)blendShapeMapping;
+ (id)blendShapeToMirroredBlendShapeMapping;
+ (id)mirroredBlendShapeMapping;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blendShapes;
- (id)copyWithTrackedState:(bool)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)faceTrackingData;
- (void)gazePoint;
- (id)geometry;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)imageVertices;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExistingFaceAnchor:(id)arg1 tracked:(bool)arg2 trackingError:(id)arg3;
- (id)initWithIdentifier:(id)arg1 faceTrackingData:(id)arg2;
- (id)initWithIdentifier:(id)arg1 trackingData:(id)arg2;
- (bool)isEqualToFaceAnchor:(id)arg1;
- (bool)isTracked;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })leftEyeTransform;
- (void)lookAtPoint;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rightEyeTransform;
- (void)setIsTracked:(bool)arg1;
- (void)setTrackingData:(id)arg1;
- (void)setTrackingError:(id)arg1;
- (id)trackingData;
- (id)trackingError;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

- (float)_avt_rawBlendShapeAtLocation:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_avt_rawTransform;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFaceRect;

@end
