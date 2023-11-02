
@interface ARCamera : NSObject <NSCopying, NSSecureCoding> {
    AVCameraCalibrationData * _calibrationData;
    long long  _devicePosition;
    double  _exposureDuration;
    float  _exposureOffset;
    NSDictionary * _extrinsicsMap;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _intrinsics;
    unsigned long long  _lensType;
    void _radialDistortion;
    void _tangentialDistortion;
    long long  _trackingState;
    long long  _trackingStateReason;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
}

@property (nonatomic, retain) AVCameraCalibrationData *calibrationData;
@property (nonatomic) long long devicePosition;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } displayCenterTransform;
@property (nonatomic, readonly) void eulerAngles;
@property (nonatomic) double exposureDuration;
@property (nonatomic) float exposureOffset;
@property (nonatomic, retain) NSDictionary *extrinsicsMap;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } focalLength;
@property (nonatomic) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } intrinsics;
@property (nonatomic) unsigned long long lensType;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } principalPoint;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } projectionMatrix;
@property (nonatomic) void radialDistortion;
@property (nonatomic) void tangentialDistortion;
@property (nonatomic) long long trackingState;
@property (nonatomic) long long trackingStateReason;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_description:(bool)arg1;
- (id)calibrationData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (long long)devicePosition;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })displayCenterTransform;
- (void)encodeWithCoder:(id)arg1;
- (void)eulerAngles;
- (double)exposureDuration;
- (float)exposureOffset;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })extrinsicMatrix4x4ToDeviceType:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })extrinsicMatrixToDeviceType:(id)arg1;
- (id)extrinsicsMap;
- (struct CGPoint { double x1; double x2; })focalLength;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)init;
- (id)initFromImageData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 imageResolution:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithIntrinsics:(void *)arg1 imageResolution:(void *)arg2 devicePosition:(void *)arg3 lensType:(void *)arg4 radialDistortion:(void *)arg5 tangentialDistortion:(void *)arg6 exposureDuration:(void *)arg7 calibrationData:(void *)arg8 extrinsicsMap:(void *)arg9; // needs 9 arg types, found 7: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, struct CGSize { double x1; double x2; }, long long, unsigned long long, double, id, id
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })intrinsics;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lensType;
- (struct CGPoint { double x1; double x2; })principalPoint;
- (struct CGPoint { double x1; double x2; })projectPoint:(void *)arg1 orientation:(void *)arg2 viewportSize:(void *)arg3; // needs 3 arg types, found 2: long long, struct CGSize { double x1; double x2; }
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })projectionMatrix;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })projectionMatrixForOrientation:(long long)arg1 viewportSize:(struct CGSize { double x1; double x2; })arg2 zNear:(double)arg3 zFar:(double)arg4;
- (void)radialDistortion;
- (void)setCalibrationData:(id)arg1;
- (void)setDevicePosition:(long long)arg1;
- (void)setExposureDuration:(double)arg1;
- (void)setExposureOffset:(float)arg1;
- (void)setExtrinsicsMap:(id)arg1;
- (void)setImageResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setLensType:(unsigned long long)arg1;
- (void)setRadialDistortion;
- (void)setTangentialDistortion;
- (void)setTrackingState:(long long)arg1;
- (void)setTrackingStateReason:(long long)arg1;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)tangentialDistortion;
- (long long)trackingState;
- (long long)trackingStateReason;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (void)unprojectPoint:(struct CGPoint { double x1; double x2; })arg1 ontoPlaneWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 orientation:(long long)arg3 viewportSize:(struct CGSize { double x1; double x2; })arg4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })viewMatrixForOrientation:(long long)arg1;

@end
