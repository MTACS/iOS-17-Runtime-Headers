
@interface CMAbsoluteAltitudeData : CMLogItem {
    double  _absoluteAltitudeAccuracy;
    double  _absoluteAltitudePrecision;
    long long  _absoluteAltitudeStatusInfo;
    double  _accuracy;
    double  _altitude;
    double  _altitudePrivate;
    double  _precision;
}

@property (nonatomic, readonly) NSNumber *absoluteAltitude;
@property (nonatomic, readonly) double absoluteAltitudeAccuracy;
@property (nonatomic, readonly) double absoluteAltitudePrecision;
@property (nonatomic, readonly) long long absoluteAltitudeStatusInfo;
@property (nonatomic, readonly) double accuracy;
@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double precision;

+ (bool)supportsSecureCoding;

- (id)absoluteAltitude;
- (double)absoluteAltitudeAccuracy;
- (double)absoluteAltitudePrecision;
- (long long)absoluteAltitudeStatusInfo;
- (double)accuracy;
- (double)altitude;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAltitude:(double)arg1 accuracy:(double)arg2 precision:(double)arg3 status:(long long)arg4 timestamp:(double)arg5;
- (id)initWithCoder:(id)arg1;
- (double)precision;
- (void)setAltitudeData:(double)arg1 accuracy:(double)arg2 precision:(double)arg3 status:(long long)arg4;

@end
