
@interface RBDomainRestriction : NSObject <NSCopying>

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id*)arg2;

- (id)_init;
- (id)allEntitlements;
- (bool)allowsContext:(id)arg1 withError:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;

@end
