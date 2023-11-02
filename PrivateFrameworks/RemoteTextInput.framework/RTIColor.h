
@interface RTIColor : NSObject <NSCopying, NSSecureCoding> {
    struct CGColor { } * _cgColor;
    unsigned int  _type;
    double  _values;
}

+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (bool)supportsSecureCoding;

- (struct CGColor { }*)cgColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
