
@interface CMWaterSubmersionMeasurement : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    NSMeasurement * _depth;
    NSMeasurement * _pressure;
    long long  _submersionState;
    NSMeasurement * _surfacePressure;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSMeasurement *depth;
@property (nonatomic, readonly) NSMeasurement *pressure;
@property (nonatomic, readonly) long long submersionState;
@property (nonatomic, readonly) NSMeasurement *surfacePressure;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)depth;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDepth:(id)arg1 andPressure:(id)arg2 andSurfacePressure:(id)arg3 andState:(long long)arg4 andDate:(id)arg5;
- (id)pressure;
- (long long)submersionState;
- (id)surfacePressure;

@end
