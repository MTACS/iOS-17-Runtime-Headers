
@interface CPSRestrictedAccessRequest : CPSAuthenticationRequest <BSXPCCoding, NSSecureCoding> {
    NSArray * _approversAppleAccountAltDSIDs;
    long long  _restrictionType;
}

@property (nonatomic, retain) NSArray *approversAppleAccountAltDSIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long restrictionType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)approversAppleAccountAltDSIDs;
- (long long)authType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (long long)restrictionType;
- (void)setApproversAppleAccountAltDSIDs:(id)arg1;
- (void)setRestrictionType:(long long)arg1;

@end
