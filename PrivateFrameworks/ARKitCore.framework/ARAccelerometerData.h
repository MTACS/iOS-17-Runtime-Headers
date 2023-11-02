
@interface ARAccelerometerData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, NSSecureCoding> {
    struct { 
        double x; 
        double y; 
        double z; 
    }  _acceleration;
    double  _temperature;
    double  _timestamp;
}

@property (nonatomic) struct { double x1; double x2; double x3; } acceleration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double temperature;
@property (nonatomic) double timestamp;

+ (id)grabNextFromReader:(id)arg1 timestamp:(double*)arg2;
+ (bool)supportsSecureCoding;

- (struct { double x1; double x2; double x3; })acceleration;
- (void)appendToWriter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeToDictionary;
- (id)encodeToMetadataWrapper;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccelData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMetadataWrapper:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAcceleration:(struct { double x1; double x2; double x3; })arg1;
- (void)setTemperature:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (double)temperature;
- (double)timestamp;

@end
