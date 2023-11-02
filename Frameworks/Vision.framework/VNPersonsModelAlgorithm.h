
@interface VNPersonsModelAlgorithm : NSObject <NSCopying, NSSecureCoding>

@property (readonly) Class faceModelClass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)faceModelClass;
- (id)initWithCoder:(id)arg1;

@end
