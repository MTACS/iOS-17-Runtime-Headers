
@interface POUser : _POJWTBodyBase <NSSecureCoding>

@property (readonly) NSString *altSecurityIdentity;
@property (readonly) NSString *generatedUUID;
@property (readonly) NSString *loginUserName;
@property (readonly) NSString *uid;
@property (readonly) NSString *uniqueIdpIdentifier;

+ (bool)supportsSecureCoding;

- (id)altSecurityIdentity;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)generatedUUID;
- (id)initWithCoder:(id)arg1;
- (id)loginUserName;
- (id)mutableCopy;
- (id)uid;
- (id)uniqueIdpIdentifier;

@end
