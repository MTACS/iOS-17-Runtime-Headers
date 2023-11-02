
@interface FATObject : NSObject <NSCoding, NSCopying>

+ (id)structFields;
+ (id)structName;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)read:(id)arg1;
- (void)write:(id)arg1;

@end
