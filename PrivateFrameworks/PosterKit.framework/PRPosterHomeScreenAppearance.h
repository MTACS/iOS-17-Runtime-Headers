
@interface PRPosterHomeScreenAppearance : NSObject <NSCopying, NSSecureCoding>

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
