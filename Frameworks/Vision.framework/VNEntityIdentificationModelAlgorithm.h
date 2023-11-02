
@interface VNEntityIdentificationModelAlgorithm : NSObject <NSCopying, NSSecureCoding>

@property (readonly) Class trainedModelClass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)trainedModelClass;

@end
