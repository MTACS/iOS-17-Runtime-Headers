
@interface CHProcessHandle : BSProcessHandle

@property (readonly) bool hasDataStoreReadOnlyEntitlement;
@property (readonly) bool hasDataStoreReadWriteEntitlement;
@property (readonly) bool hasDataVaultEntitlement;

+ (id)processHandle;

- (bool)hasDataStoreReadOnlyEntitlement;
- (bool)hasDataStoreReadWriteEntitlement;
- (bool)hasDataVaultEntitlement;

@end
