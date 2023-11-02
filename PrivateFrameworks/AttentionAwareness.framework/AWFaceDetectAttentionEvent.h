
@interface AWFaceDetectAttentionEvent : AWAttentionEvent <NSSecureCoding> {
    double  _distance;
    unsigned long long  _faceState;
    double  _frameNumber;
    unsigned long long  _metadataType;
    bool  _metadataValid;
    NSArray * _motionData;
    unsigned long long  _orientation;
    double  _pitch;
    double  _roll;
    double  _yaw;
}

@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) unsigned long long faceState;
@property (nonatomic, readonly) double frameNumber;
@property (nonatomic, readonly) unsigned long long metadataType;
@property (getter=isMetadataValid, nonatomic, readonly) bool metadataValid;
@property (nonatomic, readonly) NSArray *motionData;
@property (nonatomic, readonly) unsigned long long orientation;
@property (nonatomic, readonly) double pitch;
@property (nonatomic, readonly) double roll;
@property (nonatomic, readonly) double yaw;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (double)distance;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)faceState;
- (double)frameNumber;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 faceMetadata:(struct AWFaceDetectMetadata { bool x1; double x2; double x3; double x4; unsigned long long x5; double x6; unsigned long long x7; double x8; unsigned long long x9; float x10[16]; }*)arg3;
- (bool)isMetadataValid;
- (unsigned long long)metadataType;
- (id)motionData;
- (unsigned long long)orientation;
- (double)pitch;
- (double)roll;
- (void)validateMask;
- (double)yaw;

@end
