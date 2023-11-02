
@interface HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation : HMFObject <NSCopying> {
    NSSet * _accessoriesUUIDs;
    NSData * _deviceCredentialKey;
    HMDUser * _user;
}

@property (readonly, copy) NSSet *accessoriesUUIDs;
@property (readonly, copy) NSData *deviceCredentialKey;
@property (readonly) HMDUser *user;

- (void).cxx_destruct;
- (id)accessoriesUUIDs;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceCredentialKey;
- (id)initWithDeviceCredentialKey:(id)arg1 accessories:(id)arg2 user:(id)arg3;
- (id)initWithDeviceCredentialKey:(id)arg1 accessoriesUUIDs:(id)arg2 user:(id)arg3;
- (id)operationByMergingWithOperation:(id)arg1;
- (id)user;

@end
