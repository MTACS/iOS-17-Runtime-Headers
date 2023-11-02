
@interface RMPose : RMLogItem {
    RMAttitude * _attitude;
    double  _consumedAuxTimestamp;
    double  _machAbsTimestamp;
    double  _receivedAuxTimestamp;
}

@property (nonatomic, readonly) RMAttitude *attitude;
@property (nonatomic, readonly) double consumedAuxTimestamp;
@property (nonatomic) double machAbsTimestamp;
@property (nonatomic, readonly) double receivedAuxTimestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAttitude:(id)arg1 consumedAuxTimestamp:(double)arg2 receivedAuxTimestamp:(double)arg3 machAbsTimestamp:(double)arg4;
- (id)attitude;
- (double)consumedAuxTimestamp;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)machAbsTimestamp;
- (double)receivedAuxTimestamp;
- (void)setMachAbsTimestamp:(double)arg1;

@end
