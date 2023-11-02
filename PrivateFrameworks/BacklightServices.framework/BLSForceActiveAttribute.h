
@interface BLSForceActiveAttribute : BLSAttribute <BSXPCCoding> {
    bool  _userInitiated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool userInitiated;

+ (id)forceActive;
+ (id)forceActiveUserInitiated:(bool)arg1;
+ (bool)supportsSecureCoding;

- (bool)checkEntitlementSourceForRequiredEntitlements:(id)arg1 error:(out id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserInitiated:(bool)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)userInitiated;

@end
