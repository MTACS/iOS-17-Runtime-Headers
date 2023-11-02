
@interface JFXARMetadata : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _anchorTransform;
    NSDictionary * _animojiPhysicsBlendShapes;
    ARFrame * _arFrame;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _cameraIntrinsics;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraTransform;
    JFXFaceAnchor * _faceAnchor;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
    long long  _pvTransformOrientation;
}

@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } anchorTransform;
@property (nonatomic, copy) NSDictionary *animojiPhysicsBlendShapes;
@property (nonatomic, readonly) ARFrame *arFrame;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsics;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraTransform;
@property (nonatomic, readonly) JFXFaceAnchor *faceAnchor;
@property (nonatomic, readonly) bool hasTrackedFace;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic, readonly) long long pvTransformOrientation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })anchorTransform;
- (id)animojiPhysicsBlendShapes;
- (id)arFrame;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsics;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraProjectionForOutputSize:(struct CGSize { double x1; double x2; })arg1 interfaceOrientation:(long long)arg2 zNear:(double)arg3 zFar:(double)arg4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransform;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransformForInterfaceOrientation:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)faceAnchor;
- (bool)hasTrackedFace;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)initWithARFrame:(id)arg1 faceAnchor:(id)arg2;
- (id)initWithAnchorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 cameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 cameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg3 cameraImageResolution:(struct CGSize { double x1; double x2; })arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceAnchor:(id)arg1 cameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2;
- (long long)pvTransformOrientation;
- (void)setAnimojiPhysicsBlendShapes:(id)arg1;

@end
