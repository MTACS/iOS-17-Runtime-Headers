
@interface CMPose : CMLogItem {
    id  _internal;
}

@property (nonatomic, readonly) CMAttitude *attitude;
@property (nonatomic, readonly) double consumedAuxTimestamp;
@property (nonatomic, readonly) double machAbsTimestamp;
@property (nonatomic, readonly) double receivedAuxTimestamp;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } translation;

+ (bool)supportsSecureCoding;

- (id)attitude;
- (double)consumedAuxTimestamp;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPose:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; double x3; double x4; double x5; })arg1 timestamp:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPose:(id)arg1;
- (double)machAbsTimestamp;
- (double)receivedAuxTimestamp;
- (struct { double x1; double x2; double x3; })translation;

@end
