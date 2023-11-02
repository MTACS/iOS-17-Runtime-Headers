
@interface _SFKeySpecifier : NSObject <NSCopying, NSSecureCoding> {
    id  _keySpecifierInternal;
}

+ (Class)keyClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
