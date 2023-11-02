
@interface PRUIModalEntryPointPosterSelection : NSObject <PRUIModalEntryPoint> {
    NSSet * _allowedConfigurationUUIDs;
    NSUUID * _selectedConfigurationUUID;
}

@property (nonatomic, readonly, copy) NSSet *allowedConfigurationUUIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *selectedConfigurationUUID;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_BSXPCSecureCodingEntryPointTypeString;
- (id)allowedConfigurationUUIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAllowedConfigurationUUIDs:(id)arg1;
- (id)initWithAllowedConfigurationUUIDs:(id)arg1 selectedConfigurationUUID:(id)arg2;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)selectedConfigurationUUID;

@end
