
@interface PRRelativePosition : NSObject <NSCopying, NSSecureCoding> {
    PRAngleMeasurement * _azimuth;
    long long  _cycleIndex;
    PRAngleMeasurement * _elevation;
    PRRangeMeasurement * _range;
    double  _timestamp;
}

@property (nonatomic, readonly) PRAngleMeasurement *azimuth;
@property (readonly) long long cycleIndex;
@property (nonatomic, readonly) PRAngleMeasurement *elevation;
@property (nonatomic, readonly) PRRangeMeasurement *range;
@property (readonly) double timestamp;

+ (id)relativePositionWithTimestamp:(double)arg1 range:(id)arg2 azimuth:(id)arg3 elevation:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)azimuth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cycleIndex;
- (id)description;
- (id)elevation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 range:(id)arg2 azimuth:(id)arg3 elevation:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)range;
- (double)timestamp;

@end
