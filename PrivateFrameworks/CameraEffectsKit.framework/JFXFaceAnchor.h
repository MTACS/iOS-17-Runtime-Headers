
@interface JFXFaceAnchor : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraTransform;
    long long  _captureInterfaceOrientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceRect;
    double  _focalLength;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedFaceRect;
    long long  _preferredAnchorOrientation;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraTransform;
@property (nonatomic) long long captureInterfaceOrientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceRect;
@property (nonatomic) double focalLength;
@property (nonatomic) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedFaceRect;
@property (nonatomic) long long preferredAnchorOrientation;
@property (nonatomic, readonly) double rollAngle;
@property (nonatomic, readonly) void screenRelativePosition;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })CFX_mirrorPoseTransformLeftRight:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (id)faceAnchorWithARFrame:(id)arg1 captureInterfaceOrientation:(long long)arg2 withFaceRectScaleFactor:(struct CGSize { double x1; double x2; })arg3;
+ (bool)supportsSecureCoding;

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransform;
- (long long)captureInterfaceOrientation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRect;
- (double)focalLength;
- (double)focalLengthForViewport:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 needsMirroring:(bool)arg3 withFaceRectScaleFactor:(struct CGSize { double x1; double x2; })arg4 frameImageResolution:(struct CGSize { double x1; double x2; })arg5 captureInterfaceOrientation:(long long)arg6 preferredAnchorOrientation:(long long)arg7;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFaceRect;
- (long long)preferredAnchorOrientation;
- (double)rollAngle;
- (void)screenRelativePosition;
- (void)setCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setCaptureInterfaceOrientation:(long long)arg1;
- (void)setFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFocalLength:(double)arg1;
- (void)setImageResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setNormalizedFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreferredAnchorOrientation:(long long)arg1;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;

@end
