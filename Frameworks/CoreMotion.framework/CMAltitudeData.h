
@interface CMAltitudeData : CMLogItem {
    id  _internal;
}

@property (nonatomic, readonly) NSNumber *pressure;
@property (nonatomic, readonly) NSNumber *relativeAltitude;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAltitude:(float)arg1 andTimestamp:(double)arg2 atBaseAltitude:(float)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 pressure:(float)arg2 relativeAltitude:(float)arg3;
- (id)pressure;
- (id)relativeAltitude;

@end
