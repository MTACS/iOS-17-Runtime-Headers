
@interface GDWeatherTypeValue : NSObject <NSCopying, NSSecureCoding> {
    long long  _type;
    double  _typeValue;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double typeValue;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 typeValue:(double)arg2;
- (long long)type;
- (double)typeValue;

@end
