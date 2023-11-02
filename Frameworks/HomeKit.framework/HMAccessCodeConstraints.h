
@interface HMAccessCodeConstraints : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    unsigned long long  _allowedCharacterSets;
    long long  _maximumAllowedAccessCodes;
    long long  _maximumLength;
    long long  _minimumLength;
}

@property (readonly) unsigned long long allowedCharacterSets;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long maximumAllowedAccessCodes;
@property (readonly) long long maximumLength;
@property (readonly) long long minimumLength;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (unsigned long long)allowedCharacterSets;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAllowedCharacterSets:(unsigned long long)arg1 minimumLength:(long long)arg2 maximumLength:(long long)arg3 maximumAllowedAccessCodes:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)maximumAllowedAccessCodes;
- (long long)maximumLength;
- (long long)minimumLength;
- (id)privateDescription;
- (id)shortDescription;

@end
