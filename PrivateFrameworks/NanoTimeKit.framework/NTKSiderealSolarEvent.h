
@interface NTKSiderealSolarEvent : NSObject <NSSecureCoding> {
    double  _degree;
    NSDate * _time;
    long long  _type;
}

@property (nonatomic, readonly) double angle;
@property (nonatomic, readonly) double degree;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) long long type;

+ (id)eventWithType:(long long)arg1 degree:(double)arg2;
+ (id)eventWithType:(long long)arg1 time:(id)arg2 degree:(double)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)angle;
- (id)debugNameForType:(long long)arg1;
- (double)degree;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)time;
- (long long)type;

@end
