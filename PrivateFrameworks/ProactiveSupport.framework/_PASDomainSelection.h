
@interface _PASDomainSelection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)_initWithNonOverlappingDomainSet:(id)arg1;
- (id)allDomains;
- (bool)containsDomain:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)globPatterns;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1;
- (id)initWithDomainsFromArray:(id)arg1;
- (id)initWithDomainsFromSet:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDomainSelection:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
