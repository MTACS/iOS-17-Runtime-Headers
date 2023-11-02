
@interface _CLVIOEstimation : NSObject <NSCopying, NSSecureCoding> {
    struct CGSize { 
        double width; 
        double height; 
    }  _cameraImageResolution;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _cameraIntrinsics;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraPose;
    NSData * _inertialCovariance;
    struct { 
        unsigned long long covarianceSizeInBytes; 
        unsigned char covarianceSize; 
        unsigned char orientationCovOffset; 
        unsigned char orientationDof; 
        unsigned char gyroBiasCovOffset; 
        unsigned char gyroBiasDof; 
        unsigned char velocityCovOffset; 
        unsigned char velocityDof; 
        unsigned char accelBiasCovOffset; 
        unsigned char accelBiasDof; 
        unsigned char positionCovOffset; 
        unsigned char positionDof; 
    }  _inertialCovarianceInfo;
    NSData * _inertialState;
    struct { 
        unsigned long long stateLengthInBytes; 
        unsigned char stateLength; 
        unsigned char orientationOffset; 
        unsigned char orientationLength; 
        unsigned char gyroBiasOffset; 
        unsigned char gyroBiasLength; 
        unsigned char velocityOffset; 
        unsigned char velocityLength; 
        unsigned char accelBiasOffset; 
        unsigned char accelBiasLength; 
        unsigned char positionOffset; 
        unsigned char positionLength; 
    }  _inertialStateInfo;
    double  _originTimestamp;
    double  _timestamp;
    int  _trackingState;
}

@property (nonatomic) struct CGSize { double x1; double x2; } cameraImageResolution;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsics;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraPose;
@property (nonatomic, copy) NSData *inertialCovariance;
@property (nonatomic) struct { unsigned long long x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; } inertialCovarianceInfo;
@property (nonatomic, copy) NSData *inertialState;
@property (nonatomic) struct { unsigned long long x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; } inertialStateInfo;
@property (nonatomic) double originTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) int trackingState;

+ (bool)supportsSecureCoding;

- (struct CGSize { double x1; double x2; })cameraImageResolution;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsics;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraPose;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)inertialCovariance;
- (struct { unsigned long long x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; })inertialCovarianceInfo;
- (id)inertialState;
- (struct { unsigned long long x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; })inertialStateInfo;
- (id)initWithCoder:(id)arg1;
- (double)originTimestamp;
- (void)setCameraImageResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setCameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setCameraPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setInertialCovariance:(id)arg1;
- (void)setInertialCovarianceInfo:(struct { unsigned long long x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; })arg1;
- (void)setInertialState:(id)arg1;
- (void)setInertialStateInfo:(struct { unsigned long long x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; })arg1;
- (void)setOriginTimestamp:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTrackingState:(int)arg1;
- (double)timestamp;
- (int)trackingState;

@end
