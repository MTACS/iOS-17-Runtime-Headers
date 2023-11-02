
@interface REMChangeToken : NSObject <NSCopying, NSSecureCoding>

+ (bool)supportsSecureCoding;

- (long long)compareToken:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
