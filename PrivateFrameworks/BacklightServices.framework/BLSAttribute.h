
@interface BLSAttribute : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (bool)canBePaused;
- (bool)checkEntitlementSource:(id)arg1 forSingleEntitlement:(id)arg2 error:(out id*)arg3;
- (bool)checkEntitlementSourceForRequiredEntitlements:(id)arg1 error:(out id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)errorForMissingEntitlement:(id)arg1 inSource:(id)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
