
@interface CMRecordedPressureData : CMAmbientPressureData <SRSampleDirectExporting> {
    unsigned long long  _identifier;
    NSMeasurement * _pressureMeasurement;
    float  _pressureValue;
    double  _startDateValue;
    NSMeasurement * _temperatureMeasurement;
    float  _temperatureValue;
    double  _timestampValue;
}

@property (readonly) unsigned long long identifier;
@property (readonly) NSDate *startDate;
@property (readonly) double startTime;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(struct CMPressure { float x1; float x2; float x3; unsigned long long x4; }*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;
- (id)pressure;
- (void)resetWithData:(struct CMPressure { float x1; float x2; float x3; unsigned long long x4; }*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;
- (bool)sr_prefersUTF8StringRepresentation;
- (long long)sr_writeUTF8RepresentationToOutputStream:(id)arg1;
- (id)startDate;
- (double)startTime;
- (id)temperature;
- (double)timestamp;

@end
