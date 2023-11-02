
@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>

+ (id)codedPropertyKeys;
+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (id)_gkDescriptionWithChildren:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionSubstitutionMap;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)mergePropertiesFrom:(id)arg1;
- (id)serverRepresentation;

@end
