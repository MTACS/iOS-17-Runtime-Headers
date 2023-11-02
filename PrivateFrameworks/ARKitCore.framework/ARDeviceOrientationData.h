
@interface ARDeviceOrientationData : NSObject <ARDaemonSecureCoding, ARDictionaryCoding, ARMetadataWrapperCoding, ARSensorData, NSCopying> {
    CMDeviceMotion * _deviceMotion;
    struct { 
        double m11; 
        double m12; 
        double m13; 
        double m21; 
        double m22; 
        double m23; 
        double m31; 
        double m32; 
        double m33; 
    }  _rotationMatrix;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CMDeviceMotion *deviceMotion;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; } rotationMatrix;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } rotationMatrixENU;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

+ (id)grabNextFromReader:(id)arg1 timestamp:(double*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendToWriter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceMotion;
- (id)encodeToDictionary;
- (id)encodeToMetadataWrapper;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMetadataWrapper:(id)arg1;
- (id)initWithMotionData:(id)arg1;
- (id)initWithTimestamp:(double)arg1 rotationMatrix:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg2;
- (bool)isEqual:(id)arg1;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })rotationMatrix;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rotationMatrixENU;
- (void)setDeviceMotion:(id)arg1;
- (void)setRotationMatrix:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
