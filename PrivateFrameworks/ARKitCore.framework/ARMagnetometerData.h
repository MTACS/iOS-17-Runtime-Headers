
@interface ARMagnetometerData : NSObject <ARMetadataWrapperCoding, ARMutableSensorData, NSSecureCoding> {
    struct { 
        double x; 
        double y; 
        double z; 
    }  _magneticField;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { double x1; double x2; double x3; } magneticField;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

+ (id)grabNextFromReader:(id)arg1 timestamp:(double*)arg2;
+ (bool)supportsSecureCoding;

- (void)appendToWriter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeToMetadataWrapper;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompassData:(id)arg1;
- (id)initWithMetadataWrapper:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct { double x1; double x2; double x3; })magneticField;
- (void)setMagneticField:(struct { double x1; double x2; double x3; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
