
@interface _DASActivityRateLimit : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _maximum;
    double  _window;
}

@property (nonatomic) unsigned long long maximum;
@property (nonatomic) double window;

+ (id)rateLimitWithMaximum:(unsigned long long)arg1 perWindow:(double)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaximum:(unsigned long long)arg1 perWindow:(double)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maximum;
- (void)setMaximum:(unsigned long long)arg1;
- (void)setWindow:(double)arg1;
- (double)window;

@end
