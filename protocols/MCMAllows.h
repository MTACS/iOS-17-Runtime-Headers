
@protocol MCMAllows

@required

- (bool)isAllowedToAccessCodesignMapping;
- (bool)isAllowedToAccessInfoMetadata;
- (bool)isAllowedToAccessUserAssets;
- (bool)isAllowedToChangeReferences;
- (bool)isAllowedToControlCaches;
- (bool)isAllowedToDelete;
- (bool)isAllowedToLookupAllContainersOfClass:(unsigned long long)arg1;
- (bool)isAllowedToLookupContainerIdentity:(MCMContainerIdentityMinimal *)arg1;
- (bool)isAllowedToLookupGroupContainersOfClass:(unsigned long long)arg1 ownedByIdentifier:(NSString *)arg2;
- (bool)isAllowedToLookupViaPrivateEntitlementWithClass:(unsigned long long)arg1 identifier:(NSString *)arg2;
- (bool)isAllowedToReadReferences;
- (bool)isAllowedToRecreateContainerStructure;
- (bool)isAllowedToRegenerateDirectoryUUIDs;
- (bool)isAllowedToReplaceContainers;
- (bool)isAllowedToRestoreContainer;
- (bool)isAllowedToSetDataProtection;
- (bool)isAllowedToStageSharedContent;
- (bool)isAllowedToStartDataMigration;
- (bool)isAllowedToStartUserDataMigration;
- (bool)isAllowedToTest;
- (bool)isAllowedToWipeAnyDataContainer;
- (bool)isAllowedToWipePlugInDataContainerWithIdentifier:(NSString *)arg1;

@end
