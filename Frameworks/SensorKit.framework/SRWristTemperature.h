
@interface SRWristTemperature : NSObject <NSCopying, NSSecureCoding, SRSampleExporting> {
    unsigned long long  _condition;
    NSMeasurement * _errorEstimate;
    NSMeasurement * _temperatureT1;
    NSMeasurement * _temperatureT2;
    NSDate * _timestamp;
    NSMeasurement * _value;
}

@property (nonatomic, readonly) unsigned long long condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMeasurement *errorEstimate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMeasurement *temperatureT1;
@property (nonatomic, readonly) NSMeasurement *temperatureT2;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSMeasurement *value;

+ (void)initialize;
+ (id)new;
+ (bool)supportsSecureCoding;

- (unsigned long long)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)errorEstimate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1 temperature:(id)arg2 condition:(unsigned long long)arg3 errorEstimate:(id)arg4 temperatureT1:(id)arg5 temperatureT2:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)sr_dictionaryRepresentation;
- (id)temperatureT1;
- (id)temperatureT2;
- (id)timestamp;
- (id)value;

@end
