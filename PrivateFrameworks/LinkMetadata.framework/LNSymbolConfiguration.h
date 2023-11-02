
@interface LNSymbolConfiguration : NSObject <NSCopying, NSSecureCoding> {
    double  _pointSize;
    long long  _scale;
    long long  _weight;
}

@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) long long scale;
@property (nonatomic, readonly) long long weight;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPointSize:(double)arg1 scale:(long long)arg2 weight:(long long)arg3;
- (double)pointSize;
- (long long)scale;
- (long long)weight;

@end
