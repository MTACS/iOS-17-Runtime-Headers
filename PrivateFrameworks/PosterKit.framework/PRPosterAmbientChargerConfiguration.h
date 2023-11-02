
@interface PRPosterAmbientChargerConfiguration : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding, PRPosterRoleAttribute> {
    NSSet * _associatedChargerIdentifiers;
}

@property (nonatomic, retain) NSSet *associatedChargerIdentifiers;
@property (nonatomic, readonly) NSString *attributeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)decodeObjectWithJSON:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedChargerIdentifiers;
- (id)attributeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeJSON;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAssociatedChargerIdentifiers:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAssociatedWithChargerIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChargerConfiguration:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAssociatedChargerIdentifiers:(id)arg1;

@end
