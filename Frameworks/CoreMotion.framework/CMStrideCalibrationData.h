
@interface CMStrideCalibrationData : NSObject <NSCopying, NSSecureCoding> {
    double  _begin;
    double  _end;
    double  _kValue;
    long long  _state;
}

@property (nonatomic) double begin;
@property (nonatomic) double end;
@property (nonatomic) double kValue;
@property (nonatomic) long long state;

+ (bool)supportsSecureCoding;

- (double)begin;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)end;
- (id)initWithBegin:(double)arg1 end:(double)arg2 state:(long long)arg3 kValue:(double)arg4;
- (id)initWithCoder:(id)arg1;
- (double)kValue;
- (void)setBegin:(double)arg1;
- (void)setEnd:(double)arg1;
- (void)setKValue:(double)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
