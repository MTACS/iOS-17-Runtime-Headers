
@interface CMWaterTemperature : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    NSMeasurement * _temperature;
    NSMeasurement * _temperatureUncertainty;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSMeasurement *temperature;
@property (nonatomic, readonly) NSMeasurement *temperatureUncertainty;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemperature:(id)arg1 andTemperatureUncertainty:(id)arg2 andDate:(id)arg3;
- (id)temperature;
- (id)temperatureUncertainty;

@end
