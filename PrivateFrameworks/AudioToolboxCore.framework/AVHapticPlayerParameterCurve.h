
@interface AVHapticPlayerParameterCurve : NSObject <NSSecureCoding> {
    NSArray * _controlPoints;
    unsigned long long  _shape;
    double  _time;
    unsigned long long  _type;
}

@property (readonly) NSArray *controlPoints;
@property unsigned long long shape;
@property double time;
@property unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)controlPoints;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 relativeTime:(double)arg2 shape:(unsigned long long)arg3 controlPoints:(id)arg4;
- (void)setShape:(unsigned long long)arg1;
- (void)setTime:(double)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)shape;
- (double)time;
- (unsigned long long)type;

@end
