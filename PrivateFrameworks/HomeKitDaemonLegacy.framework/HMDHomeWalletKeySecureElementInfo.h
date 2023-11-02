
@interface HMDHomeWalletKeySecureElementInfo : HMFObject {
    NSString * _applicationIdentifier;
    NSData * _deviceCredentialKey;
    NSString * _pairedReaderIdentifier;
    NSString * _secureElementIdentifier;
    NSString * _subCredentialIdentifier;
}

@property (readonly, copy) NSString *applicationIdentifier;
@property (readonly, copy) NSData *deviceCredentialKey;
@property (readonly, copy) NSString *pairedReaderIdentifier;
@property (readonly, copy) NSString *secureElementIdentifier;
@property (readonly, copy) NSString *subCredentialIdentifier;

+ (id)createForEasyProvisioning;
+ (id)createForExpressConflictCheckWithSecureElementIdentifier:(id)arg1;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceCredentialKey;
- (unsigned long long)hash;
- (id)initWithDeviceCredentialKey:(id)arg1 applicationIdentifier:(id)arg2 subCredentialIdentifier:(id)arg3 secureElementIdentifier:(id)arg4 pairedReaderIdentifier:(id)arg5;
- (id)initWithPKPass:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pairedReaderIdentifier;
- (id)privateDescription;
- (id)secureElementIdentifier;
- (id)shortDescription;
- (id)subCredentialIdentifier;

@end
