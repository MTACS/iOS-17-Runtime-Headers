
@interface SKWarpGeometry : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly) bool isIdentityWarp;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isIdentityWarp;

@end
