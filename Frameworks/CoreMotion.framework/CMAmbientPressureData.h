
@interface CMAmbientPressureData : CMLogItem <SRSampleDirectExporting> {
    NSMeasurement * _pressure;
    NSMeasurement * _temperature;
}

@property (nonatomic, readonly) NSMeasurement *pressure;
@property (nonatomic, readonly) NSMeasurement *temperature;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPressure:(struct { float x1; float x2; })arg1 andTimestamp:(double)arg2;
- (id)pressure;
- (bool)sr_prefersUTF8StringRepresentation;
- (long long)sr_writeUTF8RepresentationToOutputStream:(id)arg1;
- (id)temperature;

@end
